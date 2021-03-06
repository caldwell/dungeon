#!/usr/bin/env ruby

require 'optparse'
output=nil
dump=false

(opts=OptionParser.new do |opts|
  opts.banner = "Usage:\n\t#{$0} [options] [dungeon-text-file]"
  opts.on("-f", "--format FORMAT", "Format text 'text' or 'html' before encoding") { |f| output = f.to_sym }
  opts.on("-d", "--dump", "Dump text after formatting instead of encoding") {|d| dump = true }
  opts.on_tail("-h", "--help") { puts opts; exit }
end).parse!

input = ARGV.shift

class BinaryEncoder # Built to match the decoder in dsub.c
  attr_accessor :index, :data

  @@encrypt_key='david+caldwell@porkrind.org'

  def initialize
    @encrypt=@@encrypt_key.split('').map {|c| c.ord}
    @index=[]
    @data=[0] # invalid entry @ zero, so all valid entries are !0
  end

  def add(id, text)
    x = @index[-id] = @data.count
    @data.append(*(text.chomp('').split('')+[0]).map {|c|
                   enc = c.ord ^ @encrypt[x % @encrypt.count] ^ (x & 0xff)
                   x+=1
                   enc
                 })
  end

  def index_to_s
    "int dtext_index[] = {\n" +
      @index.each_with_index.map {|off,i| "    [#{i}] = #{off},\n" if off }.join("") +
    "};\n"
  end

  def data_to_s
    "unsigned char dtext_data[] = {\n" +
      @data.each_slice(16).map { |chunk|
        "    "+ chunk.map {|c| sprintf("0x%02x,",c) }.join(" ") + "\n"
      }.join("") +
    "};\n"
  end

  def to_s
    index_to_s + data_to_s
  end
end

require 'base64'
def format_html(id, text)
  text.gsub!(/</, "&lt;")
  text.gsub!(/>/, "&gt;")
  text.gsub!(/```\n(.*)```\n/m) {|| "{{ #{Base64.encode64($1)} }}" } # Hide verbatim stuff. b64 doesn't use '{' so we're ok
  text.gsub!('{&lt;', '{<') # sigh, this is gross
  text.gsub!('{&gt;', '{>')

  text.gsub!(/\{#([^}]+)#\}\n/m) {|| ''}
  text.gsub!(/\{HTML\n(.+?)HTML\}\n/m) {|| $1}
  text.gsub!(/\{TEXT\n(.+?)TEXT\}\n/m) {|| ''}

  cls = { '<' => 'left', '>' => 'right', '=' => 'center' }
  text.gsub!(/\{([<>=])([^}]+)\}/) {|| "<div class=\"#{cls[$1]}\">#{$2.strip}</div>" }

  # Underscore is only used in verbatim pictures, so lets steal it for nbsp;
  text.gsub!('_', '&nbsp;')

  # generally unwrap paragraphs
  text.gsub!(/([^-])-\n\t?([a-z])/i, '\1\2') # Line ends with a dash (but not 2!) then reconnect the split word
  text.gsub!(/([^\n"])\n([a-z('])/i, '\1 \2')# Line starts with non-indented character after a non-blank line (but not if the line ended in a quote)
  text.gsub!(/,\n(\S)/, ' \1')               # Line ends with a comma
  text.gsub!(/\.\n(\S)/, '  \1')             # Line ends with a period and the next sentence is not indented

  if id == -64 # help is full of special cases
    text.gsub!(/^( *)([A-Za-z ]+:) *$/m) {|| tag = $1 == '' ? 'h1' : 'dt'; "<#{tag}>#{$2}</#{tag}>"}
    text.gsub!(/(?:^\t.+\n)+/) {|paragraph| "<dd>#{paragraph.chomp.gsub("\t","").gsub("\n", " ")}</dd>" }
    text.gsub!(%r'(<dt>.*</dd>)'m, '<dl>\1</dl>') # Wrap the all the dd/dt in a dl
    text.gsub!(%r'</dt>\n<dd>', '</dt><dd>')   # Remove extra return between the headings and paragraphs (since we live in a <pre>)
  end

  # Link things that look like links
  text.gsub!(%r@(https?://\S+)@, '<a href="\1\">\1</a>')

  text.gsub!(/\{\{([^}]+)\}\}/) { || # Restore verbatim stuff
    pre = Base64.decode64($1)
    longest_line = pre.split("\n").map {|s| s.length }.max
    "<pre class=\"width_#{longest_line/10}x\">#{pre}</pre>"
  }

  text
end

def format_text(id, text)
  text.gsub!(/```\n(.*)```\n/m) {|| "{{ #{Base64.encode64($1)} }}" } # Hide verbatim stuff. b64 doesn't use '{' so we're ok
  text.gsub!(/\{#([^}]+)#\}\n/m) {|| ''}
  text.gsub!(/\{HTML\n(.+?)HTML\}\n/m) {|| ''}
  text.gsub!(/\{TEXT\n(.+?)TEXT\}\n/m) {|| $1}
  text.gsub!(/^([^\n]*)\{<([^}]+)\}/) {|| $1+$2.strip }
  width=70 # There's no real hard width in the original code, but it's somewhere in the 60-72 range
  text.gsub!(/^([^\n]*)\{>([^}]+)\}/) {|| t=$2.strip; $1+(" "*(width - t.length - $1.length))+t }
  text.gsub!(/^([^\n]*)\{=([^}]+)\}/) {|| t=$2.strip; $1+(" "*((width - t.length)/2 - $1.length))+t }
  text.gsub!('_', ' ')
  text.gsub!(/\{\{([^}]+)\}\}/) {|| Base64.decode64($1) } # Restore verbatim stuff
  text
end

require 'pp'

raw={}
id=nil
text=''
(input ? File.readlines(input) : STDIN.readlines()).each do |line|
  if m=line.match(/^## (.*)$/)
    raw[id]=text if id
    id = m[1].to_i
    text = ''
  else
    text += line
  end
end
raw[id]=text

formatted={}
raw.each do |id, text|
  formatted[id] = output == :html ? format_html(id, text) : format_text(id, text)
rescue => e
  raise "Error formatting #{id}: #{e}. Entry was:\n#{text}"
end

if dump
  formatted.each {|id, text| print "## #{id}\n#{text}"}
  return
end

encoder = BinaryEncoder.new()

formatted.each {|id, text| encoder.add(id, text) }

puts encoder.to_s

# Check the current text output against the pre-marked up dtextc.txt:
# ./encode.rb dtextc.txt --format=text --dump | diff -u <(git show 6752adfd0d02e655b97bb9b02c008227e56dd025:dtextc.txt) -

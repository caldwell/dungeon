#!/usr/bin/env ruby

require 'optparse'

(opts=OptionParser.new do |opts|
  opts.banner = "Usage:\n\t#{$0} [options] [dungeon-text-file]"
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

require 'pp'

raw={}
id=nil
text=nil
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

raw.each {|id, text| add(id, text) }

encoder = BinaryEncoder.new()

raw.each {|id, text| encoder.add(id, text) }

puts encoder.to_s

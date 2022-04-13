#!/usr/bin/env ruby

input = ARGV.shift
encrypt_key='david+caldwell@porkrind.org'

$encrypt=encrypt_key.split('').map {|c| c.ord}
$index=[]
$data=[0] # invalid entry @ zero, so all valid entries are !0


def add(id, text)
  x = $index[-id] = $data.count
  $data.append(*(text.chomp('').split('')+[0]).map {|c|
                 enc = c.ord ^ $encrypt[x % $encrypt.count] ^ (x & 0xff)
                 x+=1
                 enc
               })
end

require 'pp'

id=nil
text=nil
File.readlines(input).each do |line|
  if m=line.match(/^## (.*)$/)
    add(id,text) if id
    id = m[1].to_i
    text = ''
  else
    text += line
  end
end
add(id, text)

puts "int dtext_index[] = {"
$index.each_with_index {|off,i| puts "    [#{i}] = #{off}," if off }
puts "};"

puts "unsigned char dtext_data[] = {"
$data.each_slice(16).each { |chunk|
  puts "    "+
       chunk.map {|c| sprintf("0x%02x,",c) }
         .join(" ")
}
puts "};"

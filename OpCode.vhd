library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.ALL;


entity OpCode is port(
cp_code: in std_logic_vector(4 downto 0);
scp_code: out std_logic_vector(19 downto 0)
);
end OpCode;

architecture Behavioral of OpCode is
type microcodigodeop is array (0 to 31) of std_logic_vector (19 downto 0);
constant ROM: microcodigodeop :=(
0=>"00001000000001110001", --saltos
1=>"00000000010000001000", --li
2=>"00000100010000001000",	--lwi
23=>"00000110010100110000", --lw
3=>"00000100010000000000", --swi	
4=>"00001010001100110100",	--sw
5=>"00000100010100110010",	--addi
6=>"00000100010101110010", --subi
7=>"00000100010100000010", --andi
8=>"00000100010100010010", --ori
9=>"00000100010100100010", --xori
10=>"00000100010111010010", --nandi
11=>"00000100010111000010", --nori
12=>"00000100010110100010", --xnori
13=>"10010000001100110010", --beqi
14=>"10010000001100110010", --bnei
15=>"10010000001100110010", --blti
16=>"10010000001100110010", --bleti
17=>"10010000001100110010", --bgti
18=>"10010000001100110010", --bgeti
19=>"00010000000000000000", --b
20=>"11010000000000001000", --call
21=>"00100000000000000000", --ret
22=>"00000000000000000000", --nop
others=>"00000000000000000000");
begin

scp_code<=ROM(to_integer(unsigned(cp_code)));


end Behavioral;



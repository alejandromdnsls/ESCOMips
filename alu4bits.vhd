library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity ALU4Bits is 
	--generic (n : integer := 4);
	Port(
			  a : in  STD_LOGIC_VECTOR (15 downto 0);
           b : in  STD_LOGIC_VECTOR (15 downto 0);
           sel_a : in  STD_LOGIC;
           sel_b : in  STD_LOGIC;
           op : in  STD_LOGIC_VECTOR (1 downto 0);
			  --cout : inout  STD_LOGIC;
           res : inout  STD_LOGIC_VECTOR (15 downto 0);
           flags : out  STD_LOGIC_VECTOR (3 downto 0)
	);
end ALU4Bits;

architecture Behavioral of ALU4Bits is
signal res_and,res_or,res_xor,aux_a,aux_b : std_logic_vector (15 downto 0);
signal c : std_logic_vector (16 downto 0);
begin
	c(0)<= sel_b;
	aluOp:for i in 0 to 15 generate
	
		aux_a(i)<= a(i) xor (sel_a);
		aux_b(i)<= b(i) xor (sel_b);
		
		res_and(i) <= aux_a(i) and aux_b(i);
		res_or(i) <= aux_a(i) or aux_b(i);
		res_xor(i) <= aux_a(i) xor aux_b(i);
		
		c(i+1) <= (aux_b(i) and aux_a(i)) or (aux_a(i) and c(i)) or (aux_b(i) and c(i));
		res(i) <= res_and(i) when op = "00" else
				res_or(i) when op = "01" else
				res_xor(i) when op = "10" else
				aux_b(i) xor aux_a(i) xor c(i);
   end generate aluOp;
	
		flags(0) <= c(16) when (op = "11") else  '0'; --C
		flags(1) <= '1' WHEN res = "0000000000000000" ELSE '0'; --Z
		flags(2) <= res(15); --N
		flags(3) <= c(16) xor c(15); --OV
		
end Behavioral;
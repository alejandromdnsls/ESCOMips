
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;

entity MicroFuncion is
    Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
           D : out  STD_LOGIC_VECTOR (19 downto 0));
end MicroFuncion;

architecture Behavioral of MicroFuncion is
	-- Se definen las instrucciones tipo R
	constant ADD_0 	: std_logic_vector (19 downto 0) := "00000100010000110010";	-- ADD
	constant SUB_1 	: std_logic_vector (19 downto 0) := "00000100010001110010";	-- SUB
	constant AND_2 	: std_logic_vector (19 downto 0) := "00000100010000000010";	-- AND
	constant OR_3 		: std_logic_vector (19 downto 0) := "00000100010000010010";	-- OR
	constant XOR_4		: std_logic_vector (19 downto 0) := "00000100010000100010";	-- XOR
	constant NAND_5 	: std_logic_vector (19 downto 0) := "00000100010011010010";	-- NAND
	constant NOR_6 	: std_logic_vector (19 downto 0) := "00000100010011000010";	-- NOR
	constant XNOR_7 	: std_logic_vector (19 downto 0) := "00000100010010100010";	-- XNOR
	constant NOT_8 	: std_logic_vector (19 downto 0) := "00000100010011000010";	-- NOT
	constant SLL_9 	: std_logic_vector (19 downto 0) := "00000001110000000000";	-- SLL
	constant SRL_10 	: std_logic_vector (19 downto 0) := "00000001010000000000";	-- SRL

	type memory is array (0 to 15) of std_logic_vector (19 downto 0);
	constant setmicro : memory := ( 
		ADD_0,
		SUB_1,
		AND_2,
		OR_3,
		XOR_4,
		NAND_5,
		NOR_6,
		XNOR_7,
		NOT_8,
		SLL_9,
		SRL_10,
		others => (others => '0'));
begin

	D <= setmicro(conv_integer(A));

end Behavioral;


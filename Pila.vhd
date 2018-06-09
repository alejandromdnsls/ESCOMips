
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity Pila is
    Port ( D : in  STD_LOGIC_VECTOR (15 downto 0);
           up : in  STD_LOGIC;
           dw : in  STD_LOGIC;
           wpc : in  STD_LOGIC;
           clr : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           q : out  STD_LOGIC_VECTOR (15 downto 0);
			  sp : out std_logic_vector(3 downto 0));
end Pila;

architecture Behavioral of Pila is

type contadores is array (0 to 15) of std_logic_vector(15 downto 0);
--signal asp: std_logic_vector(3 downto 0);
--signal pc_out: std_logic_vector(15 downto 0);

begin

process (clk,clr) is

variable axsp: std_logic_vector(3 downto 0);
variable pila: contadores;

begin
	if clr = '1' then
		axsp := "0000";
		for i in 0 to 15 loop
			pila(i) := x"0000";
		end loop;
	elsif clk'event and clk='1' then
		if up='0' and dw ='0' and wpc='0' then
			axsp := axsp;
			pila(conv_integer(axsp)) := pila(conv_integer(axsp)) + 1 ;	
		elsif up='0' and dw ='0' and wpc='1' then
			axsp := axsp;
			pila(conv_integer(axsp)) := D ;
		elsif up='1' and dw ='0' and wpc='1' then
			axsp := axsp + 1;
			pila(conv_integer(axsp)) := D ;
		elsif up='0' and dw ='1' and wpc='0' then
			axsp := axsp - 1;
			pila(conv_integer(axsp)) := pila(conv_integer(axsp)) + 1  ;
		end if;	
	end if;
	q <= pila(conv_integer(axsp));
	sp <= axsp;
end process;

end Behavioral;


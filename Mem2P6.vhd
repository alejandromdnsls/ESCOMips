--MEMORIA DE PROGRAMA P5
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Mem2P6 is
		generic(
			m: integer := 10; --modificacion 
			n: integer := 25
		);

    Port ( dir : in  STD_LOGIC_VECTOR (m-1 downto 0);
           ins : out  STD_LOGIC_VECTOR (n-1 downto 0));
end Mem2P6;

architecture Behavioral of Mem2P6 is


type mem is array (0 to (2**m)-1) of std_logic_vector(n-1 downto 0); --1024x16
signal arreglo: mem;

begin

arreglo(0) <= "0000100000000000000000001";
arreglo(1) <= "0000100010000000000000111";
arreglo(2) <= "0000000010001000000000000";
arreglo(3) <= "0001100010000000000000101";
arreglo(4) <= "1001100000000000000000010";



	ins <= arreglo(conv_integer(dir));

end Behavioral;


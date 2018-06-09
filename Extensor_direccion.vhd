library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Extensor_direccion is
	Port( 
			entrada : in std_logic_vector(11 downto 0);
			salida : out std_logic_vector(15 downto 0)
			);
end Extensor_direccion;

architecture Behavioral of Extensor_direccion is

	signal MSB : std_logic;

begin

	MSB <= "0000";
	salida <= MSB&entrada;

end Behavioral;


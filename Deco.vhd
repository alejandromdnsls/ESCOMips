
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity Deco is
    Port ( cp_code : in  STD_LOGIC_VECTOR (4 downto 0);
           tipor : out  STD_LOGIC;
           beq : out  STD_LOGIC;
           bneq : out  STD_LOGIC;
           blt : out  STD_LOGIC;
           ble : out  STD_LOGIC;
           bgt : out  STD_LOGIC;
           bget : out  STD_LOGIC);
end Deco;

architecture Behavioral of Deco is

begin

	deco: process(cp_code) 
	begin
	
		case cp_code is
			when "00000" => 
				tipor<='1';
				beq<='0';
				bneq<='0';
				blt<='0';
				ble<='0';
				bgt<='0';
				bget<='0';
			when "01101" => 
				tipor<='0';
				beq<='1';
				bneq<='0';
				blt<='0';
				ble<='0';
				bgt<='0';
				bget<='0';
			when "01110" => 
				tipor<='0';
				beq<='0';
				bneq<='1';
				blt<='0';
				ble<='0';
				bgt<='0';
				bget<='0';
			when "01111" => 
				tipor<='0';
				beq<='0';
				bneq<='0';
				blt<='1';
				ble<='0';
				bgt<='0';
				bget<='0';
			when "10000" => 
				tipor<='0';
				beq<='0';
				bneq<='0';
				blt<='0';
				ble<='1';
				bgt<='0';
				bget<='0';
			when "10001" => 
				tipor<='0';
				beq<='0';
				bneq<='0';
				blt<='0';
				ble<='0';
				bgt<='1';
				bget<='0';
			when "10010" => 
				tipor<='0';
				beq<='0';
				bneq<='0';
				blt<='0';
				ble<='0';
				bgt<='0';
				bget<='1';
			when others =>
				tipor<='0';
				beq<='0';
				bneq<='0';
				blt<='0';
				ble<='0';
				bgt<='0';
				bget<='0';
		end case;
		
	end process;

end Behavioral;


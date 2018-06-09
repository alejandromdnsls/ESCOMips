library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity DetectorCondicion is
    Port ( banderas_in : in  STD_LOGIC_VECTOR (3 downto 0);
			  banderas_out: out STD_LOGIC_VECTOR (3 downto 0);
           EQ : out  STD_LOGIC;
           NEQ : out  STD_LOGIC;
           LT : out  STD_LOGIC; --L
           LE : out  STD_LOGIC;
			  LF : in std_logic;
           G : out  STD_LOGIC; --GT
           GET : out  STD_LOGIC;
			  clk,clr: in std_logic);
end DetectorCondicion;

architecture Behavioral of DetectorCondicion is

begin
	-- ORDEN DE LAS BANDERAS:
	-- 3		2		1		0
	-- ov		n		z		c
	PROCESS (CLK,CLR)
		BEGIN 
			IF(CLR='1') THEN
				banderas_out <= "0000";
			ELSIF(FALLING_EDGE(CLK)) THEN
				IF(LF='1') THEN
				banderas_out <= banderas_in;
				END IF;
			END IF;
	END PROCESS;
	
            eq  <=  banderas_in(1);
				neq <=  not banderas_in(1);
				lt 	 <=  (banderas_in(2) xor banderas_in(3)) and not banderas_in(1);
				le  <=  (banderas_in(2) xor banderas_in(3)) or banderas_in(1);
				g   <=  not banderas_in(1) and not(banderas_in(2) xor banderas_in(3));
				get  <= not (banderas_in(2) xor banderas_in(3)) and banderas_in(1);


	
end Behavioral;


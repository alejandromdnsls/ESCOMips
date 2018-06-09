library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity main is port(
	clk: in std_logic;
	clr: in std_logic;
	lf: in std_logic;
	op_code: in std_logic_vector(4 downto 0);
	i30: in std_logic_vector(3 downto 0);
	banderas: in std_logic_vector(3 downto 0);
	nivel2: out std_logic;
	S: out std_logic_vector(19 downto 0)
);
end main;

architecture Behavioral of main is

COMPONENT Registro
	PORT(
		clk : IN std_logic;
		clr : IN std_logic;
		lf : IN std_logic;
		banderas_in : IN std_logic_vector(3 downto 0);          
		banderas_out : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;
	
COMPONENT OpCode
	PORT(
		cp_code : IN std_logic_vector(4 downto 0);          
		scp_code : OUT std_logic_vector(19 downto 0)
		);
	END COMPONENT;
	
COMPONENT Nivel
	PORT(
		clk : IN std_logic;
		clr : IN std_logic;          
		na : OUT std_logic
		);
	END COMPONENT;
	
	
COMPONENT MicroFuncion
	PORT(
		A : IN std_logic_vector(3 downto 0);          
		D : OUT std_logic_vector(19 downto 0)
		);
	END COMPONENT;
	
COMPONENT DetectorCondicion
	PORT(
		banderas_in : in  STD_LOGIC_VECTOR (3 downto 0);           
		EQ : out  STD_LOGIC;
      NEQ : out  STD_LOGIC;
      LT : out  STD_LOGIC; 
      LE : out  STD_LOGIC;
	   LF : in std_logic;
      G : out  STD_LOGIC; 
      GET : out  STD_LOGIC;
	   clk,clr: in std_logic	  
		);
	END COMPONENT;

COMPONENT Deco
	PORT(
		cp_code : IN std_logic_vector(4 downto 0);          
		tipor : OUT std_logic;
		beq : OUT std_logic;
		bneq : OUT std_logic;
		blt : OUT std_logic;
		ble : OUT std_logic;
		bgt : OUT std_logic;
		bget : OUT std_logic
		);
	END COMPONENT;

COMPONENT Control
	PORT(
		clk : IN std_logic;
		clr : IN std_logic;
		NA : IN std_logic;
		EQ : IN std_logic;
		NEQ : IN std_logic;
		LT : IN std_logic;
		LE : IN std_logic;
		G : IN std_logic;
		GET : IN std_logic;
		TIPOR : IN std_logic;
		BEQ : IN std_logic;
		BNEQ : IN std_logic;
		BLT : IN std_logic;
		BLE : IN std_logic;
		BGT : IN std_logic;
		BGET : IN std_logic;          
		SDOPC : OUT std_logic;
		SM : OUT std_logic
		);
	END COMPONENT;
	
	signal auxBan: std_logic_vector(3 downto 0);
	signal auxop: std_logic_vector(4 downto 0);
	signal auxSop: std_logic_vector(19 downto 0);
	signal auxSMf: std_logic_vector(19 downto 0);
	signal auxNa: std_logic;
	signal auxeq: std_logic;
	signal auxneq: std_logic;
	signal auxl: std_logic;
	signal auxle: std_logic;
	signal auxg: std_logic;
	signal auxge: std_logic;
	signal auxtipor: std_logic;
	signal auxbeq: std_logic;
	signal auxbneq: std_logic;
	signal auxblt: std_logic;
	signal auxble: std_logic;
	signal auxbgt: std_logic;
	signal auxbget: std_logic;
	signal auxsdopc: std_logic;
	signal auxsm: std_logic;
	
begin
	
		Inst_OpCode: OpCode PORT MAP(
		cp_code => auxop,
		scp_code => auxSop
	);
	
		Inst_Nivel: Nivel PORT MAP(
		clk => clk,
		clr => clr,
		na => auxNa
	);
	
	nivel2<=auxNa;
	
		Inst_MicroFuncion: MicroFuncion PORT MAP(
		A => i30,
		D => auxSMf
	);
	
		Inst_DetectorCondicion: DetectorCondicion PORT MAP(
		banderas_in => banderas,
		eq => auxeq,
		neq => auxneq,
		lt => auxl,
		le => auxle,
		g => auxg,
		clk => clk,
	   clr => clr,
	   LF => LF,
		get => auxge
	);
	
		Inst_Deco: Deco PORT MAP(
		cp_code => op_code,
		tipor => auxtipor,
		beq => auxbeq,
		bneq => auxbneq,
		blt => auxblt,
		ble => auxble,
		bgt => auxbgt,
		bget => auxbget
	);
	
	Inst_Control: Control PORT MAP(
		clk => clk,
		clr => clr,
		NA => auxNa,
		EQ => auxeq,
		NEQ => auxneq,
		LT => auxl,
		LE => auxle,
		G => auxg,
		GET => auxge,
		TIPOR => auxtipor,
		BEQ => auxbeq,
		BNEQ => auxbneq,
		BLT => auxblt,
		BLE => auxble,
		BGT => auxbgt,
		BGET => auxbget,
		SDOPC => auxsdopc,
		SM => auxsm
	);
	

process(auxsdopc,op_code)
begin
case auxsdopc is
	when '0' => auxop <= "00000";
	when '1' => auxop <= op_code;
	when others => auxop <=(others =>'0');
end case;
end process;

process(auxsm,auxSMf,auxSop)
begin
case auxsm is
	when '0' => S <= auxSMf;
	when '1' => S <= auxSop;
	when others => S <=(others =>'0');
end case;
end process;


end Behavioral;


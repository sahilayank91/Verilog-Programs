`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   06:13:05 02/10/2017
// Design Name:   twobitmux
// Module Name:   E:/Verilog programs/mux_behavioural/twobitmux_test.v
// Project Name:  mux_behavioural
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: twobitmux
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module twobitmux_test;

	// Inputs
	reg a;
	reg b;
	reg s;

	// Outputs
	wire o;

	// Instantiate the Unit Under Test (UUT)
	twobitmux uut (
		.a(a), 
		.b(b), 
		.s(s), 
		.o(o)
	);

	initial begin
		// Initialize Inputs
		s = 0;
		a = 0;
		b = 0;
		
		
		 a=1;
		 b=1;
		 s = 1;
		 a=0;
		 b=0;
		 
		// Wait 100 ns for global reset to finish
		#100;
		
		
        
		// Add stimulus here

	end
	initial begin 
	$monitor ("a = %d, b = %d, s = %d, o = %d\n",a,b,s,o);
	end
	
      
endmodule


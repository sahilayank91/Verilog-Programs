`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:44:51 02/18/2017
// Design Name:   multiplexer4to1_structural
// Module Name:   E:/Verilog programs/multiplexer4to1_behavioural/multiplexer4to1_structural_test.v
// Project Name:  multiplexer4to1_behavioural
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: multiplexer4to1_structural
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module multiplexer4to1_structural_test;

	// Inputs
	reg a;
	reg b;
	reg c;
	reg d;
	reg s1;
	reg s2;

	// Outputs
	wire cout;

	// Instantiate the Unit Under Test (UUT)
	multiplexer4to1_structural uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.d(d), 
		.s1(s1), 
		.s2(s2), 
		.cout(cout)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		c = 0;
		d = 0;
		s1 = 0;
		s2 = 0;

		// Wait 100 ns for global reset to finish
		#100;
		#10 a=1;c=1;
		#10 d=1;b=1;
		#10 c=0;a=0;
	
		#10 s2=1;s1=1;
		#10 a=1;c=1;
		#10 d=0;b=0;
		#10 c=0;a=0;
		#10 d=1;b=1;
		
		
        
		// Add stimulus here

	end
	
	initial begin
		$monitor("a = %d, b = %d, c = %d, d = %d, s1 = %d, s2 = %d, cout = %d",a,b,c,d,s1,s2,cout);
	end
      
endmodule


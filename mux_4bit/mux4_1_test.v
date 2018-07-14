`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:15:34 02/10/2017
// Design Name:   mux4_1
// Module Name:   E:/Verilog programs/mux_4bit/mux4_1_test.v
// Project Name:  mux_4bit
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux4_1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mux4_1_test;

	// Inputs
	reg a;
	reg b;
	reg c;
	reg d;
	reg s1;
	reg s2;
	reg out;

	// Instantiate the Unit Under Test (UUT)
	mux4_1 uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.d(d), 
		.s1(s1), 
		.s2(s2), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		c = 0;
		d = 0;
		s1 = 0;
		s2 = 0;
		out = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
    initial begin
		$monitor("running\n");
		end
endmodule


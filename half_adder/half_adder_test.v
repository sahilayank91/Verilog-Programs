`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:33:38 02/17/2017
// Design Name:   half_adder
// Module Name:   E:/Verilog programs/half_adder/half_adder_test.v
// Project Name:  half_adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: half_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module half_adder_test;

	// Inputs
	reg a;
	reg b;

	// Outputs
	wire s;
	wire c;

	// Instantiate the Unit Under Test (UUT)
	half_adder uut (
		.a(a), 
		.b(b), 
		.s(s), 
		.c(c)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		
		#10 a=1;
		#10 b=1;
		#10 a=0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	initial begin
		//Displaying Values
		$monitor("a = %d, b = %d, s = %d, c = %d\n",a,b,s,c);
   end
endmodule


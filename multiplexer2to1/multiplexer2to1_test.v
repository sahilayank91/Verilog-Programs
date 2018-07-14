`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:08:40 02/18/2017
// Design Name:   multiplexer2to1
// Module Name:   E:/Verilog programs/multiplexer2to1/multiplexer2to1_test.v
// Project Name:  multiplexer2to1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: multiplexer2to1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module multiplexer2to1_test;

	// Inputs
	reg a;
	reg b;
	reg x;

	// Outputs
	wire y;

	// Instantiate the Unit Under Test (UUT)
	multiplexer2to1 uut (
		.a(a), 
		.b(b), 
		.x(x), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		x = 0;
		
		#10 a = 1;
		#10 b = 1;
		#10 a = 0;
		#10 x = 1;
		#10 b = 0;
		#10 a = 0;
		#10 a = 1;
		#10 b = 1;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
	end
	
	initial begin
		$monitor("a = %d, b = %d, select = %d, cout = %d\n",a,b,x,y);
	end
      
endmodule


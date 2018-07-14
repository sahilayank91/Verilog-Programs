`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:31:50 02/18/2017
// Design Name:   array4x4
// Module Name:   E:/Verilog programs/array4x4/array4x4_test.v
// Project Name:  array4x4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: array4x4
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module array4x4_test;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;

	// Outputs
	wire [7:0] p;

	// Instantiate the Unit Under Test (UUT)
	array4x4 uut (
		.a(a), 
		.b(b), 
		.p(p)
	);

	initial begin
		// Initialize Inputs
		a = 4'b1000;
		b = 4'b0010;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	initial begin 
		$monitor("a = %b,b = %b, Answer = %b\n",a,b,p);
	end
      
endmodule


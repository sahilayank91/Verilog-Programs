`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:48:49 02/18/2017
// Design Name:   encoder8to3
// Module Name:   E:/Verilog programs/encoder8to3/encoder8to3_test.v
// Project Name:  encoder8to3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: encoder8to3
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module encoder8to3_test;

	// Inputs
	reg [7:0] d;

	// Outputs
	wire [2:0] cout;

	// Instantiate the Unit Under Test (UUT)
	encoder8to3 uut (
		.d(d), 
		.cout(cout)
	);

	initial begin
		// Initialize Inputs
	
		#10 d = 8'b00000001;
		#10 d = 8'b00000010;
		#10 d = 8'b00000100;
		#10 d = 8'b00001000;
		#10 d = 8'b00010000;
		#10 d = 8'b00100000;
		#10 d = 8'b01000000;
		#10 d = 8'b10000000;
	

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	initial begin
		$monitor("d = %b, value = %b\n",d,cout);
	end
      
endmodule


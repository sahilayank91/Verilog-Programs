`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:47:18 02/18/2017
// Design Name:   decoder3to8
// Module Name:   E:/Verilog programs/decoder3to8/decoder3to8_test.v
// Project Name:  decoder3to8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decoder3to8
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module decoder3to8_test;

	// Inputs
	reg x;
	reg y;
	reg z;
integer i;
	// Outputs
	wire [7:0] d;

	// Instantiate the Unit Under Test (UUT)
	decoder3to8 uut (
		.x(x), 
		.y(y), 
		.z(z), 
		.d(d)
	);

	initial begin
		// Initialize Inputs
		x = 0;
		y = 0;
		z = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#10 z=1;
		#10 z=0;y=1;
		#10 z=1;
		#10 x=1;y=0;z=0;
		#10 z=1;
		#10 z=0;y=1;
		#10 z=1;
		
	end
	initial begin
				
				$monitor("x = %d,y = %d,z = %d\ny7 = %d,y6 = %d, y5 = %d,y4 = %d,y3 = %d,y2 = %d,y1 = %d,y0 = %d\n",x,y,z,d[7],d[6],d[5],d[4],d[3],d[2],d[1],d[0]);	
	end
	
endmodule


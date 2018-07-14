`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:23:38 02/18/2017
// Design Name:   demux1to2
// Module Name:   E:/Verilog programs/demux1to2/demux1to2_test.v
// Project Name:  demux1to2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: demux1to2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module demux1to2_test;

	// Inputs
	reg d;
	reg s;

	// Outputs
	wire y0;
	wire y1;

	// Instantiate the Unit Under Test (UUT)
	demux1to2 uut (
		.d(d), 
		.s(s), 
		.y0(y0), 
		.y1(y1)
	);

	initial begin
		// Initialize Inputs
		d = 0;
		s = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#10 d=1;
		#10 s=1;d=0;
		#10 d=1;
		
	end
	
	initial begin
		$monitor("S = %d, D = %d, y0 = %d, y1 = %d\n",s,d,y0,y1);
	end
      
endmodule


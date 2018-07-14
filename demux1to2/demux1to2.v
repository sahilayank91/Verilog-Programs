`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:22:25 02/18/2017 
// Design Name: 
// Module Name:    demux1to2 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module demux1to2(
    input d,
    input s,
	 output y0,
	 output y1
    );

assign y0 = (d&~s);
assign y1 = (d&s);

endmodule

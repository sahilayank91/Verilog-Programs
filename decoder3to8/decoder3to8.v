`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:43:51 02/18/2017 
// Design Name: 
// Module Name:    decoder3to8 
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
module decoder3to8(
    input x,
    input y,
    input z,
    output [7:0] d
    );
	 
assign d[0] = ~x & ~y & ~z;
assign d[1] = ~x & ~y & z;
assign d[2] = ~x & y & ~z;
assign d[3] = ~x & y & z;
assign d[4] =  x & ~y & ~z;
assign d[5] =  x & ~y & z;
assign d[6] =  x & y & ~z;
assign d[7] =  x & y & z;


endmodule

`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:12:19 02/10/2017 
// Design Name: 
// Module Name:    twobitmux 
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
module twobitmux(
    input a,
    input b,
    input s,
    output o
    );
	 
	 assign o = (a&~s)|(b&s);


endmodule

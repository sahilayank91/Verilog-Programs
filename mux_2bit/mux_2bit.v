`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:25:00 02/10/2017 
// Design Name: 
// Module Name:    mux_2bit 
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
module mux_2bit(
    input a,
    input b,
    input s,
    output o
    );

	assign o = (a&~s)|(b&s);

endmodule

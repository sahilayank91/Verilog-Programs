`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:20:07 04/20/2017 
// Design Name: 
// Module Name:    test_prep 
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
module test_prep(
    input a,
    input b,
    input c,
    input d,
    output o
    );

	assign o = ~a&b&c&d; 
endmodule

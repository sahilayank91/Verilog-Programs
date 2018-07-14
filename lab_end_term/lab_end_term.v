`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:15:20 04/21/2017 
// Design Name: 
// Module Name:    lab_end_term 
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
module lab_end_term(
    input a,
    input b,
    input c,
    output x
    );

	assign x = (~a&c)|(~b&c)|(~a&b)|(a&~c);

endmodule

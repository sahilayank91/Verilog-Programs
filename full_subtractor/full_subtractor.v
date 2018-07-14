`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:11:40 02/17/2017 
// Design Name: 
// Module Name:    full_subtractor 
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
module full_subtractor(
    input a,
    input b,
    input c,
    output diff,
    output borrow
    );
	 
	 assign diff = (a^b^c);
	 assign borrow = (~a&c)|(~a&b)|(b&c);


endmodule

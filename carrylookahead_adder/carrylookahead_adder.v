`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:29:06 02/17/2017 
// Design Name: 
// Module Name:    carrylookahead_adder 
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
module carrylookahead_adder(
	 input [3:0] A,
    input [3:0] B,
    input cin,
    output p,
	 output cout,
    output g,
    output [3:0] S
    );
	 
	 wire[3:0] G,P,C;
	 assign g = A & B; //Generate
    assign p = A ^ B; //Propagate
    assign C[0] = cin;
    assign C[1] = G[0] | (P[0] & C[0]);
    assign C[2] = G[1] | (P[1] & G[0]) | (P[1] & P[0] & C[0]);
    assign C[3] = G[2] | (P[2] & G[1]) | (P[2] & P[1] & G[0])|(P[2] & P[1] & P[0] & C[0]);
    assign cout = G[3] | (P[3] & G[2]) | (P[3] & P[2] & G[1])|(P[3] & P[2] & P[1] & G[0]) |(P[3] & P[2] & P[1] & P[0] & C[0]);
    assign S = P ^ C;
    
    assign p = P[3] & P[2] & P[1] & P[0];
    assign g = G[3] | (P[3] & G[2]) | (P[3] & P[2] & G[1]) | (P[3] & P[2] & P[1] & G[0]);
endmodule

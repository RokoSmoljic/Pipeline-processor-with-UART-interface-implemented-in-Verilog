`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:54:58 05/25/2022 
// Design Name: 
// Module Name:    Instruction_Memory 
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
module Instruction_Memory(rst, addr, start, instruction, write, write_Instruction, write_Ready
    );
	input rst, write, write_Ready, start;
	input [31:0] addr;
	input [31:0] write_Instruction;
	output [31:0] instruction;
	reg [31:0] instMem [1023:0];
	wire [31:0] test [4:0];
	reg [9:0] counter;
	wire [9:0] address = addr[9:0];
	integer i;
	// Testiranje memorije
	assign {test[4],test[3],test[2],test[1],test[0]}={instMem[4],instMem[3],instMem[2],instMem[1],instMem[0]};
	initial begin
		counter=0;
	end
	always@(*) begin
		if (rst) begin
			for(i=0;i<1024;i=i+1) begin
				instMem[i]=2'b00000000;
			end
			counter=2'b00000000;
		end
	end
	always@(posedge write_Ready) begin
		if (write && ~rst) begin
			instMem[counter]=write_Instruction;
			counter=counter+1;
		end
	end
	
	assign instruction = (start==1)?instMem[address]:0;
endmodule

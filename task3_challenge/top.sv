module top #(
    parameter   C_WIDTH = 16
) (
    input logic rst,
    input logic clk,
    input logic N,
    output logic [7:0] data_out
);

logic tick;

clktick clock (
    .clk(clk),
    .rst(rst),
    .en(1'b1),
    .N(N), // N = 23 in T3, but program slowed in challeng 3 recalibrated to N = 35
    .tick(tick)
);

f1_fsm fsm (
    .clk(clk),
    .rst(rst),
    .en(tick),

    .data_out(data_out)
);


endmodule

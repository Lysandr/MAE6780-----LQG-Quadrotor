function [test] = KalmanFiltBoi(inputblock, A, B, Cc, D)
%UNTITLED3 Summary of this function goes here
%   Detailed explanation goes here

load('linsys_1.mat');
A = LinearAnalysisToolProject.LocalVariables(2).Value.A;
B = LinearAnalysisToolProject.LocalVariables(2).Value.B;
C = LinearAnalysisToolProject.LocalVariables(2).Value.C;
% Sw = 
% Sv = 
% G  =
% H  = 
% 
% 
% 
% 
% x_t1_t = A*x_t_t + B*u_t
dimr = length(inputblock);
test = inputblock(dimr-15:dimr);

end


% testing the new model i built and linearizing shit
close all
clear all
clc
initial_conditions
LoadQuadrotorConst_XPro1a

mdl = 'quadcopter_model_test';
blockpath = 'quadcopter_model_test/quadmdl';
linsys = linearize(mdl,blockpath);
A = linsys.A
B = linsys.B;
C = linsys.C;
D = linsys.D;
save A

%% if you have already linearized
close all
clear all
clc
initial_conditions
LoadQuadrotorConst_XPro1a
load('A.mat');
Q = C'*C;
R = eye(4);
stateref = [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]';
[K,S,E] = lqr(A,B,Q,R);

tic
sim('quadcopter_model_test');
toc

figure; hold on;
grid on;
plot3(state.Data(:,1), state.Data(:,3), state.Data(:,5));
title('Trajectory');
xlabel('X distance (m)')
ylabel('Y distance (m)')
zlabel('Z distance (m)')


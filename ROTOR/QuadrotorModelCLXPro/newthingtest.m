%% this will be for newthing model


clear all; close all; clc
initial_conditions
LoadQuadrotorConst_XPro1a
load('linsys_1.mat');

A = LinearAnalysisToolProject.LocalVariables(2).Value.A;
B = LinearAnalysisToolProject.LocalVariables(2).Value.B;
C = LinearAnalysisToolProject.LocalVariables(2).Value.C;
D = LinearAnalysisToolProject.LocalVariables(2).Value.D;

Q = 2000*(C')*C;
Q(2,2) = 100;
Q(4,4) = 100;
Q(6,6)= 6000;
Q(5,5) = 6000;

R = 0.1*eye(4);
stateref = [55 0 10 0 10 0 0 0 0 0 0 0 0 0 0 0]';
[K,S,E] = lqr(A,B,Q,R);

tic
sim('newthing');
toc





%% plotski
% plot the trajectory
figure; hold on;
grid on;
plot3(state.Data(:,1), state.Data(:,3), state.Data(:,5)); hold on;
start = plot3(state.Data(1,1), state.Data(1,3), state.Data(1,5)); hold on;
start.Color = 'green';
start.Marker = 'o';
finished = plot3(state.Data(end,1), state.Data(end,3), state.Data(end,5)); hold on;
finished.Color = 'red';
finished.Marker = 'o';
title('Trajectory');
xlabel('X distance (m)')
ylabel('Y distance (m)')
zlabel('Z distance (m)'); hold off;

%STATES
figure; subplot(6,1,1)
plot(state.Time, state.Data(:,1)); title('x vs time')
subplot(6,1,2)
plot(state.Time, state.Data(:,3)); title('y vs time')
subplot(6,1,3)
plot(state.Time, state.Data(:,5)); title('z vs time')
subplot(6,1,4)
plot(state.Time, state.Data(:,7)); title('Phi vs time')
subplot(6,1,5)
plot(state.Time, state.Data(:,9)); title('Theta vs time')
subplot(6,1,6)
plot(state.Time, state.Data(:,11)); title('Psi vs time')

% print off the final value
finalstate = [state.Data(end,1) state.Data(end,3) state.Data(end,5)]



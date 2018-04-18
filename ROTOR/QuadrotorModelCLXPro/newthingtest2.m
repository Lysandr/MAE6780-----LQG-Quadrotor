%% this will be for newthing model
% create the model
clear all; close all; clc
initial_conditions
LoadQuadrotorConst_XPro1a
load('linsys_1.mat');

A = LinearAnalysisToolProject.LocalVariables(2).Value.A;
B = LinearAnalysisToolProject.LocalVariables(2).Value.B;
C = LinearAnalysisToolProject.LocalVariables(2).Value.C;
D = LinearAnalysisToolProject.LocalVariables(2).Value.D;

%% GENERATE THE FEEDBACK GAIN MATRIX
Q = 100*eye(16,16); Q(1,1)=3000; Q(3,3)=3000; Q(5,5) = 9000; Q(11,11)=9000;
R = 0.1*eye(4);
P = 10000*eye(16,16);
dt = 0.0001;
tT = 35;
tspan = tT:-dt:0;
finalS = reshape(P,[16^2,1]);
[t,S] = ode45(@(t,S) rhs(t,S,A,B,R,Q), tspan, finalS);
C = zeros(length(tspan)*4,16);
Si = zeros(length(tspan)*16,16);
igain = zeros(length(tspan),4*16);
for i = 1:length(tspan)
	Sii = reshape(S(i,:),16,16);
	Si(16*(i-1)+1 : 16*i,:) = Sii;
    j = length(tspan)-i+1;
	C((j*4)-3:j*4,:) = R\(B'*Sii);
    igain(j,:) = reshape(R\(B'*Sii),[1,4*16]);
end
fb_gain = [flipud(tspan') igain];

%% GENERATE THE TRAJECTORY TO FOLLOW 
stateref = [10 0 10 0 50 0 0 0 0 0 0 0 0 0 0 0]';


%% DO THE SIMULATION!
tic
sim('newthing');
toc


%% plotski
figure;
curve = animatedline('LineWidth',1);
set(gca,'XLim',[0 50], 'YLim',[0 50],'Zlim',[0 50]);
view(285,25);
tint = 400;
hold on;
grid on
for i=1:length(state.Data(:,1))/tint
	addpoints(curve, state.Data(i*tint,1), state.Data(i*tint,3), state.Data(i*tint,5));
	head = scatter3(state.Data(i*tint,1), state.Data(i*tint,3), state.Data(i*tint,5), 'filled','MarkerFaceColor','b','MarkerEdgeColor','b');
	drawnow; hold on;
	delete(head);
end
hold off;



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
plot(state.Time, state.Data(:,5)); title('z vs  time')
subplot(6,1,4)
plot(state.Time, state.Data(:,7)); title('Phi vs time')
subplot(6,1,5)
plot(state.Time, state.Data(:,9)); title('Theta vs time')
subplot(6,1,6)
plot(state.Time, state.Data(:,11)); title('Psi vs time')

% print off the final value
finalstate = [state.Data(end,1) state.Data(end,3) state.Data(end,5)]
totalerror = [(finalstate(1)-stateref(1))/stateref(1) (finalstate(2)-stateref(3))/stateref(3) ...
    (finalstate(3)-stateref(5))/stateref(5) ]





%% TODO
% REDO THE LINEAR ANALYSIS WITH THE RIGHT INERTIA VALUES!!!
% FIGURE OUT THE BEST REGULATOR GAIN MATRIX FOR OPTIMAL 
% 	NEIGHBOUR TRAJECTORY FOLLOWING
% WRITE AN ONLINE VERSION OF THE KALMAN FILTER!
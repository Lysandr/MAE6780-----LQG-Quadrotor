%% this will be for newthing model
% create the model
clear all; close all; clc
initial_conditions
LoadQuadrotorConst_XPro1a
load('linsys_1.mat');
A = LinearAnalysisToolProject.LocalVariables(2).Value.A;
B = LinearAnalysisToolProject.LocalVariables(2).Value.B;
Cc = LinearAnalysisToolProject.LocalVariables(2).Value.C;
D = LinearAnalysisToolProject.LocalVariables(2).Value.D;


%% GENERATE THE FEEDBACK GAIN MATRIX
tic
bigval = 10^3; bigrval = 10^4;
Q = 100*Cc.'*Cc; 
Q(1,1) = 1000*bigrval;
Q(3,3) = 1000*bigrval;
Q(5,5) = 1000*bigrval^2;
Q(11,11)=1000*bigrval;
Q(13,13)=0;
Q(14,14)=0;
Q(15,15)=0;
Q(16,16)=0;
R = 3000*eye(4);
P = zeros(16,16);
P(1,1) = bigval^2;
P(3,3) = bigval^2;
P(5,5) = bigrval^2;
P(11,11)=bigrval^2;
dt = 0.01;
tT = 50;
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
K = C(1:4,:);
toc

%% initialize Kalman Filter and covariances
S_0_0 = 0.001*eye(16);
G = eye(16);
H = eye(16);
Sv= 0.01*eye(16);
Sv(13,13)= 0.0001;
Sv(14,14)= 0.0001;
Sv(15,15)= 0.0001;
Sv(16,16)= 0.0001;
Sv = Sv^4;
Sw = Sv;


%% GENERATE THE TRAJECTORY TO FOLLOW 
stateref = [35 0 35 0 50 0 0 0 0 0 0 0 0 0 0 0]';
zrt = zeros(length(tspan),1);
zrt2 = zeros(length(tspan),11);
xtrain = x_0 + 1*sin((tT/20)*2*pi*(flipud(tspan')/tT));
ytrain = y_0 + 1*cos((tT/20)*2*pi*(flipud(tspan')/tT));
ztrain = z_0 + 1*(flipud(tspan')/tT);
trajectory = [flipud(tspan') [xtrain zrt ytrain zrt ztrain zrt2] ];



%% DO THE SIMULATION!
tic
sim('newthing');
toc


%% plotski

% figure;
% curve = animatedline('LineWidth',1);
% set(gca,'XLim',[-1 1], 'YLim',[-1 1],'Zlim',[28 32]);
% view(285,25);
% tint = 100;
% hold on;
% grid on
% for i=1:length(state.Data(:,1))/tint
% 	addpoints(curve, state.Data(i*tint,1), state.Data(i*tint,3), state.Data(i*tint,5));
% 	head = scatter3(state.Data(i*tint,1), state.Data(i*tint,3), state.Data(i*tint,5), 'filled','MarkerFaceColor','b','MarkerEdgeColor','b');
% 	drawnow; hold on;
% 	delete(head);
% end
% hold off;

% plot the trajectory
figure;
plot3(state.Data(:,1), state.Data(:,3), state.Data(:,5)); hold on;
p = plot3(xtrain, ytrain,ztrain); hold on;
p.LineStyle = '-';
start = plot3(state.Data(1,1), state.Data(1,3), state.Data(1,5)); hold on;
start.Color = 'green';
start.Marker = 'o';
finished = plot3(state.Data(end,1), state.Data(end,3), state.Data(end,5)); hold on;
finished.Color = 'red';
finished.Marker = 'o';
title('Trajectory');
grid on;
xlabel('X distance (m)')
ylabel('Y distance (m)')
zlabel('Z distance (m)'); hold off;

%STATES
figure; subplot(6,1,1)
plot(state.Time, state.Data(:,1)); title('x vs time'); hold on;
plot(estimate.Time, estimate.Data(:,1)); title('x_est vs time')
subplot(6,1,2)
plot(state.Time, state.Data(:,3)); title('y vs time'); hold on;
plot(estimate.Time, estimate.Data(:,3)); title('y_est vs time')
subplot(6,1,3)
plot(state.Time, state.Data(:,5)); title('z vs  time'); hold on;
plot(estimate.Time, estimate.Data(:,5)); title('z_est vs  time')
subplot(6,1,4)
plot(state.Time, state.Data(:,7)); title('Phi vs time'); hold on;
plot(estimate.Time, estimate.Data(:,7)); title('Phi_est vs time')
subplot(6,1,5)
plot(state.Time, state.Data(:,9)); title('Theta vs time'); hold on;
plot(estimate.Time, estimate.Data(:,9)); title('Theta_est vs time')
subplot(6,1,6)
plot(state.Time, state.Data(:,11)); title('Psi vs time'); hold on;
plot(estimate.Time, estimate.Data(:,11)); title('Psi_est vs time')
hold off;
legend('State Observation','State Estimation')

% print off the final value
finalstate = [state.Data(end,1) state.Data(end,3) state.Data(end,5)]
totalerror = [(finalstate(1)-stateref(1))/stateref(1) (finalstate(2)-stateref(3))/stateref(3) ...
    (finalstate(3)-stateref(5))/stateref(5) ]





%% TODO
% REDO THE LINEAR ANALYSIS WITH THE RIGHT INERTIA VALUES!!!
% FIGURE OUT THE BEST REGULATOR GAIN MATRIX FOR OPTIMAL 
% 	NEIGHBOUR TRAJECTORY FOLLOWING
% WRITE AN ONLINE VERSION OF THE KALMAN FILTER!
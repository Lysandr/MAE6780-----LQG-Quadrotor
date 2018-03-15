%% testy mctestface
close all
clear all
clc
initial_conditions
LoadQuadrotorConst_XPro1a

%%
T = linspace(0,100,1001)';
V1 = [T 0.5*V1_WP.*cos(linspace(0,2*pi*30,1001))'];
V2 = [T zeros(1001,1)];
V3 = [T zeros(1001,1)];
V4 = [T zeros(1001,1)];
Vin = [V1 V2 V3 V4];

tic
sim('CL_Xpro_model');
toc

figure; subplot(3,1,1)
plot(state.Time, state.Data(:,1)); title('x vs time')
subplot(3,1,2)
plot(state.Time, state.Data(:,2)); title('y vs time')
subplot(3,1,3)
plot(state.Time, state.Data(:,3)); title('z vs time')

figure; subplot(3,1,1)
plot(state.Time, state.Data(:,4)); title('Phi vs time')
subplot(3,1,2)
plot(state.Time, state.Data(:,5)); title('Theta vs time')
subplot(3,1,3)
plot(state.Time, state.Data(:,6)); title('Psi vs time')

figure; hold on;
grid on;
plot3(state.Data(:,1), state.Data(:,2), state.Data(:,3));
title('Trajectory');
xlabel('X distance (m)')
ylabel('Y distance (m)')
zlabel('Z distance (m)')

figure; 
plot(rotorspeed.Time, rotorspeed.Data);hold on;
plot(V1(:,1),V1(:,2))
title('rotorspeed vs time')

figure; subplot(3,1,1)
plot(state.Time, state.Data(:,4)); title('Phi vs time')
subplot(3,1,2)
plot(state.Time, state.Data(:,5)); title('Theta vs time')
subplot(3,1,3)
plot(state.Time, state.Data(:,6)); title('Psi vs time')









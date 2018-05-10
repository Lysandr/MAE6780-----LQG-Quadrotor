%% Padraig Lysandrou May 2018
% optimal guidance for drone
clear all; close all; clc
initial_conditions

% initial conditions
r_0 = [0 0 30].';	
r_T = [30 30 30].';
v_0 = [0 0 0].';
v_T = v_0;
g = [0 0 -9.81]'ff;
% timing shit
t_f = 100;			% final time horizon (not necessarily optimal)
dt = 1;           	% period of calculation
N = 1+(t_f/dt);		% calculation steps
U_sat = 15;
m = 2.1;

% the discretized problem 4
% maximize the terminal mass
% cvx_solver SEDUMI
cvx_begin
	variables u(3,N) r(3,N) v(3,N) theta(N) phi(N) psit(N)
	minimize(sum(norm(u(:,:))))			
	subject to 
		r(:,1) == r_0;
		v(:,1) == v_0;
		r(:,N) == r_T;
		v(:,N) == v_T;		

		for  k = 1:N-1
			r(:,k+1) == r(:,k) + ((dt/2)*(v(:,k) + v(:,k+1))) + (((dt^2)/12)*(u(:,k+1) - u(:,k)));
			v(:,k+1) == v(:,k) + ((dt/2)*(u(:,k) + u(:,k+1))) + (g*dt);
			z(1,k+1) == z(1,k) - (((a*dt)/2)*(s(1,k) + s(1,k+1)));
		end

        for k = 1:N
        	norm(u(:,k)) <= 4*(U_sat/m);
        end
cvx_end







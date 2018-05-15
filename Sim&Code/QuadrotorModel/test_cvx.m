%% Padraig Lysandrou
% Implementation of the Becet, Ploen Algorithm
initial_conditions
LoadQuadrotorConst_XPro1a

% constants and vehicle parameters
g0 = 9.807;					% Earth gravity, m/s^2
g_plan = [0; 0; -g0];		%  gravity, m/s^2
Isp = 255;					% specific impulse, s
m_t = m;                    % total mass, kg
U_sat = 15;
Ft =  30;                   % thrust
rho2 = Ft;              	% thrust, Newtons
% initial and final conditions -- dynamics  [x y z]
r_0 = [x_0_0(1); x_0_0(3); x_0_0(5)];         % position vector, m
v_0 = [0; 0; 0];            % velocity vector, m/s
r_N = [1; 1; 30];			% terminal position, m
v_N =[0; 0; 0];				% terminal velocity, m
% other timing and constraint garbage
t_f = 100;					% final time horizon (not necessarily optimal)
dt = .05;             		% period of calculation
N = 1+(t_f/dt);				% calculation steps
a = 1/(Isp*g0);				% alpha used in mass calculations


% the discretized problem 4
% maximize the terminal mass
cvx_solver SEDUMI
cvx_begin
	variables u(3,N) z(1,N) s(1,N) r(3,N) v(3,N)
	minimize(-z(N))			% objective function
	subject to 				% constraints and dynamics
		r(:,1) == r_0;		% position IC
		v(:,1) == v_0;		% velocity IC
		r(:,N) == r_N; 		% position TC
		v(:,N) == v_N;		% velocity TC
		z(1) == log(m_t);	% mass IC
		r(3,:) >= 0;
        z(:) >= 0;

		for  k = 1:N-1
			r(:, k+1) == r(:,k) + ((dt/2)*(v(:,k) + v(:,k+1))) ...
                +(((dt^2)/12)*(u(:,k+1) - u(:,k)));
			v(:, k+1) == v(:,k) + ((dt/2)*(u(:,k) + u(:,k+1))) ...
                +(g_plan*dt);
			z(1, k+1) == z(1,k) - (((a*dt)/2)*(s(1,k) + s(1,k+1)));
        end
		for k=1:N
			norm(u(:,k)) <= s(1,k);
			z_c = m_t - (a*rho2*dt*(k-1));
			m_2 = rho2/z_c;
			z1 = log(m_t);	
			z0 = log(z_c);
			z(1,k) >= z0;
			z(1,k) <= z1;
			s(1,k) <= m_2*(1 - (z(1,k) - z0));
			s(1,k) >= 0;
        end
cvx_end

plot_all_data3D(dt,t_f,r,v,u,z)






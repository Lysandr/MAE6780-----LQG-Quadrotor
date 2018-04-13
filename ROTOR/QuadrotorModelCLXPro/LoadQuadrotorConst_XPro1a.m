% LoadQuadrotorConsts_XPro1a.m
%
% Load electro-mechanical constants for X-Pro specific parameters
% into general quadrotor model:  EPA_Quadrotor_v2b.mdl
%

ga = 9.807;             % grav. accel. (m/s^2)
m = 2.1;                % total mass (kg)
   
Jr=4.86851*0.1;         % rotor inertia (kgm^2)
L = 0.422;              % moment arm CG to rotor (m)

Ixx = 2.1385*100;       % Phi (x-axis) Inertia (kgm^2)
Iyy = Ixx;              % Theta (y-axis) Inertia (kgm^2)
Izz = 3.7479*100;       % Psi (z-axis) Inertia (kgm^2)

% taken from https://pdfs.semanticscholar.org/a3a8/dcfaae7afd971c24bd033fb0f7310e8fc741.pdf
% Ixx = 4.856E-3;         % Phi (x-axis) Inertia (kgm^2)
% Iyy = Ixx;              % Theta (y-axis) Inertia (kgm^2)
% Izz = 8.801E-3;         % Psi (z-axis) Inertia (kgm^2)





Tau = 0.1;              % Motor/Rotor time const (s)
% Rotor Speed -to- Lift & Drag Functions:
% Lift (N) = c*(r/s)^2+d*(r/s)+e
c = 0.0002;             % Rotor Speed (r/s)-to-Lift (N), 1st const
d = 0.0071;             % Rotor Speed (r/s)-to-Lift (N), 2nd const
e = -0.2625;            % Rotor Speed (r/s)-to-Lift (N), 3rd const
% Drag (Nm) = f*(r/s)^2+g*(r/s)+h
f = 5e-6;               % Rotor Speed (r/s)-to-Drag (Nm), 1st const
g = 0.0008;             % Rotor Speed (r/s)-to-Drag (Nm), 2nd const
h = -0.0282;            % Rotor Speed (r/s)-to-Drag (Nm), 3rd const

% Specific Motor/Rotor Speed Constants: (r/s) = a*(Volts)+b
a1 = 16.235;            % Motor 1 Volts-to-Rotor Speed (r/s), 1st const
b1 = -0.5036;           % Motor 1 Volts-to-Rotor Speed (r/s), 2nd const
a2 = 17.912;            % Motor 2 Volts-to-Rotor Speed (r/s), 1st const
b2 = -12.728;           % Motor 2 Volts-to-Rotor Speed (r/s), 2nd const
a3 = 17.914;            % Motor 3 Volts-to-Rotor Speed (r/s), 1st const
b3 = -6.5646;           % Motor 3 Volts-to-Rotor Speed (r/s), 2nd const
a4 = 18.161;            % Motor 4 Volts-to-Rotor Speed (r/s), 1st const
b4 = -7.4637;           % Motor 4 Volts-to-Rotor Speed (r/s), 2nd const

co_x=1.7;
co_y=1.7;
co_z=90.7;

c_mi_x=170;
c_mi_y=170;
c_mi_z=40;
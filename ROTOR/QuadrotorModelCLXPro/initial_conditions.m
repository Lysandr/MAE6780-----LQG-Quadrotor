% -------------------------------------------------------------------------
% --------------------------- Initial conditions --------------------------
% -------------------------------------------------------------------------

% ----------------- WP: [0 0 0] & [0 0 30] ------------
% -----------------------------------------------------

V1_WP=9.1275;               % WP - hovering
V2_WP=8.955;
V3_WP=8.61;
V4_WP=8.543;
hover = [V1_WP;V2_WP;V3_WP;V4_WP];

d_omega_R10=9.1275;          % motor 1. rotor
d_omega_R20=8.955;           % motor 2. rotor
d_omega_R30=8.61;            % motor 3. rotor
d_omega_R40=8.543;           % motor 4. rotor


dfi_0=0;                    % roll rate
fi_0=0;                     % roll 

dtheta_0=0;                 % pitch rate
theta_0=0;                  % pitch 

dpsi_0=0;                   % yaw rate
psi_0=0;                    % yaw 

dx_0=0;                     % linear velocity in x - axis
x_0=0;                      % position in x - axis

dy_0=0;                     % linear velocity in y - axis
y_0=0;                      % position in y - axis

dz_0=0;                     % linear velocity in z - axis
z_0=30;                     % position in z - axis



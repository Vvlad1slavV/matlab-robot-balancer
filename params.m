%% Physical constants
g = 9.81;                       % gravity acceleration [m/sec^2]
%% Physical parameters
m = 0.05;						% wheel weight [kg]
R = 0.0275;						% wheel radius [m]
Jk = m * R^2 / 2;				% wheel inertia moment [kgm^2]
M = 0.5;                        % body weight [kg]
W = 0.08;						% body width [m]
D = 0.07;						% body depth [m]
h = 0.15;						% body height [m]
L = h / 2;						% distance of the center of mass from the wheel axle [m]
Jt =  M * L^2 / 3;              % body inertia moment
%% Motors parameters
J = 0.00237;					% DC motor inertia moment [kgm^2] 0.00237
r = 3;                          % DC motor resistance [Om]
Rm = 6.69;						% DC motor resistance [Om] old
km = 0.321;                         %
ke = 0.321;                         %
n = 1;							% Gear ratio
K_PWM = 8.087                   % Преобразование величины напряжения
%% Init parameters
Psi0 = 0.15;                    % Start angle psi 
Psi_d0 =  0;                    % Start psi velocity 
Theta_d0 = 0;                   % Start velocity
Ts = 0.004;                     % Sampling time

Kb = 0.468;						% DC motor back EMF constant [Vsec/rad]
Kt = 0.317;						% DC motor torque constant [Nm/A]
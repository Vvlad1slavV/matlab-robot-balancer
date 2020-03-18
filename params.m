%% Physical constants
g = 9.81;                       % gravity acceleration [m/sec^2]
%% Physical parameters
m = 0.024;						% wheel weight [kg]
R = 0.027;						% wheel radius [m]
Jk = m * R^2 / 2;				% wheel inertia moment [kgm^2]
M = 0.8;                        % body weight [kg]
W = 0.105;						% body width [m]
D = 0.1;						% body depth [m]
h = 0.21;						% body height [m]
L = h / 2;						% distance of the center of mass from the wheel axle [m]
Jpsi = M * L^2 / 3;				% body pitch inertia moment [kgm^2]
Jphi = M * (W^2 + D^2) / 12;	% body yaw inertia moment [kgm^2]
Jt =  M * L^2 / 3;              % body inertia moment in our lab
fm = 0.0022;					% friction coefficient between body & DC motor
fw = 0;           				% friction coefficient between wheel & floor
km = 1;                         %
ke = 1;                         %
r = 3;                          % Сопротивление [Ом]
%% Motors parameters
J = 1e-5;						% DC motor inertia moment [kgm^2] 0.00237
Rm = 6.69;						% DC motor resistance [Om]
Kb = 0.468;						% DC motor back EMF constant [Vsec/rad]
Kt = 0.317;						% DC motor torque constant [Nm/A]
n = 1;							% Gear ratio
K_PWM = 8.087                   % Преобразование величины напряжения
Psi0 = 0.1;
Ts = 0.004
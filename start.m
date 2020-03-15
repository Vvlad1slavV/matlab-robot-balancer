%% Load parameters
params;
%% Helping variables
alpha = n * Kt / Rm;
beta = n * Kt * Kb / Rm + fm;
E = [M*L*R - 2*J                    M*L^2 + Jt;
    (2*m+M)*R^2 + 2*Jk + 2*J        M*L*R];
F = 2*[-km*ke/r   0; 
        km*ke/r   0];
G = [0   -M*g*L; 
     0    0];
H = 2*[-km/r; 
        km/r];
% State space matrices

A = [0 0 1;
      0 0 0;
      0 0 0];
A(2:3,1) = -E\G(:,2);    
A(2:3,2) = -E\H;
B = [0;
	  E\H];
C = eye(3);
D = zeros(3, 1);

% %% State space models
s1 = ss(A, B, C, D);
s1.StateName = {'psi', 'theta_dot', 'psi_dot'};
s1.InputName = {'V'};
s1.OutputName = {'psi', 'theta_dot', 'psi_dot'};
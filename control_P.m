%% Helping variables          
w0 = 6.3/0.2;
AA = [0                         B(2)                    B(3);
      B(3)                      0                       A(3,2)*B(2)-A(2,2)*B(3);
      A(3,2)*B(2)-A(2,2)*B(3)   A(2,1)*B(3)-A(3,1)*B(2) 0];
BB = [3*w0 + A(2,2);
      3*w0^2 + A(3,1);
      w0^3 - A(2,2)*A(3,1) + A(2,1)*A(3,2)];

%% matrix K
K = (inv(AA)*BB)';
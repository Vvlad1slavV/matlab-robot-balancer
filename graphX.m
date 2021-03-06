function graphX(tout1, psi1, theta_d1, psi_d1)
%CREATEFIGURE(TOUT1, PSI1, THETA_D1, PSI_D1)
%  TOUT1:  vector of x data
%  PSI1:  vector of y data
%  THETA_D1:  vector of y data
%  PSI_D1:  vector of y data

%  Auto-generated by MATLAB on 04-May-2020 09:45:45

% Create figure
figure1 = figure;

% Create axes
axes1 = axes('Parent',figure1);
hold(axes1,'on');

% Create plot
plot(tout1,psi1,'Parent',axes1);

% Create ylabel
ylabel('psi, �');

box(axes1,'on');
% Set the remaining axes properties
set(axes1,'OuterPosition',[0 0.666666666666667 1 0.333333333333333],'XGrid',...
    'on','YGrid','on');
% Create axes
axes2 = axes('Parent',figure1);
hold(axes2,'on');

% Create plot
plot(tout1,theta_d1,'Parent',axes2,'DisplayName','theta_d vs tout');

% Create ylabel
ylabel('theta d, �/�');

box(axes2,'on');
% Set the remaining axes properties
set(axes2,'OuterPosition',[0 0.333333333333333 1 0.333333333333333],'XGrid',...
    'on','YGrid','on');
% Create axes
axes3 = axes('Parent',figure1);
hold(axes3,'on');

% Create plot
plot(tout1,psi_d1,'Parent',axes3,'DisplayName','psi_d vs tout');

% Create xlabel
xlabel('t, �');

% Create ylabel
ylabel('psi d, �/�');

box(axes3,'on');
% Set the remaining axes properties
set(axes3,'OuterPosition',[0 0 1 0.333333333333333],'XGrid','on','YGrid',...
    'on');

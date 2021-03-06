function graph2X(tout1, psi1, m_tout1, m_psi1, theta_d1, m_theta_d1, psi_d1, m_psi_d1)
%CREATEFIGURE(TOUT1, PSI1, M_TOUT1, M_PSI1, THETA_D1, M_THETA_D1, PSI_D1, M_PSI_D1)
%  TOUT1:  vector of x data
%  PSI1:  vector of y data
%  M_TOUT1:  vector of x data
%  M_PSI1:  vector of y data
%  THETA_D1:  vector of y data
%  M_THETA_D1:  vector of y data
%  PSI_D1:  vector of y data
%  M_PSI_D1:  vector of y data

%  Auto-generated by MATLAB on 04-May-2020 10:16:43

% Create figure
figure1 = figure;

% Create axes
axes1 = axes('Parent',figure1);
hold(axes1,'on');

% Create plot
plot(tout1,psi1,'Parent',axes1,'DisplayName','my model');

% Create plot
plot(m_tout1,m_psi1,'Parent',axes1,'DisplayName','model');

% Create ylabel
ylabel('psi, �','FontSize',11);

box(axes1,'on');
% Set the remaining axes properties
set(axes1,'OuterPosition',[0 0.666666666666667 1 0.333333333333333],'XGrid',...
    'on','YGrid','on');
% Create legend
legend1 = legend(axes1,'show');
set(legend1,...
    'Position',[0.75078125 0.876899696048632 0.145182291049666 0.0855971357191644],...
    'FontSize',14);

% Create axes
axes2 = axes('Parent',figure1);
hold(axes2,'on');

% Create plot
plot(tout1,theta_d1,'Parent',axes2,'DisplayName','theta_d');

% Create plot
plot(m_tout1,m_theta_d1,'Parent',axes2,'DisplayName','m_theta_d vs m_tout');

% Create ylabel
ylabel('theta d, �/�','FontSize',11);

box(axes2,'on');
% Set the remaining axes properties
set(axes2,'OuterPosition',[0 0.333333333333333 1 0.333333333333333],'XGrid',...
    'on','YGrid','on');
% Create axes
axes3 = axes('Parent',figure1);
hold(axes3,'on');

% Create plot
plot(tout1,psi_d1,'Parent',axes3,'DisplayName','psi_d');

% Create plot
plot(m_tout1,m_psi_d1,'Parent',axes3,'DisplayName','m_psi_d vs m_tout');

% Create xlabel
xlabel('t, �','FontSize',11);

% Create ylabel
ylabel('psi d, �/�','FontSize',11);

box(axes3,'on');
% Set the remaining axes properties
set(axes3,'OuterPosition',[0 0 1 0.333333333333333],'XGrid','on','YGrid',...
    'on');

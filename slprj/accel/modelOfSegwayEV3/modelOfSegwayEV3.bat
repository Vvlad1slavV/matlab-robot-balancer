@echo off
set MATLAB=C:\Program Files\MATLAB\R2016a
"%MATLAB%\bin\win64\gmake" -f modelOfSegwayEV3.mk  ISPROTECTINGMODEL=NOTPROTECTING

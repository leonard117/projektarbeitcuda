echo "setup for Geforce 9500 GT"

rem set DOUBLEDEFINE=-DPRJACUDADOUBLE
set DOUBLEDEFINE=

rem DOUBLEFLAGS=%DOUBLEDEFINE% --gpu-architecture sm_13
set DOUBLEFLAGS=%DOUBLEDEFINE% 

set PRJACUDACFLAGS=-I include/common %DOUBLEFLAGS%
set BLA="set by skript"
set PRJACUDAOBJEXT=obj
set PRJACUDAEXEEXT=exe

set PRJACUDAHOSTLD=link
set PRJACUDALIBEXT=lib
set PRJACUDAHOSCC=cl

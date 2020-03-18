#include "__cf_modelOfSegwayEV3.h"
#include <math.h>
#include "modelOfSegwayEV3_acc.h"
#include "modelOfSegwayEV3_acc_private.h"
#include <stdio.h>
#include "slexec_vm_simstruct_bridge.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_lookup_functions.h"
#include "simstruc.h"
#include "fixedpoint.h"
#define CodeFormat S-Function
#define AccDefine1 Accelerator_S-Function
#include "simtarget/slAccSfcnBridge.h"
static void mdlOutputs ( SimStruct * S , int_T tid ) { real_T du5bn13db4 [ 2
] ; h4tebkygc3 * _rtB ; ezuunk4kvu * _rtP ; do4iepfbia * _rtX ; m3a5hlhhko *
_rtDW ; _rtDW = ( ( m3a5hlhhko * ) ssGetRootDWork ( S ) ) ; _rtX = ( (
do4iepfbia * ) ssGetContStates ( S ) ) ; _rtP = ( ( ezuunk4kvu * )
ssGetModelRtp ( S ) ) ; _rtB = ( ( h4tebkygc3 * ) _ssGetModelBlockIO ( S ) )
; if ( ssIsSampleHit ( S , 2 , 0 ) ) { _rtB -> odzsnlqy1s = _rtDW ->
ku1uzcylbh ; _rtB -> l2xdc1jfky = _rtDW -> o3aqaijl5j ; _rtB -> dallv1vewq =
muDoubleScalarRound ( _rtB -> l2xdc1jfky ) ; _rtB -> ptrdibyiap = ( _rtP ->
P_8 * _rtB -> dallv1vewq + _rtB -> odzsnlqy1s ) * _rtP -> P_9 ; _rtB ->
mlehi23d0z = _rtB -> ptrdibyiap - _rtDW -> itxazcbsla ; } _rtB -> mcvi1sdery
[ 0 ] = 0.0 ; _rtB -> mcvi1sdery [ 1 ] = 0.0 ; _rtB -> mcvi1sdery [ 2 ] = 0.0
; _rtB -> mcvi1sdery [ 0 ] += _rtP -> P_13 [ 0 ] * _rtX -> g0rfw1kv3p [ 0 ] ;
_rtB -> mcvi1sdery [ 1 ] += _rtP -> P_13 [ 1 ] * _rtX -> g0rfw1kv3p [ 1 ] ;
_rtB -> mcvi1sdery [ 2 ] += _rtP -> P_13 [ 2 ] * _rtX -> g0rfw1kv3p [ 2 ] ;
ssCallAccelRunBlock ( S , 0 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> gjhzvr3h50
= muDoubleScalarRound ( _rtB -> j4uxjgjt0h ) ; if ( ssIsSampleHit ( S , 1 , 0
) && ssIsSampleHit ( S , 2 , 0 ) ) { _rtB -> hnys2jwmas = _rtB -> gjhzvr3h50
; } if ( ssIsSampleHit ( S , 2 , 0 ) ) { _rtB -> e53h5hzzax = _rtP -> P_15 *
_rtB -> hnys2jwmas ; ssCallAccelRunBlock ( S , 1 , 13 , SS_CALL_MDL_OUTPUTS )
; _rtB -> kddpjqefz1 = ( ( ( _rtB -> m0pljedxcs - _rtB -> odzsnlqy1s ) * _rtP
-> P_17 [ 0 ] + ( _rtB -> m0pljedxcs - _rtB -> mlehi23d0z ) * _rtP -> P_17 [
1 ] ) + ( _rtB -> m0pljedxcs - _rtB -> e53h5hzzax ) * _rtP -> P_17 [ 2 ] ) *
_rtP -> P_18 ; { if ( _rtDW -> lbsvy4v23b . AQHandles ) { sdiWriteSignal (
_rtDW -> lbsvy4v23b . AQHandles , ssGetTaskTime ( S , 2 ) , ( void * ) & _rtB
-> hnys2jwmas ) ; } } { if ( _rtDW -> c2f2b5zwxh . AQHandles ) {
sdiWriteSignal ( _rtDW -> c2f2b5zwxh . AQHandles , ssGetTaskTime ( S , 2 ) ,
( void * ) & _rtB -> e53h5hzzax ) ; } } _rtB -> etw4j0kx1r =
muDoubleScalarRound ( _rtB -> kddpjqefz1 ) ; if ( _rtB -> etw4j0kx1r > _rtP
-> P_19 ) { _rtB -> m1tck3yihc = _rtP -> P_19 ; } else if ( _rtB ->
etw4j0kx1r < _rtP -> P_20 ) { _rtB -> m1tck3yihc = _rtP -> P_20 ; } else {
_rtB -> m1tck3yihc = _rtB -> etw4j0kx1r ; } _rtB -> cboyin2dh0 = _rtP -> P_21
* _rtB -> m1tck3yihc ; { if ( _rtDW -> ljjwvghjzk . AQHandles ) {
sdiWriteSignal ( _rtDW -> ljjwvghjzk . AQHandles , ssGetTaskTime ( S , 2 ) ,
( void * ) & _rtB -> cboyin2dh0 ) ; } } { if ( _rtDW -> lu2rz23bks .
AQHandles ) { sdiWriteSignal ( _rtDW -> lu2rz23bks . AQHandles ,
ssGetTaskTime ( S , 2 ) , ( void * ) & _rtB -> m1tck3yihc ) ; } } } if (
ssIsSampleHit ( S , 1 , 0 ) ) { du5bn13db4 [ 0 ] = _rtB -> dallv1vewq ;
du5bn13db4 [ 1 ] = _rtB -> gjhzvr3h50 ; { if ( _rtDW -> liixjy14pi .
AQHandles ) { sdiWriteSignal ( _rtDW -> liixjy14pi . AQHandles ,
ssGetTaskTime ( S , 1 ) , ( void * ) & du5bn13db4 [ 0 ] ) ; } } { if ( _rtDW
-> l5pokdaow0 . AQHandles ) { sdiWriteSignal ( _rtDW -> l5pokdaow0 .
AQHandles , ssGetTaskTime ( S , 1 ) , ( void * ) & _rtB -> mcvi1sdery [ 0 ] )
; } } } ssCallAccelRunBlock ( S , 1 , 28 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 29 , SS_CALL_MDL_OUTPUTS ) ; if ( ssIsSampleHit
( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 1 , 30 , SS_CALL_MDL_OUTPUTS ) ;
} ssCallAccelRunBlock ( S , 1 , 31 , SS_CALL_MDL_OUTPUTS ) ; if (
ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 1 , 32 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 33 ,
SS_CALL_MDL_OUTPUTS ) ; } UNUSED_PARAMETER ( tid ) ; } static void
mdlOutputsTID3 ( SimStruct * S , int_T tid ) { h4tebkygc3 * _rtB ; ezuunk4kvu
* _rtP ; _rtP = ( ( ezuunk4kvu * ) ssGetModelRtp ( S ) ) ; _rtB = ( (
h4tebkygc3 * ) _ssGetModelBlockIO ( S ) ) ; _rtB -> m0pljedxcs = _rtP -> P_16
; UNUSED_PARAMETER ( tid ) ; }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { h4tebkygc3 * _rtB ;
ezuunk4kvu * _rtP ; m3a5hlhhko * _rtDW ; _rtDW = ( ( m3a5hlhhko * )
ssGetRootDWork ( S ) ) ; _rtP = ( ( ezuunk4kvu * ) ssGetModelRtp ( S ) ) ;
_rtB = ( ( h4tebkygc3 * ) _ssGetModelBlockIO ( S ) ) ; if ( ssIsSampleHit ( S
, 2 , 0 ) ) { _rtDW -> ku1uzcylbh += _rtP -> P_4 * _rtB -> e53h5hzzax ; _rtDW
-> o3aqaijl5j += _rtP -> P_6 * _rtB -> ftqmx1opip ; _rtDW -> itxazcbsla =
_rtB -> ptrdibyiap ; } UNUSED_PARAMETER ( tid ) ; }
#define MDL_UPDATE
static void mdlUpdateTID3 ( SimStruct * S , int_T tid ) { UNUSED_PARAMETER (
tid ) ; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { h4tebkygc3 * _rtB ; ezuunk4kvu
* _rtP ; do4iepfbia * _rtX ; b2puml0wiq * _rtXdot ; _rtXdot = ( ( b2puml0wiq
* ) ssGetdX ( S ) ) ; _rtX = ( ( do4iepfbia * ) ssGetContStates ( S ) ) ;
_rtP = ( ( ezuunk4kvu * ) ssGetModelRtp ( S ) ) ; _rtB = ( ( h4tebkygc3 * )
_ssGetModelBlockIO ( S ) ) ; _rtXdot -> g0rfw1kv3p [ 0 ] = 0.0 ; _rtXdot ->
g0rfw1kv3p [ 1 ] = 0.0 ; _rtXdot -> g0rfw1kv3p [ 2 ] = 0.0 ; _rtXdot ->
g0rfw1kv3p [ 0 ] += _rtP -> P_11 [ 0 ] * _rtX -> g0rfw1kv3p [ 2 ] ; _rtXdot
-> g0rfw1kv3p [ 1 ] += _rtP -> P_11 [ 1 ] * _rtX -> g0rfw1kv3p [ 0 ] ;
_rtXdot -> g0rfw1kv3p [ 1 ] += _rtP -> P_11 [ 2 ] * _rtX -> g0rfw1kv3p [ 1 ]
; _rtXdot -> g0rfw1kv3p [ 2 ] += _rtP -> P_11 [ 3 ] * _rtX -> g0rfw1kv3p [ 0
] ; _rtXdot -> g0rfw1kv3p [ 2 ] += _rtP -> P_11 [ 4 ] * _rtX -> g0rfw1kv3p [
1 ] ; _rtXdot -> g0rfw1kv3p [ 1 ] += _rtP -> P_12 [ 0 ] * _rtB -> cboyin2dh0
; _rtXdot -> g0rfw1kv3p [ 2 ] += _rtP -> P_12 [ 1 ] * _rtB -> cboyin2dh0 ; }
static void mdlInitializeSizes ( SimStruct * S ) { ssSetChecksumVal ( S , 0 ,
1505301545U ) ; ssSetChecksumVal ( S , 1 , 3526934974U ) ; ssSetChecksumVal (
S , 2 , 3280929347U ) ; ssSetChecksumVal ( S , 3 , 3264421239U ) ; { mxArray
* slVerStructMat = NULL ; mxArray * slStrMat = mxCreateString ( "simulink" )
; char slVerChar [ 10 ] ; int status = mexCallMATLAB ( 1 , & slVerStructMat ,
1 , & slStrMat , "ver" ) ; if ( status == 0 ) { mxArray * slVerMat =
mxGetField ( slVerStructMat , 0 , "Version" ) ; if ( slVerMat == NULL ) {
status = 1 ; } else { status = mxGetString ( slVerMat , slVerChar , 10 ) ; }
} mxDestroyArray ( slStrMat ) ; mxDestroyArray ( slVerStructMat ) ; if ( (
status == 1 ) || ( strcmp ( slVerChar , "8.7" ) != 0 ) ) { return ; } }
ssSetOptions ( S , SS_OPTION_EXCEPTION_FREE_CODE ) ; if ( ssGetSizeofDWork (
S ) != sizeof ( m3a5hlhhko ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal DWork sizes do "
"not match for accelerator mex file." ) ; } if ( ssGetSizeofGlobalBlockIO ( S
) != sizeof ( h4tebkygc3 ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal BlockIO sizes do "
"not match for accelerator mex file." ) ; } { int ssSizeofParams ;
ssGetSizeofParams ( S , & ssSizeofParams ) ; if ( ssSizeofParams != sizeof (
ezuunk4kvu ) ) { static char msg [ 256 ] ; sprintf ( msg ,
"Unexpected error: Internal Parameters sizes do "
"not match for accelerator mex file." ) ; } } _ssSetModelRtp ( S , ( real_T *
) & bureq5jf0f ) ; rt_InitInfAndNaN ( sizeof ( real_T ) ) ; } static void
mdlInitializeSampleTimes ( SimStruct * S ) { { SimStruct * childS ;
SysOutputFcn * callSysFcns ; childS = ssGetSFunction ( S , 0 ) ; callSysFcns
= ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; } slAccRegPrmChangeFcn ( S , mdlOutputsTID3 ) ; }
static void mdlTerminate ( SimStruct * S ) { }
#include "simulink.c"

#include "__cf_just_the_dynamics1.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "just_the_dynamics1_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "just_the_dynamics1.h"
#include "just_the_dynamics1_capi.h"
#include "just_the_dynamics1_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/V1_WP" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 1 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/V2_WP" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/V3_WP" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/V4_WP" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Sum1" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 5 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Sum2" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 6 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Sum4" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 7 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Sum7" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 8 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Body dynamics/Pitch Stability/Int_dtheta" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 9 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Body dynamics/Pitch Stability/Int_theta" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 10 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Body dynamics/Pitch Stability/Sum8" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 11 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Body dynamics/Roll Stability/int_dphi" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 12 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Body dynamics/Roll Stability/int_phi" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 13 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Body dynamics/Roll Stability/Sum9" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 14 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Body dynamics/Yaw Stability/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 15 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Body dynamics/Yaw Stability/Int_dPsi" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 16 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Body dynamics/Yaw Stability/Int_psi" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 17 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Body dynamics/gibanje u prostoru/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 18 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Body dynamics/gibanje u prostoru/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 19 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Body dynamics/gibanje u prostoru/Gain3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 20 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Body dynamics/gibanje u prostoru/Int_dx" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 21 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Body dynamics/gibanje u prostoru/Int_dy" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 22 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Body dynamics/gibanje u prostoru/Int_dz" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 23 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Body dynamics/gibanje u prostoru/Int_x" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 24 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Body dynamics/gibanje u prostoru/Int_y" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 25 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Body dynamics/gibanje u prostoru/Int_z" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 26 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Body dynamics/gibanje u prostoru/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 27 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Body dynamics/gibanje u prostoru/Product1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 28 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Body dynamics/gibanje u prostoru/Product2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 29 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor1/DragFcn1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 30 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor1/RtrSpdFcn1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 31 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor1/ThrustFcn1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 32 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor1/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 33 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor1/Saturation3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 34 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor1/Saturation4" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 35 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor2/DragFcn1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 36 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor2/RtrSpdFcn1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 37 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor2/ThrustFcn1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 38 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor2/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 39 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor2/Saturation3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 40 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor2/Saturation4" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 41 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor3/DragFcn1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 42 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor3/RtrSpdFcn1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 43 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor3/ThrustFcn1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 44 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor3/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 45 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor3/Saturation3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 46 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor3/Saturation4" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 47 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor4/DragFcn1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 48 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor4/RtrSpdFcn1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 49 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor4/ThrustFcn1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 50 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor4/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 51 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor4/Saturation3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 52 , 0 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor4/Saturation4" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 53 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/V1_WP" ) , TARGET_STRING ( "Time"
) , 0 , 0 , 0 } , { 54 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/V2_WP" ) , TARGET_STRING ( "Time"
) , 0 , 0 , 0 } , { 55 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/V3_WP" ) , TARGET_STRING ( "Time"
) , 0 , 0 , 0 } , { 56 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/V4_WP" ) , TARGET_STRING ( "Time"
) , 0 , 0 , 0 } , { 57 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Body dynamics/gibanje u prostoru/Int_dx" ) ,
TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 58 , TARGET_STRING
( "just_the_dynamics1/quadmdl/Body dynamics/gibanje u prostoru/Int_dx" ) ,
TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 59 , TARGET_STRING
( "just_the_dynamics1/quadmdl/Body dynamics/gibanje u prostoru/Int_dy" ) ,
TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 60 , TARGET_STRING
( "just_the_dynamics1/quadmdl/Body dynamics/gibanje u prostoru/Int_dy" ) ,
TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 61 , TARGET_STRING
( "just_the_dynamics1/quadmdl/Body dynamics/gibanje u prostoru/Int_dz" ) ,
TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 62 , TARGET_STRING
( "just_the_dynamics1/quadmdl/Body dynamics/gibanje u prostoru/Int_dz" ) ,
TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 63 , TARGET_STRING
( "just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor1/Saturation3" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 64 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor1/Saturation3" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 65 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor1/Saturation4" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 66 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor1/Saturation4" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 67 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor1/Saturation8" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 68 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor1/Saturation8" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 69 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor2/Saturation3" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 70 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor2/Saturation3" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 71 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor2/Saturation4" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 72 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor2/Saturation4" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 73 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor2/Saturation8" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 74 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor2/Saturation8" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 75 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor3/Saturation3" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 76 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor3/Saturation3" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 77 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor3/Saturation4" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 78 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor3/Saturation4" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 79 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor3/Saturation8" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 80 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor3/Saturation8" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 81 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor4/Saturation3" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 82 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor4/Saturation3" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 83 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor4/Saturation4" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 84 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor4/Saturation4" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 85 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor4/Saturation8" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 86 , TARGET_STRING (
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor4/Saturation8" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0
, 0 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] = {
{ 87 , TARGET_STRING ( "Ixx" ) , 0 , 0 , 0 } , { 88 , TARGET_STRING ( "Iyy" )
, 0 , 0 , 0 } , { 89 , TARGET_STRING ( "Izz" ) , 0 , 0 , 0 } , { 90 ,
TARGET_STRING ( "Jr" ) , 0 , 0 , 0 } , { 91 , TARGET_STRING ( "K" ) , 0 , 1 ,
0 } , { 92 , TARGET_STRING ( "L" ) , 0 , 0 , 0 } , { 93 , TARGET_STRING (
"Tau" ) , 0 , 0 , 0 } , { 94 , TARGET_STRING ( "V1_WP" ) , 0 , 0 , 0 } , { 95
, TARGET_STRING ( "V2_WP" ) , 0 , 0 , 0 } , { 96 , TARGET_STRING ( "V3_WP" )
, 0 , 0 , 0 } , { 97 , TARGET_STRING ( "V4_WP" ) , 0 , 0 , 0 } , { 98 ,
TARGET_STRING ( "c_mi_x" ) , 0 , 0 , 0 } , { 99 , TARGET_STRING ( "c_mi_y" )
, 0 , 0 , 0 } , { 100 , TARGET_STRING ( "c_mi_z" ) , 0 , 0 , 0 } , { 101 ,
TARGET_STRING ( "co_x" ) , 0 , 0 , 0 } , { 102 , TARGET_STRING ( "co_y" ) , 0
, 0 , 0 } , { 103 , TARGET_STRING ( "co_z" ) , 0 , 0 , 0 } , { 104 ,
TARGET_STRING ( "d_omega_R10" ) , 0 , 0 , 0 } , { 105 , TARGET_STRING (
"d_omega_R20" ) , 0 , 0 , 0 } , { 106 , TARGET_STRING ( "d_omega_R30" ) , 0 ,
0 , 0 } , { 107 , TARGET_STRING ( "d_omega_R40" ) , 0 , 0 , 0 } , { 108 ,
TARGET_STRING ( "dfi_0" ) , 0 , 0 , 0 } , { 109 , TARGET_STRING ( "dpsi_0" )
, 0 , 0 , 0 } , { 110 , TARGET_STRING ( "dtheta_0" ) , 0 , 0 , 0 } , { 111 ,
TARGET_STRING ( "dx_0" ) , 0 , 0 , 0 } , { 112 , TARGET_STRING ( "dy_0" ) , 0
, 0 , 0 } , { 113 , TARGET_STRING ( "dz_0" ) , 0 , 0 , 0 } , { 114 ,
TARGET_STRING ( "fi_0" ) , 0 , 0 , 0 } , { 115 , TARGET_STRING ( "ga" ) , 0 ,
0 , 0 } , { 116 , TARGET_STRING ( "m" ) , 0 , 0 , 0 } , { 117 , TARGET_STRING
( "psi_0" ) , 0 , 0 , 0 } , { 118 , TARGET_STRING ( "stateref" ) , 0 , 2 , 0
} , { 119 , TARGET_STRING ( "theta_0" ) , 0 , 0 , 0 } , { 120 , TARGET_STRING
( "x_0" ) , 0 , 0 , 0 } , { 121 , TARGET_STRING ( "y_0" ) , 0 , 0 , 0 } , {
122 , TARGET_STRING ( "z_0" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } }
;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . c5045fm0r3 , & rtB . mtq4y2sxeq ,
& rtB . lrrxi4kf0d , & rtB . o00lpn04dj , & rtB . ih00fqirlm , & rtB .
lbff3pxttp , & rtB . h3xuknejsc , & rtB . dtmggwb1du , & rtB . ngjxi4neqa , &
rtB . lab5qdszn2 , & rtB . inhjzmnieg , & rtB . iwwwna3wpy , & rtB .
gf2awefhcg , & rtB . mj4up1ypwq , & rtB . j05trt3bmi , & rtB . ckbpwhkuob , &
rtB . hdgyrvx3s5 , & rtB . hfkq4552dr , & rtB . ahbpwd431t , & rtB .
nopngpsq2v , & rtB . cbd1jisbzs , & rtB . bdfulujwps , & rtB . cm13zakw1m , &
rtB . le5ctscxhr , & rtB . mtss1t4ese , & rtB . ktattksosw , & rtB .
aa4upzmaz2 , & rtB . hdvk5b1vox , & rtB . a3xgmxzh1z , & rtB . lpvfihydgk , &
rtB . enmiubotat , & rtB . lrhkveetji , & rtB . fup13t4pag , & rtB .
kp5mv2rlo4 , & rtB . gbb5qnoror , & rtB . p0trcmhycu , & rtB . dp1mnubey0 , &
rtB . ae4dv4izel , & rtB . dupb4l5q02 , & rtB . bvbonmsp00 , & rtB .
fsywf0hq1r , & rtB . jy3jw2aaps , & rtB . icy11govsb , & rtB . m2u5tpfjkr , &
rtB . nkbtbu2dxp , & rtB . ktszyhjg23 , & rtB . pmnih4o00w , & rtB .
edf3zdrk1s , & rtB . ctpkxivim5 , & rtB . hc302at03e , & rtB . fcgqdb23w4 , &
rtB . jnardyy1id , & rtB . p2pplosrht , & rtP . V1_WP_Time , & rtP .
V2_WP_Time , & rtP . V3_WP_Time , & rtP . V4_WP_Time , & rtP .
Int_dx_UpperSat , & rtP . Int_dx_LowerSat , & rtP . Int_dy_UpperSat , & rtP .
Int_dy_LowerSat , & rtP . Int_dz_UpperSat , & rtP . Int_dz_LowerSat , & rtP .
Saturation3_UpperSat , & rtP . Saturation3_LowerSat , & rtP .
Saturation4_UpperSat , & rtP . Saturation4_LowerSat , & rtP .
Saturation8_UpperSat , & rtP . Saturation8_LowerSat , & rtP .
Saturation3_UpperSat_bsq3lnifj4 , & rtP . Saturation3_LowerSat_ikv1cw5k2t , &
rtP . Saturation4_UpperSat_h0v3pz2g5e , & rtP .
Saturation4_LowerSat_gy3tebytcm , & rtP . Saturation8_UpperSat_ivnhhtjl1t , &
rtP . Saturation8_LowerSat_m0gx2ayxie , & rtP .
Saturation3_UpperSat_etj5umigle , & rtP . Saturation3_LowerSat_czlw4uugdp , &
rtP . Saturation4_UpperSat_hzhi3ky35l , & rtP .
Saturation4_LowerSat_jrjqdhefgm , & rtP . Saturation8_UpperSat_jtahv23i3q , &
rtP . Saturation8_LowerSat_kqwcbf42bl , & rtP .
Saturation3_UpperSat_ibvqhf1uwi , & rtP . Saturation3_LowerSat_itkhn4lksx , &
rtP . Saturation4_UpperSat_e4islxddmg , & rtP .
Saturation4_LowerSat_eokc4vgvhv , & rtP . Saturation8_UpperSat_pqzwkmp3ln , &
rtP . Saturation8_LowerSat_cdlagjspwp , & rtP . Ixx , & rtP . Iyy , & rtP .
Izz , & rtP . Jr , & rtP . K [ 0 ] , & rtP . L , & rtP . Tau , & rtP . V1_WP
, & rtP . V2_WP , & rtP . V3_WP , & rtP . V4_WP , & rtP . c_mi_x , & rtP .
c_mi_y , & rtP . c_mi_z , & rtP . co_x , & rtP . co_y , & rtP . co_z , & rtP
. d_omega_R10 , & rtP . d_omega_R20 , & rtP . d_omega_R30 , & rtP .
d_omega_R40 , & rtP . dfi_0 , & rtP . dpsi_0 , & rtP . dtheta_0 , & rtP .
dx_0 , & rtP . dy_0 , & rtP . dz_0 , & rtP . fi_0 , & rtP . ga , & rtP . m ,
& rtP . psi_0 , & rtP . stateref [ 0 ] , & rtP . theta_0 , & rtP . x_0 , &
rtP . y_0 , & rtP . z_0 , } ; static int32_T * rtVarDimsAddrMap [ ] = { (
NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
1 , 1 , 4 , 16 , 16 , 1 } ; static const real_T rtcapiStoredFloats [ ] = {
0.0 , 1.0 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , (
NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 1 ,
0 } , { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , 0 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 53 , ( NULL ) , 0 , ( NULL ) , 0 } , {
rtBlockParameters , 34 , rtModelParameters , 36 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 2736249441U , 680407911U , 4145678026U ,
3505881777U } , ( NULL ) , 0 , 0 } ; const rtwCAPI_ModelMappingStaticInfo *
just_the_dynamics1_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void just_the_dynamics1_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion (
( * rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void just_the_dynamics1_host_InitializeDataMapInfo (
just_the_dynamics1_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif

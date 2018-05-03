#include "__cf_just_the_dynamics1.h"
#include "rt_logging_mmi.h"
#include "just_the_dynamics1_capi.h"
#include <math.h>
#include "just_the_dynamics1.h"
#include "just_the_dynamics1_private.h"
#include "just_the_dynamics1_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , & stopRequested ) ; }
rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "8.13 (R2017b) 24-Jul-2017" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const char * gblSlvrJacPatternFileName =
"slprj\\raccel\\just_the_dynamics1\\just_the_dynamics1_Jpattern.mat" ; const
int_T gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
const int_T gblInportDataTypeIdx [ ] = { - 1 } ; const int_T gblInportDims [
] = { - 1 } ; const int_T gblInportComplex [ ] = { - 1 } ; const int_T
gblInportInterpoFlag [ ] = { - 1 } ; const int_T gblInportContinuous [ ] = {
- 1 } ;
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; void MdlInitialize ( void ) { rtX . me1tr5p43c = rtP . x_0 ; rtX
. asmespsfba = rtP . dx_0 ; rtX . lcvtgp0ytb = rtP . y_0 ; rtX . hogci11ttn =
rtP . dy_0 ; rtX . lhsedywedy = rtP . z_0 ; rtX . gbpfl4au0v = rtP . dz_0 ;
rtX . euin2nzgux = rtP . fi_0 ; rtX . bddgkhkyyx = rtP . dfi_0 ; rtX .
egdchrcdaw = rtP . theta_0 ; rtX . dvu0ruaigk = rtP . dtheta_0 ; rtX .
pdsbzmjy14 = rtP . psi_0 ; rtX . fi1mhnzysp = rtP . dpsi_0 ; rtX . ds224gxans
= rtP . d_omega_R10 ; rtX . plo3bhoclo = rtP . d_omega_R20 ; rtX . dowlczx0qg
= rtP . d_omega_R30 ; rtX . b2vvzrxihy = rtP . d_omega_R40 ; } void MdlStart
( void ) { { void * * slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; void *
r2 = ( NULL ) ; void * * pOSigstreamManagerAddr = ( NULL ) ; const char *
errorCreatingOSigstreamManager = ( NULL ) ; const char *
errorAddingR2SharedResource = ( NULL ) ; * slioCatalogueAddr =
rtwGetNewSlioCatalogue ( rt_GetMatSigLogSelectorFileName ( ) ) ;
errorAddingR2SharedResource = rtwAddR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) , 1 ) ; if (
errorAddingR2SharedResource != ( NULL ) ) { rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = ( NULL ) ; ssSetErrorStatus ( rtS
, errorAddingR2SharedResource ) ; return ; } r2 = rtwGetR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ) ;
pOSigstreamManagerAddr = rt_GetOSigstreamManagerAddr ( ) ;
errorCreatingOSigstreamManager = rtwOSigstreamManagerCreateInstance (
rt_GetMatSigLogSelectorFileName ( ) , r2 , pOSigstreamManagerAddr ) ; if (
errorCreatingOSigstreamManager != ( NULL ) ) { * pOSigstreamManagerAddr = (
NULL ) ; ssSetErrorStatus ( rtS , errorCreatingOSigstreamManager ) ; return ;
} } MdlInitialize ( ) ; { bool externalInputIsInDatasetFormat = false ; void
* pISigstreamManager = rt_GetISigstreamManager ( ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} } void MdlOutputs ( int_T tid ) { real_T m1bjkal5qi ; real_T f32f3iks2g ;
real_T mutm55wyft ; real_T iatoowdidd ; real_T phanqfafgx ; real_T jbgt4rvtwj
[ 4 ] ; real_T langa1khtr ; real_T pvstwylnp5 ; real_T nazzgpdb0w ; real_T
n4boyahi1w ; real_T tmp [ 16 ] ; real_T tmp_p [ 16 ] ; int32_T i ; int32_T
i_p ; rtB . le5ctscxhr = rtX . me1tr5p43c ; if ( ssIsMajorTimeStep ( rtS ) )
{ if ( rtX . asmespsfba >= rtP . Int_dx_UpperSat ) { if ( rtX . asmespsfba !=
rtP . Int_dx_UpperSat ) { rtX . asmespsfba = rtP . Int_dx_UpperSat ; } } else
{ if ( ( rtX . asmespsfba <= rtP . Int_dx_LowerSat ) && ( rtX . asmespsfba !=
rtP . Int_dx_LowerSat ) ) { rtX . asmespsfba = rtP . Int_dx_LowerSat ; } } if
( rtX . hogci11ttn >= rtP . Int_dy_UpperSat ) { if ( rtX . hogci11ttn != rtP
. Int_dy_UpperSat ) { rtX . hogci11ttn = rtP . Int_dy_UpperSat ; } } else {
if ( ( rtX . hogci11ttn <= rtP . Int_dy_LowerSat ) && ( rtX . hogci11ttn !=
rtP . Int_dy_LowerSat ) ) { rtX . hogci11ttn = rtP . Int_dy_LowerSat ; } } }
rtB . cbd1jisbzs = rtX . asmespsfba ; rtB . mtss1t4ese = rtX . lcvtgp0ytb ;
rtB . bdfulujwps = rtX . hogci11ttn ; rtB . ktattksosw = rtX . lhsedywedy ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtX . gbpfl4au0v >= rtP .
Int_dz_UpperSat ) { if ( rtX . gbpfl4au0v != rtP . Int_dz_UpperSat ) { rtX .
gbpfl4au0v = rtP . Int_dz_UpperSat ; } } else { if ( ( rtX . gbpfl4au0v <=
rtP . Int_dz_LowerSat ) && ( rtX . gbpfl4au0v != rtP . Int_dz_LowerSat ) ) {
rtX . gbpfl4au0v = rtP . Int_dz_LowerSat ; } } } rtB . cm13zakw1m = rtX .
gbpfl4au0v ; rtB . gf2awefhcg = rtX . euin2nzgux ; rtB . iwwwna3wpy = rtX .
bddgkhkyyx ; rtB . lab5qdszn2 = rtX . egdchrcdaw ; rtB . ngjxi4neqa = rtX .
dvu0ruaigk ; rtB . hdgyrvx3s5 = rtX . pdsbzmjy14 ; rtB . ckbpwhkuob = rtX .
fi1mhnzysp ; phanqfafgx = rtX . ds224gxans ; rtB . enmiubotat = 16.235 * rtX
. ds224gxans + - 0.5036 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
ldjqojcec1 = rtB . enmiubotat >= rtP . Saturation4_UpperSat ? 1 : rtB .
enmiubotat > rtP . Saturation4_LowerSat ? 0 : - 1 ; } rtB . gbb5qnoror = rtDW
. ldjqojcec1 == 1 ? rtP . Saturation4_UpperSat : rtDW . ldjqojcec1 == - 1 ?
rtP . Saturation4_LowerSat : rtB . enmiubotat ; iatoowdidd = rtX . plo3bhoclo
; rtB . dp1mnubey0 = 17.912 * rtX . plo3bhoclo + - 12.728 ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . ptr2yrursc = rtB . dp1mnubey0 >= rtP .
Saturation4_UpperSat_h0v3pz2g5e ? 1 : rtB . dp1mnubey0 > rtP .
Saturation4_LowerSat_gy3tebytcm ? 0 : - 1 ; } rtB . fsywf0hq1r = rtDW .
ptr2yrursc == 1 ? rtP . Saturation4_UpperSat_h0v3pz2g5e : rtDW . ptr2yrursc
== - 1 ? rtP . Saturation4_LowerSat_gy3tebytcm : rtB . dp1mnubey0 ;
mutm55wyft = rtX . dowlczx0qg ; rtB . icy11govsb = 17.914 * rtX . dowlczx0qg
+ - 6.5646 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . hmddz0hhbx = rtB .
icy11govsb >= rtP . Saturation4_UpperSat_hzhi3ky35l ? 1 : rtB . icy11govsb >
rtP . Saturation4_LowerSat_jrjqdhefgm ? 0 : - 1 ; } rtB . pmnih4o00w = rtDW .
hmddz0hhbx == 1 ? rtP . Saturation4_UpperSat_hzhi3ky35l : rtDW . hmddz0hhbx
== - 1 ? rtP . Saturation4_LowerSat_jrjqdhefgm : rtB . icy11govsb ;
f32f3iks2g = rtX . b2vvzrxihy ; rtB . ctpkxivim5 = 18.161 * rtX . b2vvzrxihy
+ - 7.4637 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . dhdcay24db = rtB .
ctpkxivim5 >= rtP . Saturation4_UpperSat_e4islxddmg ? 1 : rtB . ctpkxivim5 >
rtP . Saturation4_LowerSat_eokc4vgvhv ? 0 : - 1 ; } rtB . p2pplosrht = rtDW .
dhdcay24db == 1 ? rtP . Saturation4_UpperSat_e4islxddmg : rtDW . dhdcay24db
== - 1 ? rtP . Saturation4_LowerSat_eokc4vgvhv : rtB . ctpkxivim5 ; tmp [ 0 ]
= rtB . le5ctscxhr ; tmp [ 1 ] = rtB . cbd1jisbzs ; tmp [ 2 ] = rtB .
mtss1t4ese ; tmp [ 3 ] = rtB . bdfulujwps ; tmp [ 4 ] = rtB . ktattksosw ;
tmp [ 5 ] = rtB . cm13zakw1m ; tmp [ 6 ] = rtB . gf2awefhcg ; tmp [ 7 ] = rtB
. iwwwna3wpy ; tmp [ 8 ] = rtB . lab5qdszn2 ; tmp [ 9 ] = rtB . ngjxi4neqa ;
tmp [ 10 ] = rtB . hdgyrvx3s5 ; tmp [ 11 ] = rtB . ckbpwhkuob ; tmp [ 12 ] =
rtB . gbb5qnoror ; tmp [ 13 ] = rtB . fsywf0hq1r ; tmp [ 14 ] = rtB .
pmnih4o00w ; tmp [ 15 ] = rtB . p2pplosrht ; for ( i = 0 ; i < 16 ; i ++ ) {
tmp_p [ i ] = rtP . stateref [ i ] - tmp [ i ] ; } for ( i = 0 ; i < 4 ; i ++
) { jbgt4rvtwj [ i ] = 0.0 ; for ( i_p = 0 ; i_p < 16 ; i_p ++ ) { jbgt4rvtwj
[ i ] += rtP . K [ ( i_p << 2 ) + i ] * tmp_p [ i_p ] ; } } rtB . lrhkveetji
= ( 0.0002 * muDoubleScalarPower ( rtB . gbb5qnoror , 2.0 ) + 0.0071 * rtB .
gbb5qnoror ) + - 0.2625 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
d3wh4cztop = rtB . lrhkveetji >= rtP . Saturation3_UpperSat ? 1 : rtB .
lrhkveetji > rtP . Saturation3_LowerSat ? 0 : - 1 ; } rtB . kp5mv2rlo4 = rtDW
. d3wh4cztop == 1 ? rtP . Saturation3_UpperSat : rtDW . d3wh4cztop == - 1 ?
rtP . Saturation3_LowerSat : rtB . lrhkveetji ; rtB . ae4dv4izel = ( 0.0002 *
muDoubleScalarPower ( rtB . fsywf0hq1r , 2.0 ) + 0.0071 * rtB . fsywf0hq1r )
+ - 0.2625 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . p4xyyqaszr = rtB .
ae4dv4izel >= rtP . Saturation3_UpperSat_bsq3lnifj4 ? 1 : rtB . ae4dv4izel >
rtP . Saturation3_LowerSat_ikv1cw5k2t ? 0 : - 1 ; } rtB . bvbonmsp00 = rtDW .
p4xyyqaszr == 1 ? rtP . Saturation3_UpperSat_bsq3lnifj4 : rtDW . p4xyyqaszr
== - 1 ? rtP . Saturation3_LowerSat_ikv1cw5k2t : rtB . ae4dv4izel ; rtB .
m2u5tpfjkr = ( 0.0002 * muDoubleScalarPower ( rtB . pmnih4o00w , 2.0 ) +
0.0071 * rtB . pmnih4o00w ) + - 0.2625 ; if ( ssIsMajorTimeStep ( rtS ) ) {
rtDW . owy3xymafw = rtB . m2u5tpfjkr >= rtP . Saturation3_UpperSat_etj5umigle
? 1 : rtB . m2u5tpfjkr > rtP . Saturation3_LowerSat_czlw4uugdp ? 0 : - 1 ; }
rtB . ktszyhjg23 = rtDW . owy3xymafw == 1 ? rtP .
Saturation3_UpperSat_etj5umigle : rtDW . owy3xymafw == - 1 ? rtP .
Saturation3_LowerSat_czlw4uugdp : rtB . m2u5tpfjkr ; rtB . hc302at03e = (
0.0002 * muDoubleScalarPower ( rtB . p2pplosrht , 2.0 ) + 0.0071 * rtB .
p2pplosrht ) + - 0.2625 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
mgrscpln2p = rtB . hc302at03e >= rtP . Saturation3_UpperSat_ibvqhf1uwi ? 1 :
rtB . hc302at03e > rtP . Saturation3_LowerSat_itkhn4lksx ? 0 : - 1 ; } rtB .
jnardyy1id = rtDW . mgrscpln2p == 1 ? rtP . Saturation3_UpperSat_ibvqhf1uwi :
rtDW . mgrscpln2p == - 1 ? rtP . Saturation3_LowerSat_itkhn4lksx : rtB .
hc302at03e ; rtB . h3xuknejsc = ( ( rtB . kp5mv2rlo4 + rtB . bvbonmsp00 ) +
rtB . ktszyhjg23 ) + rtB . jnardyy1id ; rtB . dtmggwb1du = rtB . jnardyy1id -
rtB . bvbonmsp00 ; rtB . ih00fqirlm = rtB . ktszyhjg23 - rtB . kp5mv2rlo4 ;
rtB . lpvfihydgk = ( 5.0e-6 * muDoubleScalarPower ( rtB . gbb5qnoror , 2.0 )
+ 0.0008 * rtB . gbb5qnoror ) + - 0.0282 ; rtB . p0trcmhycu = ( 5.0e-6 *
muDoubleScalarPower ( rtB . fsywf0hq1r , 2.0 ) + 0.0008 * rtB . fsywf0hq1r )
+ - 0.0282 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . cxmnq1njjp = rtB .
lpvfihydgk >= rtP . Saturation8_UpperSat ? 1 : rtB . lpvfihydgk > rtP .
Saturation8_LowerSat ? 0 : - 1 ; } rtB . jy3jw2aaps = ( 5.0e-6 *
muDoubleScalarPower ( rtB . pmnih4o00w , 2.0 ) + 0.0008 * rtB . pmnih4o00w )
+ - 0.0282 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . dtyta1szku = rtB .
p0trcmhycu >= rtP . Saturation8_UpperSat_ivnhhtjl1t ? 1 : rtB . p0trcmhycu >
rtP . Saturation8_LowerSat_m0gx2ayxie ? 0 : - 1 ; } rtB . edf3zdrk1s = (
5.0e-6 * muDoubleScalarPower ( rtB . p2pplosrht , 2.0 ) + 0.0008 * rtB .
p2pplosrht ) + - 0.0282 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
kfd22jojmu = rtB . jy3jw2aaps >= rtP . Saturation8_UpperSat_jtahv23i3q ? 1 :
rtB . jy3jw2aaps > rtP . Saturation8_LowerSat_kqwcbf42bl ? 0 : - 1 ; rtDW .
dzliwdnuer = rtB . edf3zdrk1s >= rtP . Saturation8_UpperSat_pqzwkmp3ln ? 1 :
rtB . edf3zdrk1s > rtP . Saturation8_LowerSat_cdlagjspwp ? 0 : - 1 ; } rtB .
lbff3pxttp = ( ( ( rtDW . dtyta1szku == 1 ? rtP .
Saturation8_UpperSat_ivnhhtjl1t : rtDW . dtyta1szku == - 1 ? rtP .
Saturation8_LowerSat_m0gx2ayxie : rtB . p0trcmhycu ) - ( rtDW . cxmnq1njjp ==
1 ? rtP . Saturation8_UpperSat : rtDW . cxmnq1njjp == - 1 ? rtP .
Saturation8_LowerSat : rtB . lpvfihydgk ) ) - ( rtDW . kfd22jojmu == 1 ? rtP
. Saturation8_UpperSat_jtahv23i3q : rtDW . kfd22jojmu == - 1 ? rtP .
Saturation8_LowerSat_kqwcbf42bl : rtB . jy3jw2aaps ) ) + ( rtDW . dzliwdnuer
== 1 ? rtP . Saturation8_UpperSat_pqzwkmp3ln : rtDW . dzliwdnuer == - 1 ? rtP
. Saturation8_LowerSat_cdlagjspwp : rtB . edf3zdrk1s ) ; m1bjkal5qi = ( rtB .
fsywf0hq1r + rtB . p2pplosrht ) - ( rtB . gbb5qnoror + rtB . pmnih4o00w ) ;
rtB . inhjzmnieg = ( ( rtP . Jr / rtP . Iyy * rtB . iwwwna3wpy * m1bjkal5qi +
rtP . L / rtP . Iyy * rtB . ih00fqirlm ) + ( rtP . Izz - rtP . Ixx ) / rtP .
Iyy * ( rtB . iwwwna3wpy * rtB . ckbpwhkuob ) ) - rtP . c_mi_y / rtP . Iyy *
rtB . ngjxi4neqa ; rtB . mj4up1ypwq = ( ( rtP . L / rtP . Ixx * rtB .
dtmggwb1du - rtP . Jr / rtP . Ixx * rtB . ngjxi4neqa * m1bjkal5qi ) + ( rtP .
Iyy - rtP . Izz ) / rtP . Ixx * ( rtB . ngjxi4neqa * rtB . ckbpwhkuob ) ) -
rtP . c_mi_x / rtP . Ixx * rtB . iwwwna3wpy ; rtB . j05trt3bmi = ( ( ( rtP .
Ixx - rtP . Iyy ) * ( rtB . iwwwna3wpy * rtB . ngjxi4neqa ) + rtB .
lbff3pxttp ) - rtP . c_mi_z * rtB . ckbpwhkuob ) * ( 1.0 / rtP . Izz ) ;
m1bjkal5qi = muDoubleScalarCos ( rtB . gf2awefhcg ) ; n4boyahi1w =
muDoubleScalarSin ( rtB . lab5qdszn2 ) ; langa1khtr = muDoubleScalarCos ( rtB
. hdgyrvx3s5 ) ; pvstwylnp5 = muDoubleScalarSin ( rtB . gf2awefhcg ) ;
nazzgpdb0w = muDoubleScalarSin ( rtB . hdgyrvx3s5 ) ; rtB . aa4upzmaz2 = (
m1bjkal5qi * n4boyahi1w * langa1khtr + pvstwylnp5 * nazzgpdb0w ) * rtB .
h3xuknejsc ; rtB . hdvk5b1vox = ( m1bjkal5qi * n4boyahi1w * nazzgpdb0w -
pvstwylnp5 * langa1khtr ) * rtB . h3xuknejsc ; rtB . a3xgmxzh1z = rtB .
h3xuknejsc * muDoubleScalarCos ( rtB . lab5qdszn2 ) * m1bjkal5qi ; rtB .
hfkq4552dr = ( rtB . hdvk5b1vox - rtP . co_y * rtB . bdfulujwps ) * ( 1.0 /
rtP . m ) ; rtB . ahbpwd431t = ( ( rtB . a3xgmxzh1z - rtP . m * rtP . ga ) -
rtP . co_z * rtB . cm13zakw1m ) * ( 1.0 / rtP . m ) ; rtB . nopngpsq2v = (
rtB . aa4upzmaz2 - rtP . co_x * rtB . cbd1jisbzs ) * ( 1.0 / rtP . m ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . lr2av0l5k0 = ( ssGetTaskTime ( rtS ,
1 ) >= rtP . V1_WP_Time ) ; rtB . c5045fm0r3 = rtP . V1_WP ; rtDW .
fe5ybxckcc = ( ssGetTaskTime ( rtS , 1 ) >= rtP . V2_WP_Time ) ; rtB .
mtq4y2sxeq = rtP . V2_WP ; } rtB . fup13t4pag = ( ( rtB . c5045fm0r3 +
jbgt4rvtwj [ 0 ] ) - phanqfafgx ) * ( 1.0 / rtP . Tau ) ; rtB . dupb4l5q02 =
( ( rtB . mtq4y2sxeq + jbgt4rvtwj [ 1 ] ) - iatoowdidd ) * ( 1.0 / rtP . Tau
) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . fpzzt015dv = (
ssGetTaskTime ( rtS , 1 ) >= rtP . V3_WP_Time ) ; rtB . lrrxi4kf0d = rtP .
V3_WP ; rtDW . cw5k42v0ig = ( ssGetTaskTime ( rtS , 1 ) >= rtP . V4_WP_Time )
; rtB . o00lpn04dj = rtP . V4_WP ; } rtB . nkbtbu2dxp = ( ( rtB . lrrxi4kf0d
+ jbgt4rvtwj [ 2 ] ) - mutm55wyft ) * ( 1.0 / rtP . Tau ) ; rtB . fcgqdb23w4
= ( ( rtB . o00lpn04dj + jbgt4rvtwj [ 3 ] ) - f32f3iks2g ) * ( 1.0 / rtP .
Tau ) ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { if ( rtX
. asmespsfba == rtP . Int_dx_UpperSat ) { switch ( rtDW . ov0tta154u ) { case
3 : if ( rtB . nopngpsq2v < 0.0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . ov0tta154u = 1 ;
} break ; case 1 : if ( rtB . nopngpsq2v >= 0.0 ) { rtDW . ov0tta154u = 3 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; default :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; if ( rtB . nopngpsq2v <
0.0 ) { rtDW . ov0tta154u = 1 ; } else { rtDW . ov0tta154u = 3 ; } break ; }
} else if ( rtX . asmespsfba == rtP . Int_dx_LowerSat ) { switch ( rtDW .
ov0tta154u ) { case 4 : if ( rtB . nopngpsq2v > 0.0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . ov0tta154u = 2 ;
} break ; case 2 : if ( rtB . nopngpsq2v <= 0.0 ) { rtDW . ov0tta154u = 4 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; default :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; if ( rtB . nopngpsq2v >
0.0 ) { rtDW . ov0tta154u = 2 ; } else { rtDW . ov0tta154u = 4 ; } break ; }
} else { rtDW . ov0tta154u = 0 ; } if ( rtX . hogci11ttn == rtP .
Int_dy_UpperSat ) { switch ( rtDW . cb5neuimdg ) { case 3 : if ( rtB .
hfkq4552dr < 0.0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
rtDW . cb5neuimdg = 1 ; } break ; case 1 : if ( rtB . hfkq4552dr >= 0.0 ) {
rtDW . cb5neuimdg = 3 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
} break ; default : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; if (
rtB . hfkq4552dr < 0.0 ) { rtDW . cb5neuimdg = 1 ; } else { rtDW . cb5neuimdg
= 3 ; } break ; } } else if ( rtX . hogci11ttn == rtP . Int_dy_LowerSat ) {
switch ( rtDW . cb5neuimdg ) { case 4 : if ( rtB . hfkq4552dr > 0.0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . cb5neuimdg = 2 ;
} break ; case 2 : if ( rtB . hfkq4552dr <= 0.0 ) { rtDW . cb5neuimdg = 4 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; default :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; if ( rtB . hfkq4552dr >
0.0 ) { rtDW . cb5neuimdg = 2 ; } else { rtDW . cb5neuimdg = 4 ; } break ; }
} else { rtDW . cb5neuimdg = 0 ; } if ( rtX . gbpfl4au0v == rtP .
Int_dz_UpperSat ) { switch ( rtDW . lhi0q2cqgq ) { case 3 : if ( rtB .
ahbpwd431t < 0.0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
rtDW . lhi0q2cqgq = 1 ; } break ; case 1 : if ( rtB . ahbpwd431t >= 0.0 ) {
rtDW . lhi0q2cqgq = 3 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
} break ; default : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; if (
rtB . ahbpwd431t < 0.0 ) { rtDW . lhi0q2cqgq = 1 ; } else { rtDW . lhi0q2cqgq
= 3 ; } break ; } } else if ( rtX . gbpfl4au0v == rtP . Int_dz_LowerSat ) {
switch ( rtDW . lhi0q2cqgq ) { case 4 : if ( rtB . ahbpwd431t > 0.0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . lhi0q2cqgq = 2 ;
} break ; case 2 : if ( rtB . ahbpwd431t <= 0.0 ) { rtDW . lhi0q2cqgq = 4 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; default :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; if ( rtB . ahbpwd431t >
0.0 ) { rtDW . lhi0q2cqgq = 2 ; } else { rtDW . lhi0q2cqgq = 4 ; } break ; }
} else { rtDW . lhi0q2cqgq = 0 ; } UNUSED_PARAMETER ( tid ) ; } void
MdlUpdateTID2 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { XDot * _rtXdot ; XDis * _rtXdis ; _rtXdis = ( (
XDis * ) ssGetContStateDisabled ( rtS ) ) ; _rtXdot = ( ( XDot * ) ssGetdX (
rtS ) ) ; _rtXdot -> me1tr5p43c = rtB . cbd1jisbzs ; if ( ( rtDW . ov0tta154u
!= 3 ) && ( rtDW . ov0tta154u != 4 ) ) { _rtXdot -> asmespsfba = rtB .
nopngpsq2v ; _rtXdis -> asmespsfba = false ; } else { _rtXdot -> asmespsfba =
0.0 ; if ( ( rtDW . ov0tta154u == 3 ) || ( rtDW . ov0tta154u == 4 ) ) {
_rtXdis -> asmespsfba = true ; } } _rtXdot -> lcvtgp0ytb = rtB . bdfulujwps ;
if ( ( rtDW . cb5neuimdg != 3 ) && ( rtDW . cb5neuimdg != 4 ) ) { _rtXdot ->
hogci11ttn = rtB . hfkq4552dr ; _rtXdis -> hogci11ttn = false ; } else {
_rtXdot -> hogci11ttn = 0.0 ; if ( ( rtDW . cb5neuimdg == 3 ) || ( rtDW .
cb5neuimdg == 4 ) ) { _rtXdis -> hogci11ttn = true ; } } _rtXdot ->
lhsedywedy = rtB . cm13zakw1m ; if ( ( rtDW . lhi0q2cqgq != 3 ) && ( rtDW .
lhi0q2cqgq != 4 ) ) { _rtXdot -> gbpfl4au0v = rtB . ahbpwd431t ; _rtXdis ->
gbpfl4au0v = false ; } else { _rtXdot -> gbpfl4au0v = 0.0 ; if ( ( rtDW .
lhi0q2cqgq == 3 ) || ( rtDW . lhi0q2cqgq == 4 ) ) { _rtXdis -> gbpfl4au0v =
true ; } } _rtXdot -> euin2nzgux = rtB . iwwwna3wpy ; _rtXdot -> bddgkhkyyx =
rtB . mj4up1ypwq ; _rtXdot -> egdchrcdaw = rtB . ngjxi4neqa ; _rtXdot ->
dvu0ruaigk = rtB . inhjzmnieg ; _rtXdot -> pdsbzmjy14 = rtB . ckbpwhkuob ;
_rtXdot -> fi1mhnzysp = rtB . j05trt3bmi ; _rtXdot -> ds224gxans = rtB .
fup13t4pag ; _rtXdot -> plo3bhoclo = rtB . dupb4l5q02 ; _rtXdot -> dowlczx0qg
= rtB . nkbtbu2dxp ; _rtXdot -> b2vvzrxihy = rtB . fcgqdb23w4 ; } void
MdlProjection ( void ) { } void MdlZeroCrossings ( void ) { boolean_T
anyStateSaturated ; ZCV * _rtZCSV ; _rtZCSV = ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) ; if ( ( rtDW . ov0tta154u == 1 ) && (
rtX . asmespsfba >= rtP . Int_dx_UpperSat ) ) { _rtZCSV -> c2qiv5lw23 = 0.0 ;
} else { _rtZCSV -> c2qiv5lw23 = rtX . asmespsfba - rtP . Int_dx_UpperSat ; }
if ( ( rtDW . ov0tta154u == 2 ) && ( rtX . asmespsfba <= rtP .
Int_dx_LowerSat ) ) { _rtZCSV -> ovfwzwg4lj = 0.0 ; } else { _rtZCSV ->
ovfwzwg4lj = rtX . asmespsfba - rtP . Int_dx_LowerSat ; } anyStateSaturated =
false ; if ( ( rtDW . ov0tta154u == 3 ) || ( rtDW . ov0tta154u == 4 ) ) {
anyStateSaturated = true ; } if ( anyStateSaturated ) { _rtZCSV -> fx5bhv4ool
= rtB . nopngpsq2v ; } else { _rtZCSV -> fx5bhv4ool = 0.0 ; } if ( ( rtDW .
cb5neuimdg == 1 ) && ( rtX . hogci11ttn >= rtP . Int_dy_UpperSat ) ) {
_rtZCSV -> bfumnpn5jw = 0.0 ; } else { _rtZCSV -> bfumnpn5jw = rtX .
hogci11ttn - rtP . Int_dy_UpperSat ; } if ( ( rtDW . cb5neuimdg == 2 ) && (
rtX . hogci11ttn <= rtP . Int_dy_LowerSat ) ) { _rtZCSV -> a04t4mrpyf = 0.0 ;
} else { _rtZCSV -> a04t4mrpyf = rtX . hogci11ttn - rtP . Int_dy_LowerSat ; }
anyStateSaturated = false ; if ( ( rtDW . cb5neuimdg == 3 ) || ( rtDW .
cb5neuimdg == 4 ) ) { anyStateSaturated = true ; } if ( anyStateSaturated ) {
_rtZCSV -> fbm5tdbmx3 = rtB . hfkq4552dr ; } else { _rtZCSV -> fbm5tdbmx3 =
0.0 ; } if ( ( rtDW . lhi0q2cqgq == 1 ) && ( rtX . gbpfl4au0v >= rtP .
Int_dz_UpperSat ) ) { _rtZCSV -> cqx55wijva = 0.0 ; } else { _rtZCSV ->
cqx55wijva = rtX . gbpfl4au0v - rtP . Int_dz_UpperSat ; } if ( ( rtDW .
lhi0q2cqgq == 2 ) && ( rtX . gbpfl4au0v <= rtP . Int_dz_LowerSat ) ) {
_rtZCSV -> njht3qtnj2 = 0.0 ; } else { _rtZCSV -> njht3qtnj2 = rtX .
gbpfl4au0v - rtP . Int_dz_LowerSat ; } anyStateSaturated = false ; if ( (
rtDW . lhi0q2cqgq == 3 ) || ( rtDW . lhi0q2cqgq == 4 ) ) { anyStateSaturated
= true ; } if ( anyStateSaturated ) { _rtZCSV -> js54inybsn = rtB .
ahbpwd431t ; } else { _rtZCSV -> js54inybsn = 0.0 ; } _rtZCSV -> mwmgwgac2m =
rtB . enmiubotat - rtP . Saturation4_UpperSat ; _rtZCSV -> ootjedbbwp = rtB .
enmiubotat - rtP . Saturation4_LowerSat ; _rtZCSV -> hkw4d2v5cl = rtB .
dp1mnubey0 - rtP . Saturation4_UpperSat_h0v3pz2g5e ; _rtZCSV -> bwoqln0buw =
rtB . dp1mnubey0 - rtP . Saturation4_LowerSat_gy3tebytcm ; _rtZCSV ->
cvw3xyvxv0 = rtB . icy11govsb - rtP . Saturation4_UpperSat_hzhi3ky35l ;
_rtZCSV -> orxyqo3kbq = rtB . icy11govsb - rtP .
Saturation4_LowerSat_jrjqdhefgm ; _rtZCSV -> apg40zy0ur = rtB . ctpkxivim5 -
rtP . Saturation4_UpperSat_e4islxddmg ; _rtZCSV -> mdvpz4ht2s = rtB .
ctpkxivim5 - rtP . Saturation4_LowerSat_eokc4vgvhv ; _rtZCSV -> matsaflkql =
rtB . lrhkveetji - rtP . Saturation3_UpperSat ; _rtZCSV -> a5ammaseyb = rtB .
lrhkveetji - rtP . Saturation3_LowerSat ; _rtZCSV -> kl55cfgc5v = rtB .
ae4dv4izel - rtP . Saturation3_UpperSat_bsq3lnifj4 ; _rtZCSV -> cxaxaqpvk1 =
rtB . ae4dv4izel - rtP . Saturation3_LowerSat_ikv1cw5k2t ; _rtZCSV ->
h3eugfb11g = rtB . m2u5tpfjkr - rtP . Saturation3_UpperSat_etj5umigle ;
_rtZCSV -> fm51eotxzd = rtB . m2u5tpfjkr - rtP .
Saturation3_LowerSat_czlw4uugdp ; _rtZCSV -> eriapmzoos = rtB . hc302at03e -
rtP . Saturation3_UpperSat_ibvqhf1uwi ; _rtZCSV -> kcquxc3fhs = rtB .
hc302at03e - rtP . Saturation3_LowerSat_itkhn4lksx ; _rtZCSV -> jhrfpbclk2 =
rtB . lpvfihydgk - rtP . Saturation8_UpperSat ; _rtZCSV -> ohhko35dqb = rtB .
lpvfihydgk - rtP . Saturation8_LowerSat ; _rtZCSV -> j5htssfygx = rtB .
p0trcmhycu - rtP . Saturation8_UpperSat_ivnhhtjl1t ; _rtZCSV -> k41ng34vnw =
rtB . p0trcmhycu - rtP . Saturation8_LowerSat_m0gx2ayxie ; _rtZCSV ->
eal1ovl3wx = rtB . jy3jw2aaps - rtP . Saturation8_UpperSat_jtahv23i3q ;
_rtZCSV -> fafj0nsext = rtB . jy3jw2aaps - rtP .
Saturation8_LowerSat_kqwcbf42bl ; _rtZCSV -> pgaghx1zi3 = rtB . edf3zdrk1s -
rtP . Saturation8_UpperSat_pqzwkmp3ln ; _rtZCSV -> gjjp1oa5mq = rtB .
edf3zdrk1s - rtP . Saturation8_LowerSat_cdlagjspwp ; _rtZCSV -> fmm1imvjp0 =
ssGetT ( rtS ) - rtP . V1_WP_Time ; _rtZCSV -> mogcdxa1md = ssGetT ( rtS ) -
rtP . V2_WP_Time ; _rtZCSV -> ppwtxjcrib = ssGetT ( rtS ) - rtP . V3_WP_Time
; _rtZCSV -> piavkocw3n = ssGetT ( rtS ) - rtP . V4_WP_Time ; } void
MdlTerminate ( void ) { if ( rt_slioCatalogue ( ) != ( NULL ) ) { void * *
slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; rtwSaveDatasetsToMatFile (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 16 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
2 ) ; ssSetNumBlocks ( rtS , 126 ) ; ssSetNumBlockIO ( rtS , 53 ) ;
ssSetNumBlockParams ( rtS , 148 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 2736249441U ) ;
ssSetChecksumVal ( rtS , 1 , 680407911U ) ; ssSetChecksumVal ( rtS , 2 ,
4145678026U ) ; ssSetChecksumVal ( rtS , 3 , 3505881777U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo
; ( void ) memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void )
memset ( ( char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; { rtB . le5ctscxhr = 0.0 ; rtB . cbd1jisbzs = 0.0 ;
rtB . mtss1t4ese = 0.0 ; rtB . bdfulujwps = 0.0 ; rtB . ktattksosw = 0.0 ;
rtB . cm13zakw1m = 0.0 ; rtB . gf2awefhcg = 0.0 ; rtB . iwwwna3wpy = 0.0 ;
rtB . lab5qdszn2 = 0.0 ; rtB . ngjxi4neqa = 0.0 ; rtB . hdgyrvx3s5 = 0.0 ;
rtB . ckbpwhkuob = 0.0 ; rtB . enmiubotat = 0.0 ; rtB . gbb5qnoror = 0.0 ;
rtB . dp1mnubey0 = 0.0 ; rtB . fsywf0hq1r = 0.0 ; rtB . icy11govsb = 0.0 ;
rtB . pmnih4o00w = 0.0 ; rtB . ctpkxivim5 = 0.0 ; rtB . p2pplosrht = 0.0 ;
rtB . lrhkveetji = 0.0 ; rtB . kp5mv2rlo4 = 0.0 ; rtB . ae4dv4izel = 0.0 ;
rtB . bvbonmsp00 = 0.0 ; rtB . m2u5tpfjkr = 0.0 ; rtB . ktszyhjg23 = 0.0 ;
rtB . hc302at03e = 0.0 ; rtB . jnardyy1id = 0.0 ; rtB . h3xuknejsc = 0.0 ;
rtB . dtmggwb1du = 0.0 ; rtB . ih00fqirlm = 0.0 ; rtB . lpvfihydgk = 0.0 ;
rtB . p0trcmhycu = 0.0 ; rtB . jy3jw2aaps = 0.0 ; rtB . edf3zdrk1s = 0.0 ;
rtB . lbff3pxttp = 0.0 ; rtB . inhjzmnieg = 0.0 ; rtB . mj4up1ypwq = 0.0 ;
rtB . j05trt3bmi = 0.0 ; rtB . aa4upzmaz2 = 0.0 ; rtB . hdvk5b1vox = 0.0 ;
rtB . a3xgmxzh1z = 0.0 ; rtB . hfkq4552dr = 0.0 ; rtB . ahbpwd431t = 0.0 ;
rtB . nopngpsq2v = 0.0 ; rtB . c5045fm0r3 = 0.0 ; rtB . fup13t4pag = 0.0 ;
rtB . mtq4y2sxeq = 0.0 ; rtB . dupb4l5q02 = 0.0 ; rtB . lrrxi4kf0d = 0.0 ;
rtB . nkbtbu2dxp = 0.0 ; rtB . o00lpn04dj = 0.0 ; rtB . fcgqdb23w4 = 0.0 ; }
} ssSetDefaultParam ( rtS , ( real_T * ) & rtP ) ; { real_T * x = ( real_T *
) & rtX ; ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void * ) x , 0 ,
sizeof ( X ) ) ; } { void * dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS
, dwork ) ; ( void ) memset ( dwork , 0 , sizeof ( DW ) ) ; } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 14 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; }
just_the_dynamics1_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive
( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "just_the_dynamics1" ) ;
ssSetPath ( rtS , "just_the_dynamics1" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 100.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = NULL ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 } ; static int_T rt_LoggedStateDimensions [ ] = { 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 } ; static BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = {
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 } ; static const char_T * rt_LoggedStateLabels [ ] = {
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" } ; static const char_T * rt_LoggedStateBlockNames [ ] =
{ "just_the_dynamics1/quadmdl/Body dynamics/gibanje u prostoru/Int_x" ,
"just_the_dynamics1/quadmdl/Body dynamics/gibanje u prostoru/Int_dx" ,
"just_the_dynamics1/quadmdl/Body dynamics/gibanje u prostoru/Int_y" ,
"just_the_dynamics1/quadmdl/Body dynamics/gibanje u prostoru/Int_dy" ,
"just_the_dynamics1/quadmdl/Body dynamics/gibanje u prostoru/Int_z" ,
"just_the_dynamics1/quadmdl/Body dynamics/gibanje u prostoru/Int_dz" ,
"just_the_dynamics1/quadmdl/Body dynamics/Roll Stability/int_phi" ,
"just_the_dynamics1/quadmdl/Body dynamics/Roll Stability/int_dphi" ,
"just_the_dynamics1/quadmdl/Body dynamics/Pitch Stability/Int_theta" ,
"just_the_dynamics1/quadmdl/Body dynamics/Pitch Stability/Int_dtheta" ,
"just_the_dynamics1/quadmdl/Body dynamics/Yaw Stability/Int_psi" ,
"just_the_dynamics1/quadmdl/Body dynamics/Yaw Stability/Int_dPsi" ,
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor1/Integrator" ,
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor2/Integrator" ,
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor3/Integrator" ,
"just_the_dynamics1/quadmdl/Motor dynamics/Motor//Rotor4/Integrator" } ;
static const char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" } ; static boolean_T
rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 } ; static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [
] = { { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static
RTWLogSignalInfo rt_LoggedStateSignalInfo = { 16 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , ( NULL ) , { rt_LoggedStateLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { rt_LoggedStateBlockNames } , {
rt_LoggedStateNames } , rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert
} ; static void * rt_LoggedStateSignalPtrs [ 16 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . me1tr5p43c ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . asmespsfba ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . lcvtgp0ytb ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . hogci11ttn ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . lhsedywedy ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . gbpfl4au0v ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . euin2nzgux ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . bddgkhkyyx ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . egdchrcdaw ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . dvu0ruaigk ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . pdsbzmjy14 ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . fi1mhnzysp ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . ds224gxans ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . plo3bhoclo ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . dowlczx0qg ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . b2vvzrxihy ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "tmp_raccel_xout" ) ; rtliSetLogXFinal (
ssGetRTWLogInfo ( rtS ) , "xFinal" ) ; rtliSetLogVarNameModifier (
ssGetRTWLogInfo ( rtS ) , "none" ) ; rtliSetLogFormat ( ssGetRTWLogInfo ( rtS
) , 2 ) ; rtliSetLogMaxRows ( ssGetRTWLogInfo ( rtS ) , 1000 ) ;
rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS ) , 1 ) ; rtliSetLogY (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo ( ssGetRTWLogInfo (
rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL
) ) ; } { static struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS ,
& statesInfo2 ) ; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 16 ] ; static
real_T absTol [ 16 ] = { 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6
, 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 } ; static uint8_T absTolControl [ 16 ] = { 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U } ; static
uint8_T zcAttributes [ 37 ] = { ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL )
, ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , (
ZC_EVENT_ALL_UP ) } ; static ssNonContDerivSigInfo nonContDerivSigInfo [ 4 ]
= { { 1 * sizeof ( real_T ) , ( char * ) ( & rtB . o00lpn04dj ) , ( NULL ) }
, { 1 * sizeof ( real_T ) , ( char * ) ( & rtB . lrrxi4kf0d ) , ( NULL ) } ,
{ 1 * sizeof ( real_T ) , ( char * ) ( & rtB . mtq4y2sxeq ) , ( NULL ) } , {
1 * sizeof ( real_T ) , ( char * ) ( & rtB . c5045fm0r3 ) , ( NULL ) } } ;
ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ;
ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , - 1 ) ;
ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 2.0 ) ;
ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 0 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 4 ) ; ssSetNonContDerivSigInfos ( rtS ,
nonContDerivSigInfo ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "ode45" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector (
rtS , absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetSolverStateProjection ( rtS , 0 ) ; ssSetSolverMassMatrixType ( rtS , (
ssMatrixType ) 0 ) ; ssSetSolverMassMatrixNzMax ( rtS , 0 ) ;
ssSetModelOutputs ( rtS , MdlOutputs ) ; ssSetModelLogData ( rtS ,
rt_UpdateTXYLogVars ) ; ssSetModelLogDataIfInInterval ( rtS ,
rt_UpdateTXXFYLogVars ) ; ssSetModelUpdate ( rtS , MdlUpdate ) ;
ssSetModelDerivatives ( rtS , MdlDerivatives ) ; ssSetSolverZcSignalAttrib (
rtS , zcAttributes ) ; ssSetSolverNumZcSignals ( rtS , 37 ) ;
ssSetModelZeroCrossings ( rtS , MdlZeroCrossings ) ;
ssSetSolverConsecutiveZCsStepRelTol ( rtS , 2.8421709430404007E-13 ) ;
ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ; ssSetSolverConsecutiveZCsError
( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic ( rtS , 1 ) ;
ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ; ssSetSolverMaxConsecutiveMinStep
( rtS , 1 ) ; ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid (
rtS , INT_MIN ) ; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset (
rtS ) ; ssSetNumNonsampledZCs ( rtS , 37 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 2736249441U ) ; ssSetChecksumVal ( rtS , 1 ,
680407911U ) ; ssSetChecksumVal ( rtS , 2 , 4145678026U ) ; ssSetChecksumVal
( rtS , 3 , 3505881777U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 1 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; } return
rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { UNUSED_PARAMETER ( tid ) ; }

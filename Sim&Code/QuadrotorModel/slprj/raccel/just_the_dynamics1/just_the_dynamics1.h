#include "__cf_just_the_dynamics1.h"
#ifndef RTW_HEADER_just_the_dynamics1_h_
#define RTW_HEADER_just_the_dynamics1_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef just_the_dynamics1_COMMON_INCLUDES_
#define just_the_dynamics1_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "just_the_dynamics1_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME just_the_dynamics1
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (53) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (16)   
#elif NCSTATES != 16
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T le5ctscxhr ; real_T cbd1jisbzs ; real_T mtss1t4ese ;
real_T bdfulujwps ; real_T ktattksosw ; real_T cm13zakw1m ; real_T gf2awefhcg
; real_T iwwwna3wpy ; real_T lab5qdszn2 ; real_T ngjxi4neqa ; real_T
hdgyrvx3s5 ; real_T ckbpwhkuob ; real_T enmiubotat ; real_T gbb5qnoror ;
real_T dp1mnubey0 ; real_T fsywf0hq1r ; real_T icy11govsb ; real_T pmnih4o00w
; real_T ctpkxivim5 ; real_T p2pplosrht ; real_T lrhkveetji ; real_T
kp5mv2rlo4 ; real_T ae4dv4izel ; real_T bvbonmsp00 ; real_T m2u5tpfjkr ;
real_T ktszyhjg23 ; real_T hc302at03e ; real_T jnardyy1id ; real_T h3xuknejsc
; real_T dtmggwb1du ; real_T ih00fqirlm ; real_T lpvfihydgk ; real_T
p0trcmhycu ; real_T jy3jw2aaps ; real_T edf3zdrk1s ; real_T lbff3pxttp ;
real_T inhjzmnieg ; real_T mj4up1ypwq ; real_T j05trt3bmi ; real_T aa4upzmaz2
; real_T hdvk5b1vox ; real_T a3xgmxzh1z ; real_T hfkq4552dr ; real_T
ahbpwd431t ; real_T nopngpsq2v ; real_T c5045fm0r3 ; real_T fup13t4pag ;
real_T mtq4y2sxeq ; real_T dupb4l5q02 ; real_T lrrxi4kf0d ; real_T nkbtbu2dxp
; real_T o00lpn04dj ; real_T fcgqdb23w4 ; } B ; typedef struct { struct {
void * LoggedData [ 4 ] ; } aovbeqswtf ; struct { void * LoggedData ; }
ptasfmopxm ; struct { void * LoggedData ; } hxty2dhbhw ; struct { void *
LoggedData ; } jq3ht4ldwz ; struct { void * LoggedData ; } mnwetukxha ;
struct { void * LoggedData ; } g2524xom2x ; struct { void * LoggedData ; }
n4tojbgvnq ; struct { void * LoggedData ; } hmn01bl5et ; struct { void *
LoggedData ; } nax0puf5q5 ; struct { void * LoggedData ; } ijh41x30am ;
struct { void * LoggedData [ 4 ] ; } k0dxhvpog3 ; int_T ov0tta154u ; int_T
cb5neuimdg ; int_T lhi0q2cqgq ; int_T ldjqojcec1 ; int_T ptr2yrursc ; int_T
hmddz0hhbx ; int_T dhdcay24db ; int_T d3wh4cztop ; int_T p4xyyqaszr ; int_T
owy3xymafw ; int_T mgrscpln2p ; int_T cxmnq1njjp ; int_T dtyta1szku ; int_T
kfd22jojmu ; int_T dzliwdnuer ; int_T lr2av0l5k0 ; int_T fe5ybxckcc ; int_T
fpzzt015dv ; int_T cw5k42v0ig ; } DW ; typedef struct { real_T me1tr5p43c ;
real_T asmespsfba ; real_T lcvtgp0ytb ; real_T hogci11ttn ; real_T lhsedywedy
; real_T gbpfl4au0v ; real_T euin2nzgux ; real_T bddgkhkyyx ; real_T
egdchrcdaw ; real_T dvu0ruaigk ; real_T pdsbzmjy14 ; real_T fi1mhnzysp ;
real_T ds224gxans ; real_T plo3bhoclo ; real_T dowlczx0qg ; real_T b2vvzrxihy
; } X ; typedef struct { real_T me1tr5p43c ; real_T asmespsfba ; real_T
lcvtgp0ytb ; real_T hogci11ttn ; real_T lhsedywedy ; real_T gbpfl4au0v ;
real_T euin2nzgux ; real_T bddgkhkyyx ; real_T egdchrcdaw ; real_T dvu0ruaigk
; real_T pdsbzmjy14 ; real_T fi1mhnzysp ; real_T ds224gxans ; real_T
plo3bhoclo ; real_T dowlczx0qg ; real_T b2vvzrxihy ; } XDot ; typedef struct
{ boolean_T me1tr5p43c ; boolean_T asmespsfba ; boolean_T lcvtgp0ytb ;
boolean_T hogci11ttn ; boolean_T lhsedywedy ; boolean_T gbpfl4au0v ;
boolean_T euin2nzgux ; boolean_T bddgkhkyyx ; boolean_T egdchrcdaw ;
boolean_T dvu0ruaigk ; boolean_T pdsbzmjy14 ; boolean_T fi1mhnzysp ;
boolean_T ds224gxans ; boolean_T plo3bhoclo ; boolean_T dowlczx0qg ;
boolean_T b2vvzrxihy ; } XDis ; typedef struct { real_T me1tr5p43c ; real_T
asmespsfba ; real_T lcvtgp0ytb ; real_T hogci11ttn ; real_T lhsedywedy ;
real_T gbpfl4au0v ; real_T euin2nzgux ; real_T bddgkhkyyx ; real_T egdchrcdaw
; real_T dvu0ruaigk ; real_T pdsbzmjy14 ; real_T fi1mhnzysp ; real_T
ds224gxans ; real_T plo3bhoclo ; real_T dowlczx0qg ; real_T b2vvzrxihy ; }
CStateAbsTol ; typedef struct { real_T c2qiv5lw23 ; real_T ovfwzwg4lj ;
real_T fx5bhv4ool ; real_T bfumnpn5jw ; real_T a04t4mrpyf ; real_T fbm5tdbmx3
; real_T cqx55wijva ; real_T njht3qtnj2 ; real_T js54inybsn ; real_T
mwmgwgac2m ; real_T ootjedbbwp ; real_T hkw4d2v5cl ; real_T bwoqln0buw ;
real_T cvw3xyvxv0 ; real_T orxyqo3kbq ; real_T apg40zy0ur ; real_T mdvpz4ht2s
; real_T matsaflkql ; real_T a5ammaseyb ; real_T kl55cfgc5v ; real_T
cxaxaqpvk1 ; real_T h3eugfb11g ; real_T fm51eotxzd ; real_T eriapmzoos ;
real_T kcquxc3fhs ; real_T jhrfpbclk2 ; real_T ohhko35dqb ; real_T j5htssfygx
; real_T k41ng34vnw ; real_T eal1ovl3wx ; real_T fafj0nsext ; real_T
pgaghx1zi3 ; real_T gjjp1oa5mq ; real_T fmm1imvjp0 ; real_T mogcdxa1md ;
real_T ppwtxjcrib ; real_T piavkocw3n ; } ZCV ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T Ixx ;
real_T Iyy ; real_T Izz ; real_T Jr ; real_T K [ 64 ] ; real_T L ; real_T Tau
; real_T V1_WP ; real_T V2_WP ; real_T V3_WP ; real_T V4_WP ; real_T c_mi_x ;
real_T c_mi_y ; real_T c_mi_z ; real_T co_x ; real_T co_y ; real_T co_z ;
real_T d_omega_R10 ; real_T d_omega_R20 ; real_T d_omega_R30 ; real_T
d_omega_R40 ; real_T dfi_0 ; real_T dpsi_0 ; real_T dtheta_0 ; real_T dx_0 ;
real_T dy_0 ; real_T dz_0 ; real_T fi_0 ; real_T ga ; real_T m ; real_T psi_0
; real_T stateref [ 16 ] ; real_T theta_0 ; real_T x_0 ; real_T y_0 ; real_T
z_0 ; real_T Int_dx_UpperSat ; real_T Int_dx_LowerSat ; real_T
Int_dy_UpperSat ; real_T Int_dy_LowerSat ; real_T Int_dz_UpperSat ; real_T
Int_dz_LowerSat ; real_T Saturation4_UpperSat ; real_T Saturation4_LowerSat ;
real_T Saturation4_UpperSat_h0v3pz2g5e ; real_T
Saturation4_LowerSat_gy3tebytcm ; real_T Saturation4_UpperSat_hzhi3ky35l ;
real_T Saturation4_LowerSat_jrjqdhefgm ; real_T
Saturation4_UpperSat_e4islxddmg ; real_T Saturation4_LowerSat_eokc4vgvhv ;
real_T Saturation3_UpperSat ; real_T Saturation3_LowerSat ; real_T
Saturation3_UpperSat_bsq3lnifj4 ; real_T Saturation3_LowerSat_ikv1cw5k2t ;
real_T Saturation3_UpperSat_etj5umigle ; real_T
Saturation3_LowerSat_czlw4uugdp ; real_T Saturation3_UpperSat_ibvqhf1uwi ;
real_T Saturation3_LowerSat_itkhn4lksx ; real_T Saturation8_UpperSat ; real_T
Saturation8_LowerSat ; real_T Saturation8_UpperSat_ivnhhtjl1t ; real_T
Saturation8_LowerSat_m0gx2ayxie ; real_T Saturation8_UpperSat_jtahv23i3q ;
real_T Saturation8_LowerSat_kqwcbf42bl ; real_T
Saturation8_UpperSat_pqzwkmp3ln ; real_T Saturation8_LowerSat_cdlagjspwp ;
real_T V1_WP_Time ; real_T V2_WP_Time ; real_T V3_WP_Time ; real_T V4_WP_Time
; } ; extern const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern
X rtX ; extern DW rtDW ; extern P rtP ; extern const
rtwCAPI_ModelMappingStaticInfo * just_the_dynamics1_GetCAPIStaticMap ( void )
; extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
size_t gblCurrentSFcnIdx ; extern DataMapInfo * rt_dataMapInfoPtr ; extern
rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid )
; void MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T
tid ) ; void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( void
) ;
#endif

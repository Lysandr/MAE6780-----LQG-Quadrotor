#include "__cf_just_the_dynamics1.h"
#ifndef RTW_HEADER_just_the_dynamics1_cap_host_h_
#define RTW_HEADER_just_the_dynamics1_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
just_the_dynamics1_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void just_the_dynamics1_host_InitializeDataMapInfo (
just_the_dynamics1_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif

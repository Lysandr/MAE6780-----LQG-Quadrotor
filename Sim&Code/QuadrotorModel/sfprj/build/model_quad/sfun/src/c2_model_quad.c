/* Include files */
#include "model_quad_sfun.h"
#include "c2_model_quad.h"
#define CHARTINSTANCE_CHARTNUMBER       (chartInstance.chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER    (chartInstance.instanceNumber)
#include "model_quad_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c2_IN_NO_ACTIVE_CHILD           (0)

/* Variable Declarations */

/* Variable Definitions */
static SFc2_model_quadInstanceStruct chartInstance;

/* Function Declarations */
static void initialize_c2_model_quad(void);
static void initialize_params_c2_model_quad(void);
static void enable_c2_model_quad(void);
static void disable_c2_model_quad(void);
static void finalize_c2_model_quad(void);
static void sf_c2_model_quad(void);
static real_T *c2_T(void);
static real_T *c2_Tx(void);
static real_T *c2_phi(void);
static real_T *c2_theta(void);
static real_T *c2_psi(void);
static real_T *c2_Ty(void);
static real_T *c2_Tz(void);
static void init_dsm_address_info(void);
static void sf_save_state_c2_model_quad(FILE *c2_file);
static void sf_load_state_c2_model_quad(FILE *c2_file);

/* Function Definitions */
static void initialize_c2_model_quad(void)
{
  chartInstance.c2_is_active_c2_model_quad = 0U;
}

static void initialize_params_c2_model_quad(void)
{
}

static void enable_c2_model_quad(void)
{
}

static void disable_c2_model_quad(void)
{
}

static void finalize_c2_model_quad(void)
{
}

static void sf_c2_model_quad(void)
{
  uint8_T c2_previousEvent;
  real_T c2_b_T;
  real_T c2_b_phi;
  real_T c2_b_theta;
  real_T c2_b_psi;
  real_T c2_Te[3];
  real_T c2_R4[3][3];
  real_T c2_R3[3][3];
  real_T c2_R2[3][3];
  real_T c2_R1[3][3];
  real_T c2_b_Tz;
  real_T c2_b_Ty;
  real_T c2_b_Tx;
  real_T c2_x;
  real_T c2_em_d0;
  real_T c2_b_x;
  real_T c2_em_d1;
  real_T c2_c_x;
  real_T c2_em_d2;
  real_T c2_d_x;
  real_T c2_em_d3;
  real_T c2_em_dv0[3][1];
  real_T c2_em_dv1[3][1];
  int32_T c2_em_i0;
  static real_T c2_em_dv2[3][1] = { { 1.0 },
    { 0.0 },
    { 0.0 } };
  int32_T c2_em_i1;
  int32_T c2_em_i2;
  real_T c2_e_x;
  real_T c2_em_d4;
  real_T c2_f_x;
  real_T c2_em_d5;
  real_T c2_g_x;
  real_T c2_em_d6;
  real_T c2_h_x;
  real_T c2_em_d7;
  real_T c2_em_dv3[3][1];
  real_T c2_em_dv4[3][1];
  int32_T c2_em_i3;
  int32_T c2_em_i4;
  static real_T c2_em_dv5[3][1] = { { 0.0 },
    { 1.0 },
    { 0.0 } };
  int32_T c2_em_i5;
  real_T c2_i_x;
  real_T c2_em_d8;
  real_T c2_j_x;
  real_T c2_em_d9;
  real_T c2_k_x;
  real_T c2_em_d10;
  real_T c2_l_x;
  real_T c2_em_d11;
  real_T c2_em_dv6[3][1];
  real_T c2_em_dv7[3][1];
  int32_T c2_em_i6;
  int32_T c2_em_i7;
  int32_T c2_em_i8;
  static real_T c2_em_dv8[3][1] = { { 0.0 },
    { 0.0 },
    { 1.0 } };
  int32_T c2_em_i9;
  int32_T c2_em_i10;
  static real_T c2_em_dv9[3][3] = { { 1.0, 0.0, 0.0 },
    { 0.0, -1.0, 0.0 },
    { 0.0, 0.0, -1.0 } };
  int32_T c2_em_i11;
  int32_T c2_em_i12;
  real_T c2_b_R3[3][3];
  int32_T c2_em_i13;
  int32_T c2_em_i14;
  int32_T c2_em_i15;
  real_T c2_c_R3[3][3];
  int32_T c2_em_i16;
  real_T c2_em_dv10[3][1];
  int32_T c2_em_i17;
  real_T c2_em_dv11[3];
  int32_T c2_em_i18;
  int32_T c2_em_i19;
  _sfTime_ = (real_T)ssGetT(chartInstance.S);
  _SFD_DATA_RANGE_CHECK(*c2_T(), 4U);
  _SFD_DATA_RANGE_CHECK(*c2_Tx(), 3U);
  _SFD_DATA_RANGE_CHECK(*c2_phi(), 5U);
  _SFD_DATA_RANGE_CHECK(*c2_theta(), 1U);
  _SFD_DATA_RANGE_CHECK(*c2_psi(), 0U);
  _SFD_DATA_RANGE_CHECK(*c2_Ty(), 2U);
  _SFD_DATA_RANGE_CHECK(*c2_Tz(), 6U);
  c2_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,0);
  c2_b_T = *c2_T();
  c2_b_phi = *c2_phi();
  c2_b_theta = *c2_theta();
  c2_b_psi = *c2_psi();
  sf_debug_push_symbol_scope(12U, 0U);
  sf_debug_symbol_scope_add_symbol("Te", 0, 1U, 3U, 0U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c2_Te, 0);
  sf_debug_symbol_scope_add_symbol("R4", 0, 2U, 3U, 3U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c2_R4, 0);
  sf_debug_symbol_scope_add_symbol("R3", 0, 2U, 3U, 3U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c2_R3, 0);
  sf_debug_symbol_scope_add_symbol("R2", 0, 2U, 3U, 3U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c2_R2, 0);
  sf_debug_symbol_scope_add_symbol("R1", 0, 2U, 3U, 3U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c2_R1, 0);
  sf_debug_symbol_scope_add_symbol("Tz", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 0, &c2_b_Tz, 0);
  sf_debug_symbol_scope_add_symbol("Ty", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 0, &c2_b_Ty, 0);
  sf_debug_symbol_scope_add_symbol("Tx", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 0, &c2_b_Tx, 0);
  sf_debug_symbol_scope_add_symbol("psi", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 0, &c2_b_psi, 0);
  sf_debug_symbol_scope_add_symbol("theta", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U,
   0, 0U, 0, &c2_b_theta, 0);
  sf_debug_symbol_scope_add_symbol("phi", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 0, &c2_b_phi, 0);
  sf_debug_symbol_scope_add_symbol("T", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 0, &c2_b_T, 0);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,3);
  c2_x = c2_b_phi;
  c2_em_d0 = cos(c2_x);
  c2_b_x = c2_b_phi;
  c2_em_d1 = sin(c2_b_x);
  c2_c_x = c2_b_phi;
  c2_em_d2 = sin(c2_c_x);
  c2_d_x = c2_b_phi;
  c2_em_d3 = cos(c2_d_x);
  c2_em_dv0[0][0] = 0.0;
  c2_em_dv0[1][0] = c2_em_d0;
  c2_em_dv0[2][0] = -c2_em_d1;
  c2_em_dv1[0][0] = 0.0;
  c2_em_dv1[1][0] = c2_em_d2;
  c2_em_dv1[2][0] = c2_em_d3;
  for(c2_em_i0 = 0; c2_em_i0 < 3; c2_em_i0 = c2_em_i0 + 1) {
    c2_R1[c2_em_i0][0] = c2_em_dv2[c2_em_i0][0];
  }
  for(c2_em_i1 = 0; c2_em_i1 < 3; c2_em_i1 = c2_em_i1 + 1) {
    c2_R1[c2_em_i1][1] = c2_em_dv0[c2_em_i1][0];
  }
  for(c2_em_i2 = 0; c2_em_i2 < 3; c2_em_i2 = c2_em_i2 + 1) {
    c2_R1[c2_em_i2][2] = c2_em_dv1[c2_em_i2][0];
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,7);
  c2_e_x = c2_b_theta;
  c2_em_d4 = cos(c2_e_x);
  c2_f_x = c2_b_theta;
  c2_em_d5 = sin(c2_f_x);
  c2_g_x = c2_b_theta;
  c2_em_d6 = sin(c2_g_x);
  c2_h_x = c2_b_theta;
  c2_em_d7 = cos(c2_h_x);
  c2_em_dv3[0][0] = c2_em_d4;
  c2_em_dv3[1][0] = 0.0;
  c2_em_dv3[2][0] = c2_em_d5;
  c2_em_dv4[0][0] = -c2_em_d6;
  c2_em_dv4[1][0] = 0.0;
  c2_em_dv4[2][0] = c2_em_d7;
  for(c2_em_i3 = 0; c2_em_i3 < 3; c2_em_i3 = c2_em_i3 + 1) {
    c2_R2[c2_em_i3][0] = c2_em_dv3[c2_em_i3][0];
  }
  for(c2_em_i4 = 0; c2_em_i4 < 3; c2_em_i4 = c2_em_i4 + 1) {
    c2_R2[c2_em_i4][1] = c2_em_dv5[c2_em_i4][0];
  }
  for(c2_em_i5 = 0; c2_em_i5 < 3; c2_em_i5 = c2_em_i5 + 1) {
    c2_R2[c2_em_i5][2] = c2_em_dv4[c2_em_i5][0];
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,11);
  c2_i_x = c2_b_psi;
  c2_em_d8 = cos(c2_i_x);
  c2_j_x = c2_b_psi;
  c2_em_d9 = sin(c2_j_x);
  c2_k_x = c2_b_psi;
  c2_em_d10 = sin(c2_k_x);
  c2_l_x = c2_b_psi;
  c2_em_d11 = cos(c2_l_x);
  c2_em_dv6[0][0] = c2_em_d8;
  c2_em_dv6[1][0] = -c2_em_d9;
  c2_em_dv6[2][0] = 0.0;
  c2_em_dv7[0][0] = c2_em_d10;
  c2_em_dv7[1][0] = c2_em_d11;
  c2_em_dv7[2][0] = 0.0;
  for(c2_em_i6 = 0; c2_em_i6 < 3; c2_em_i6 = c2_em_i6 + 1) {
    c2_R3[c2_em_i6][0] = c2_em_dv6[c2_em_i6][0];
  }
  for(c2_em_i7 = 0; c2_em_i7 < 3; c2_em_i7 = c2_em_i7 + 1) {
    c2_R3[c2_em_i7][1] = c2_em_dv7[c2_em_i7][0];
  }
  for(c2_em_i8 = 0; c2_em_i8 < 3; c2_em_i8 = c2_em_i8 + 1) {
    c2_R3[c2_em_i8][2] = c2_em_dv8[c2_em_i8][0];
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,15);
  for(c2_em_i9 = 0; c2_em_i9 < 3; c2_em_i9 = c2_em_i9 + 1) {
    for(c2_em_i10 = 0; c2_em_i10 < 3; c2_em_i10 = c2_em_i10 + 1) {
      c2_R4[c2_em_i9][c2_em_i10] = c2_em_dv9[c2_em_i9][c2_em_i10];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,19);
  for(c2_em_i11 = 0; c2_em_i11 < 3; c2_em_i11 = c2_em_i11 + 1) {
    for(c2_em_i12 = 0; c2_em_i12 < 3; c2_em_i12 = c2_em_i12 + 1) {
      c2_b_R3[c2_em_i12][c2_em_i11] = 0.0;
      for(c2_em_i13 = 0; c2_em_i13 < 3; c2_em_i13 = c2_em_i13 + 1) {
        c2_b_R3[c2_em_i12][c2_em_i11] = c2_b_R3[c2_em_i12][c2_em_i11] +
          c2_R3[c2_em_i13][c2_em_i11] * c2_R2[c2_em_i12][c2_em_i13];
      }
    }
  }
  for(c2_em_i14 = 0; c2_em_i14 < 3; c2_em_i14 = c2_em_i14 + 1) {
    for(c2_em_i15 = 0; c2_em_i15 < 3; c2_em_i15 = c2_em_i15 + 1) {
      c2_c_R3[c2_em_i15][c2_em_i14] = 0.0;
      for(c2_em_i16 = 0; c2_em_i16 < 3; c2_em_i16 = c2_em_i16 + 1) {
        c2_c_R3[c2_em_i15][c2_em_i14] = c2_c_R3[c2_em_i15][c2_em_i14] +
          c2_b_R3[c2_em_i16][c2_em_i14] * c2_R1[c2_em_i15][c2_em_i16];
      }
    }
  }
  c2_em_dv10[0][0] = 0.0;
  c2_em_dv10[1][0] = 0.0;
  c2_em_dv10[2][0] = c2_b_T;
  for(c2_em_i17 = 0; c2_em_i17 < 3; c2_em_i17 = c2_em_i17 + 1) {
    c2_em_dv11[c2_em_i17] = c2_em_dv10[c2_em_i17][0];
  }
  for(c2_em_i18 = 0; c2_em_i18 < 3; c2_em_i18 = c2_em_i18 + 1) {
    c2_Te[c2_em_i18] = 0.0;
    for(c2_em_i19 = 0; c2_em_i19 < 3; c2_em_i19 = c2_em_i19 + 1) {
      c2_Te[c2_em_i18] = c2_Te[c2_em_i18] + c2_c_R3[c2_em_i19][c2_em_i18] *
        c2_em_dv11[c2_em_i19];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,21);
  c2_b_Tx = c2_Te[0];
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,22);
  c2_b_Ty = c2_Te[1];
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,23);
  c2_b_Tz = c2_Te[2];
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,-23);
  sf_debug_pop_symbol_scope();
  *c2_Tx() = c2_b_Tx;
  *c2_Ty() = c2_b_Ty;
  *c2_Tz() = c2_b_Tz;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
  _sfEvent_ = c2_previousEvent;
  sf_debug_check_for_state_inconsistency();
}

static real_T *c2_T(void)
{
  return (real_T *)ssGetInputPortSignal(chartInstance.S, 0);
}

static real_T *c2_Tx(void)
{
  return (real_T *)ssGetOutputPortSignal(chartInstance.S, 1);
}

static real_T *c2_phi(void)
{
  return (real_T *)ssGetInputPortSignal(chartInstance.S, 1);
}

static real_T *c2_theta(void)
{
  return (real_T *)ssGetInputPortSignal(chartInstance.S, 2);
}

static real_T *c2_psi(void)
{
  return (real_T *)ssGetInputPortSignal(chartInstance.S, 3);
}

static real_T *c2_Ty(void)
{
  return (real_T *)ssGetOutputPortSignal(chartInstance.S, 2);
}

static real_T *c2_Tz(void)
{
  return (real_T *)ssGetOutputPortSignal(chartInstance.S, 3);
}

static void init_dsm_address_info(void)
{
}

static void sf_save_state_c2_model_quad(FILE *c2_file)
{
  fwrite(&chartInstance.c2_is_active_c2_model_quad, 1,
   sizeof(chartInstance.c2_is_active_c2_model_quad), c2_file);
}

static void sf_load_state_c2_model_quad(FILE *c2_file)
{
  fread(&chartInstance.c2_is_active_c2_model_quad, 1,
   sizeof(chartInstance.c2_is_active_c2_model_quad), c2_file);
}

/* SFunction Glue Code */
void sf_c2_model_quad_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1207703968U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3600310074U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1162954057U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3061495133U);
}

mxArray *sf_c2_model_quad_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] =
  {"checksum","inputs","parameters","outputs"};
  mxArray *mxAutoinheritanceInfo =
  mxCreateStructMatrix(1,1,4,autoinheritanceFields);
  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2205632317U);
    pr[1] = (double)(1113782298U);
    pr[2] = (double)(3645965572U);
    pr[3] = (double)(3658595874U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }
  {
    const char *dataFields[] = {"size","type","complexity"};
    mxArray *mxData = mxCreateStructMatrix(1,4,3,dataFields);
    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }
    {
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }
    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }
    {
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }
    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));
    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,2,"size",mxSize);
    }
    {
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,2,"type",mxType);
    }
    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));
    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,3,"size",mxSize);
    }
    {
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,3,"type",mxType);
    }
    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }
  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,mxREAL));
  }
  {
    const char *dataFields[] = {"size","type","complexity"};
    mxArray *mxData = mxCreateStructMatrix(1,3,3,dataFields);
    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }
    {
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }
    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }
    {
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }
    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));
    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,2,"size",mxSize);
    }
    {
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,2,"type",mxType);
    }
    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }
  return(mxAutoinheritanceInfo);
}

static void chart_debug_initialization(SimStruct *S)
{
  if(ssIsFirstInitCond(S)) {
    /* do this only if simulation is starting */
    if(!sim_mode_is_rtw_gen(S)) {
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent =
          sf_debug_initialize_chart(_model_quadMachineNumber_,
         2,
         1,
         1,
         7,
         0,
         0,
         0,
         0,
         &(chartInstance.chartNumber),
         &(chartInstance.instanceNumber),
         ssGetPath(S),
         (void *)S);
        if(chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting(_model_quadMachineNumber_,chartInstance.chartNumber,1);
          sf_debug_set_chart_event_thresholds(_model_quadMachineNumber_,
           chartInstance.chartNumber,
           0,
           0,
           0);

          _SFD_SET_DATA_PROPS(4,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"T",0);
          _SFD_SET_DATA_PROPS(3,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"Tx",0);
          _SFD_SET_DATA_PROPS(5,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"phi",0);
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"theta",0);
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"psi",0);
          _SFD_SET_DATA_PROPS(2,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"Ty",0);
          _SFD_SET_DATA_PROPS(6,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"Tz",0);
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }
        _SFD_CV_INIT_CHART(0,0,0,0);
        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of EML Model Coverage */
        _SFD_CV_INIT_EML(0,1,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,421);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if(chartAlreadyPresent==0)
        {
          _SFD_TRANS_COV_MAPS(0,
           0,NULL,NULL,
           0,NULL,NULL,
           1,NULL,NULL,
           0,NULL,NULL);
        }
        _SFD_SET_DATA_VALUE_PTR(4U, c2_T());
        _SFD_SET_DATA_VALUE_PTR(3U, c2_Tx());
        _SFD_SET_DATA_VALUE_PTR(5U, c2_phi());
        _SFD_SET_DATA_VALUE_PTR(1U, c2_theta());
        _SFD_SET_DATA_VALUE_PTR(0U, c2_psi());
        _SFD_SET_DATA_VALUE_PTR(2U, c2_Ty());
        _SFD_SET_DATA_VALUE_PTR(6U, c2_Tz());
      }
    }
  } else {
    sf_debug_reset_current_state_configuration(_model_quadMachineNumber_,chartInstance.chartNumber,chartInstance.instanceNumber);
  }
}

static void sf_opaque_initialize_c2_model_quad(void *chartInstanceVar)
{
  chart_debug_initialization(chartInstance.S);
  initialize_params_c2_model_quad();
  initialize_c2_model_quad();
}

static void sf_opaque_enable_c2_model_quad(void *chartInstanceVar)
{
  enable_c2_model_quad();
}

static void sf_opaque_disable_c2_model_quad(void *chartInstanceVar)
{
  disable_c2_model_quad();
}

static void sf_opaque_gateway_c2_model_quad(void *chartInstanceVar)
{
  sf_c2_model_quad();
}

static void sf_opaque_terminate_c2_model_quad(void *chartInstanceVar)
{
  finalize_c2_model_quad();
}

static void mdlProcessParameters_c2_model_quad(SimStruct *S)
{
  int i;
  for(i=0;i<ssGetNumRunTimeParams(S);i++) {
    if(ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }
  initialize_params_c2_model_quad();
}

static void mdlSetWorkWidths_c2_model_quad(SimStruct *S)
{
  if(sim_mode_is_rtw_gen(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("model_quad",2);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("model_quad",2,"gatewayCannotBeInlinedMultipleTimes"));
    if(chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"model_quad",2,4);
      sf_mark_chart_reusable_outputs(S,"model_quad",2,3);
    }
    if (!sf_is_chart_instance_optimized_out("model_quad",2)) {
      int dtId;
      char *chartInstanceTypedefName =
        sf_chart_instance_typedef_name("model_quad",2);
      dtId = ssRegisterDataType(S, chartInstanceTypedefName);
      if (dtId == INVALID_DTYPE_ID ) return;
      /* Register the size of the udt */
      if (!ssSetDataTypeSize(S, dtId, 8)) return;
      if(!ssSetNumDWork(S,1)) return;
      ssSetDWorkDataType(S, 0, dtId);
      ssSetDWorkWidth(S, 0, 1);
      ssSetDWorkName(S, 0, "ChartInstance"); /*optional name, less than 16 chars*/
      sf_set_rtw_identifier(S);
    }
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(1207703968U));
  ssSetChecksum1(S,(3600310074U));
  ssSetChecksum2(S,(1162954057U));
  ssSetChecksum3(S,(3061495133U));

  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c2_model_quad(SimStruct *S)
{
  if(sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "model_quad", 2);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void sf_save_debug_c2_model_quad(SFc2_model_quadInstanceStruct*
 chartInstance, FILE* file)
{
  int machineNumber = _model_quadMachineNumber_;
  int chartNumber = chartInstance->chartNumber;
  int instanceNumber = chartInstance->instanceNumber;
  int bufferSize = sf_debug_get_state_vectors_data_size(machineNumber,
   chartNumber, instanceNumber);
  unsigned char* buffer = (unsigned char*) malloc(bufferSize);
  unsigned int chartActive = sf_debug_get_chart_active(machineNumber,
   chartNumber, instanceNumber);
  fwrite(&chartActive, sizeof(chartActive),1,file);
  sf_debug_get_state_vectors_data(machineNumber, chartNumber, instanceNumber,
   buffer, bufferSize);
  fwrite(&bufferSize, sizeof(bufferSize), 1, file); /* Write number of bytes */
  fwrite(buffer, 1, bufferSize,file);   /* Write buffer */
  free(buffer);
}
static void sf_load_debug_c2_model_quad(SFc2_model_quadInstanceStruct*
 chartInstance,FILE* file)
{
  int machineNumber = _model_quadMachineNumber_;
  int chartNumber = chartInstance->chartNumber;
  int instanceNumber = chartInstance->instanceNumber;
  int bufferSize = 0;
  unsigned char* buffer = NULL;
  unsigned int chartActive = 0;
  fread(&chartActive, sizeof(chartActive),1,file);
  sf_debug_set_chart_active(machineNumber, chartNumber, instanceNumber,
   chartActive);
  fread(&bufferSize, sizeof(bufferSize), 1, file);
  buffer = (unsigned char*) malloc(bufferSize);
  fread(buffer, 1, bufferSize, file);
  sf_debug_set_state_vectors_data(machineNumber, chartNumber, instanceNumber,
   buffer, bufferSize);
  free(buffer);
}
static void sf_c2_model_quad_sim_ctx_io(SimStruct* S, const char io, FILE* file)
{
  if(io == 'r') {
    sf_load_state_c2_model_quad(file);
    sf_load_debug_c2_model_quad(&chartInstance, file);
  } else {
    sf_save_state_c2_model_quad(file);
    sf_save_debug_c2_model_quad(&chartInstance, file);
  }
}
static void mdlStart_c2_model_quad(SimStruct *S)
{
  chartInstance.chartInfo.chartInstance = NULL;
  chartInstance.chartInfo.isEMLChart = 1;
  chartInstance.chartInfo.chartInitialized = 0;
  chartInstance.chartInfo.sFunctionGateway = sf_opaque_gateway_c2_model_quad;
  chartInstance.chartInfo.initializeChart = sf_opaque_initialize_c2_model_quad;
  chartInstance.chartInfo.terminateChart = sf_opaque_terminate_c2_model_quad;
  chartInstance.chartInfo.enableChart = sf_opaque_enable_c2_model_quad;
  chartInstance.chartInfo.disableChart = sf_opaque_disable_c2_model_quad;
  chartInstance.chartInfo.mdlRTW = mdlRTW_c2_model_quad;
  chartInstance.chartInfo.mdlStart = mdlStart_c2_model_quad;
  chartInstance.chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c2_model_quad;
  chartInstance.chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance.chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance.chartInfo.storeCurrentConfiguration = NULL;
  chartInstance.S = S;
  ssSetUserData(S,(void *)(&(chartInstance.chartInfo))); /* register the chart instance with simstruct */
  ssSetmdlSimulationContextIO(S, sf_c2_model_quad_sim_ctx_io);
  if(!sim_mode_is_rtw_gen(S)) {
    init_dsm_address_info();
  }
}

void c2_model_quad_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c2_model_quad(S);
    break;
   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_model_quad(S);
    break;
   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_model_quad(S);
    break;
   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
     "Error calling c2_model_quad_method_dispatcher.\n"
     "Can't handle method %d.\n", method);
    break;
  }
}


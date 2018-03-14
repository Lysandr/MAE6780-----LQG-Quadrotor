/* Include files */
#include "CL_Xpro_model_sfun.h"
#include "c2_CL_Xpro_model.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint8_T _sfEvent_;
uint32_T _CL_Xpro_modelMachineNumber_;
real_T _sfTime_;

/* Function Declarations */

/* Function Definitions */
void CL_Xpro_model_initializer(void)
{
  _sfEvent_ = CALL_EVENT;
}

void CL_Xpro_model_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_CL_Xpro_model_method_dispatcher(SimStruct *simstructPtr, const
 char *chartName, int_T method, void *data)
{
  if(!strcmp_ignore_ws(chartName,"CL_Xpro_model/CL X-Pro/Body dynamics/gibanje u prostoru/Aircraft 2 Earth trans/ SFunction "))
  {
    c2_CL_Xpro_model_method_dispatcher(simstructPtr, method, data);
    return 1;
  }
  return 0;
}
unsigned int sf_CL_Xpro_model_process_check_sum_call( int nlhs, mxArray *
 plhs[], int nrhs, const mxArray * prhs[] )
{
#ifdef MATLAB_MEX_FILE
  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) ) return 0;
  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if(strcmp(commandName,"sf_get_check_sum")) return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if(nrhs>1 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if(!strcmp(commandName,"machine")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(31973273U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1270608393U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4181280704U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(521270282U);
    }else if(!strcmp(commandName,"exportedFcn")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0U);
    }else if(!strcmp(commandName,"makefile")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1529968164U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4129105270U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1377898961U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(737677172U);
    }else if(nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch(chartFileNumber) {
       case 2:
        {
          extern void sf_c2_CL_Xpro_model_get_check_sum(mxArray *plhs[]);
          sf_c2_CL_Xpro_model_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    }else if(!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1518981232U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4172013795U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2963200744U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(709200955U);
    }else {
      return 0;
    }
  } else{
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1297535970U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2736965798U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2416473180U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(469400210U);
  }
  return 1;
#else
  return 0;
#endif
}

unsigned int sf_CL_Xpro_model_autoinheritance_info( int nlhs, mxArray * plhs[],
 int nrhs, const mxArray * prhs[] )
{
#ifdef MATLAB_MEX_FILE
  char commandName[32];
  if (nrhs<2 || !mxIsChar(prhs[0]) ) return 0;
  /* Possible call to get the autoinheritance_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if(strcmp(commandName,"get_autoinheritance_info")) return 0;
  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch(chartFileNumber) {
     case 2:
      {
        extern mxArray *sf_c2_CL_Xpro_model_get_autoinheritance_info(void);
        plhs[0] = sf_c2_CL_Xpro_model_get_autoinheritance_info();
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }
  return 1;
#else
  return 0;
#endif
}
void CL_Xpro_model_debug_initialize(void)
{
  _CL_Xpro_modelMachineNumber_ =
  sf_debug_initialize_machine("CL_Xpro_model","sfun",0,1,0,0,0);
  sf_debug_set_machine_event_thresholds(_CL_Xpro_modelMachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(_CL_Xpro_modelMachineNumber_,0);
}

void CL_Xpro_model_register_exported_symbols(SimStruct* S)
{
}

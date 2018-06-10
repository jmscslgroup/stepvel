/*
 * stepvel.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "stepvel".
 *
 * Model version              : 1.26
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C++ source code generated on : Wed May 16 20:42:02 2018
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_stepvel_h_
#define RTW_HEADER_stepvel_h_
#include <stddef.h>
#include <string.h>
#ifndef stepvel_COMMON_INCLUDES_
# define stepvel_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#endif                                 /* stepvel_COMMON_INCLUDES_ */

#include "stepvel_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (auto storage) */
typedef struct {
  SL_Bus_stepvel_geometry_msgs_Twist BusAssignment;/* '<Root>/Bus Assignment' */
} B_stepvel_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  robotics_slros_internal_block_T obj; /* '<Root>/Connstant Velocity' */
  robotics_slros_internal_block_T obj_n;/* '<Root>/Steering angle' */
  void *SinkBlock_PWORK;               /* '<S2>/SinkBlock' */
  void *ConnstantVelocity_PWORK;       /* '<Root>/Connstant Velocity' */
  void *Steeringangle_PWORK;           /* '<Root>/Steering angle' */
  robotics_slros_internal_blo_d_T obj_m;/* '<S2>/SinkBlock' */
  boolean_T objisempty;                /* '<S2>/SinkBlock' */
  boolean_T objisempty_p;              /* '<Root>/Connstant Velocity' */
  boolean_T objisempty_h;              /* '<Root>/Steering angle' */
} DW_stepvel_T;

/* Parameters (auto storage) */
struct P_stepvel_T_ {
  SL_Bus_stepvel_geometry_msgs_Twist Constant_Value;/* Computed Parameter: Constant_Value
                                                     * Referenced by: '<S1>/Constant'
                                                     */
  real_T Steeringangle_SampleTime;     /* Expression: SampleTime
                                        * Referenced by: '<Root>/Steering angle'
                                        */
  real_T ConnstantVelocity_SampleTime; /* Expression: SampleTime
                                        * Referenced by: '<Root>/Connstant Velocity'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_stepvel_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern P_stepvel_T stepvel_P;

#ifdef __cplusplus

}
#endif

/* Block signals (auto storage) */
extern B_stepvel_T stepvel_B;

/* Block states (auto storage) */
extern DW_stepvel_T stepvel_DW;

#ifdef __cplusplus

extern "C" {

#endif

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void stepvel_initialize(void);
  extern void stepvel_step(void);
  extern void stepvel_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_stepvel_T *const stepvel_M;

#ifdef __cplusplus

}
#endif

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'stepvel'
 * '<S1>'   : 'stepvel/Blank Message Leader'
 * '<S2>'   : 'stepvel/Publish for Leader Vel'
 */
#endif                                 /* RTW_HEADER_stepvel_h_ */

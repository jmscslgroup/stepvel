/*
 * stepvel.cpp
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

#include "stepvel.h"
#include "stepvel_private.h"
#define stepvel_MessageQueueLen        (1)
#define stepvel_ParameterInitialValue  (0.0)
#define stepvel_ParameterInitialValue_d (3.0)

/* Block signals (auto storage) */
B_stepvel_T stepvel_B;

/* Block states (auto storage) */
DW_stepvel_T stepvel_DW;

/* Real-time model */
RT_MODEL_stepvel_T stepvel_M_;
RT_MODEL_stepvel_T *const stepvel_M = &stepvel_M_;

/* Model step function */
void stepvel_step(void)
{
  boolean_T p;
  boolean_T p_0;
  real_T value;
  real_T value_0;

  /* Start for MATLABSystem: '<Root>/Connstant Velocity' incorporates:
   *  MATLABSystem: '<Root>/Connstant Velocity'
   */
  p = false;
  p_0 = true;
  if (!(stepvel_DW.obj.SampleTime == stepvel_P.ConnstantVelocity_SampleTime)) {
    p_0 = false;
  }

  if (p_0) {
    p = true;
  }

  if (!p) {
    stepvel_DW.obj.SampleTime = stepvel_P.ConnstantVelocity_SampleTime;
  }

  ParamGet_stepvel_93.get_parameter(&value);

  /* Start for MATLABSystem: '<Root>/Steering angle' incorporates:
   *  MATLABSystem: '<Root>/Steering angle'
   */
  p = false;
  p_0 = true;
  if (!(stepvel_DW.obj_n.SampleTime == stepvel_P.Steeringangle_SampleTime)) {
    p_0 = false;
  }

  if (p_0) {
    p = true;
  }

  if (!p) {
    stepvel_DW.obj_n.SampleTime = stepvel_P.Steeringangle_SampleTime;
  }

  ParamGet_stepvel_92.get_parameter(&value_0);

  /* BusAssignment: '<Root>/Bus Assignment' incorporates:
   *  Constant: '<S1>/Constant'
   *  MATLABSystem: '<Root>/Connstant Velocity'
   *  Start for MATLABSystem: '<Root>/Connstant Velocity'
   *  MATLABSystem: '<Root>/Steering angle'
   *  Start for MATLABSystem: '<Root>/Steering angle'
   */
  stepvel_B.BusAssignment = stepvel_P.Constant_Value;
  stepvel_B.BusAssignment.Linear.X = value;
  stepvel_B.BusAssignment.Angular.Z = value_0;

  /* Outputs for Atomic SubSystem: '<Root>/Publish for Leader Vel' */
  /* Start for MATLABSystem: '<S2>/SinkBlock' incorporates:
   *  MATLABSystem: '<S2>/SinkBlock'
   */
  Pub_stepvel_27.publish(&stepvel_B.BusAssignment);

  /* End of Outputs for SubSystem: '<Root>/Publish for Leader Vel' */
}

/* Model initialize function */
void stepvel_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(stepvel_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&stepvel_DW, 0,
                sizeof(DW_stepvel_T));

  {
    static const char_T tmp[7] = { 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    static const char_T tmp_0[8] = { 's', 't', 'r', 'A', 'n', 'g', 'l', 'e' };

    static const char_T tmp_1[8] = { 'c', 'o', 'n', 's', 't', 'V', 'e', 'l' };

    char_T tmp_2[8];
    char_T tmp_3[9];
    int32_T i;

    /* Start for MATLABSystem: '<Root>/Connstant Velocity' */
    stepvel_DW.obj.isInitialized = 0;
    stepvel_DW.objisempty_p = true;
    stepvel_DW.obj.SampleTime = stepvel_P.ConnstantVelocity_SampleTime;
    stepvel_DW.obj.isInitialized = 1;
    for (i = 0; i < 8; i++) {
      tmp_3[i] = tmp_1[i];
    }

    tmp_3[8] = '\x00';
    ParamGet_stepvel_93.initialize(tmp_3);
    ParamGet_stepvel_93.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_stepvel_93.set_initial_value(stepvel_ParameterInitialValue_d);

    /* End of Start for MATLABSystem: '<Root>/Connstant Velocity' */

    /* Start for MATLABSystem: '<Root>/Steering angle' */
    stepvel_DW.obj_n.isInitialized = 0;
    stepvel_DW.objisempty_h = true;
    stepvel_DW.obj_n.SampleTime = stepvel_P.Steeringangle_SampleTime;
    stepvel_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 8; i++) {
      tmp_3[i] = tmp_0[i];
    }

    tmp_3[8] = '\x00';
    ParamGet_stepvel_92.initialize(tmp_3);
    ParamGet_stepvel_92.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_stepvel_92.set_initial_value(stepvel_ParameterInitialValue);

    /* End of Start for MATLABSystem: '<Root>/Steering angle' */

    /* Start for Atomic SubSystem: '<Root>/Publish for Leader Vel' */
    /* Start for MATLABSystem: '<S2>/SinkBlock' */
    stepvel_DW.obj_m.isInitialized = 0;
    stepvel_DW.objisempty = true;
    stepvel_DW.obj_m.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      tmp_2[i] = tmp[i];
    }

    tmp_2[7] = '\x00';
    Pub_stepvel_27.createPublisher(tmp_2, stepvel_MessageQueueLen);

    /* End of Start for MATLABSystem: '<S2>/SinkBlock' */
    /* End of Start for SubSystem: '<Root>/Publish for Leader Vel' */
  }
}

/* Model terminate function */
void stepvel_terminate(void)
{
  /* Start for MATLABSystem: '<Root>/Connstant Velocity' incorporates:
   *  Terminate for MATLABSystem: '<Root>/Connstant Velocity'
   */
  if (stepvel_DW.obj.isInitialized == 1) {
    stepvel_DW.obj.isInitialized = 2;
  }

  /* End of Start for MATLABSystem: '<Root>/Connstant Velocity' */

  /* Start for MATLABSystem: '<Root>/Steering angle' incorporates:
   *  Terminate for MATLABSystem: '<Root>/Steering angle'
   */
  if (stepvel_DW.obj_n.isInitialized == 1) {
    stepvel_DW.obj_n.isInitialized = 2;
  }

  /* End of Start for MATLABSystem: '<Root>/Steering angle' */

  /* Terminate for Atomic SubSystem: '<Root>/Publish for Leader Vel' */
  /* Start for MATLABSystem: '<S2>/SinkBlock' incorporates:
   *  Terminate for MATLABSystem: '<S2>/SinkBlock'
   */
  if (stepvel_DW.obj_m.isInitialized == 1) {
    stepvel_DW.obj_m.isInitialized = 2;
  }

  /* End of Start for MATLABSystem: '<S2>/SinkBlock' */
  /* End of Terminate for SubSystem: '<Root>/Publish for Leader Vel' */
}

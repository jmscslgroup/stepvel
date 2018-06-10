/*
 * stepvel_data.cpp
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

/* Block parameters (auto storage) */
P_stepvel_T stepvel_P = {
  {
    {
      0.0,                             /* X */
      0.0,                             /* Y */
      0.0                              /* Z */
    },                                 /* Linear */

    {
      0.0,                             /* X */
      0.0,                             /* Y */
      0.0                              /* Z */
    }                                  /* Angular */
  },                                   /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S1>/Constant'
                                        */
  -1.0,                                /* Expression: SampleTime
                                        * Referenced by: '<Root>/Steering angle'
                                        */
  -1.0                                 /* Expression: SampleTime
                                        * Referenced by: '<Root>/Connstant Velocity'
                                        */
};

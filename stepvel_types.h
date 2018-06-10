/*
 * stepvel_types.h
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

#ifndef RTW_HEADER_stepvel_types_h_
#define RTW_HEADER_stepvel_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_stepvel_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_stepvel_geometry_msgs_Vector3_

typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_stepvel_geometry_msgs_Vector3;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_stepvel_geometry_msgs_Twist_
#define DEFINED_TYPEDEF_FOR_SL_Bus_stepvel_geometry_msgs_Twist_

typedef struct {
  SL_Bus_stepvel_geometry_msgs_Vector3 Linear;
  SL_Bus_stepvel_geometry_msgs_Vector3 Angular;
} SL_Bus_stepvel_geometry_msgs_Twist;

#endif

#ifndef typedef_robotics_slros_internal_block_T
#define typedef_robotics_slros_internal_block_T

typedef struct {
  int32_T isInitialized;
  real_T SampleTime;
} robotics_slros_internal_block_T;

#endif                                 /*typedef_robotics_slros_internal_block_T*/

#ifndef typedef_robotics_slros_internal_blo_d_T
#define typedef_robotics_slros_internal_blo_d_T

typedef struct {
  int32_T isInitialized;
} robotics_slros_internal_blo_d_T;

#endif                                 /*typedef_robotics_slros_internal_blo_d_T*/

#ifndef typedef_struct_T_stepvel_T
#define typedef_struct_T_stepvel_T

typedef struct {
  char_T f1[4];
} struct_T_stepvel_T;

#endif                                 /*typedef_struct_T_stepvel_T*/

#ifndef typedef_struct_T_stepvel_d_T
#define typedef_struct_T_stepvel_d_T

typedef struct {
  char_T f1[8];
} struct_T_stepvel_d_T;

#endif                                 /*typedef_struct_T_stepvel_d_T*/

#ifndef typedef_struct_T_stepvel_dc_T
#define typedef_struct_T_stepvel_dc_T

typedef struct {
  char_T f1[7];
} struct_T_stepvel_dc_T;

#endif                                 /*typedef_struct_T_stepvel_dc_T*/

#ifndef typedef_struct_T_stepvel_dcr_T
#define typedef_struct_T_stepvel_dcr_T

typedef struct {
  char_T f1[8];
  char_T f2[4];
  char_T f3[6];
} struct_T_stepvel_dcr_T;

#endif                                 /*typedef_struct_T_stepvel_dcr_T*/

#ifndef typedef_struct_T_stepvel_dcrp_T
#define typedef_struct_T_stepvel_dcrp_T

typedef struct {
  real_T f1[2];
} struct_T_stepvel_dcrp_T;

#endif                                 /*typedef_struct_T_stepvel_dcrp_T*/

#ifndef typedef_struct_T_stepvel_dcrp3_T
#define typedef_struct_T_stepvel_dcrp3_T

typedef struct {
  char_T f1[8];
  char_T f2[7];
  char_T f3[6];
} struct_T_stepvel_dcrp3_T;

#endif                                 /*typedef_struct_T_stepvel_dcrp3_T*/

/* Parameters (auto storage) */
typedef struct P_stepvel_T_ P_stepvel_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_stepvel_T RT_MODEL_stepvel_T;

#endif                                 /* RTW_HEADER_stepvel_types_h_ */

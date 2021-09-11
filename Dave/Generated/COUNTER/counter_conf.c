/*********************************************************************************************************************
* DAVE APP Name : COUNTER       APP Version: 4.1.10
*
* NOTE:
* This file is generated by DAVE. Any manual modification done to this file will be lost when the code is regenerated.
*********************************************************************************************************************/

/**
 * @cond
 ***********************************************************************************************************************
 *
 * Copyright (c) 2015-2016, Infineon Technologies AG
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,are permitted provided that the
 * following conditions are met:
 *
 *   Redistributions of source code must retain the above copyright notice, this list of conditions and the  following
 *   disclaimer.
 *
 *   Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the
 *   following disclaimer in the documentation and/or other materials provided with the distribution.
 *
 *   Neither the name of the copyright holders nor the names of its contributors may be used to endorse or promote
 *   products derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE  FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT  OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * To improve the quality of the software, users are encouraged to share modifications, enhancements or bug fixes
 * with Infineon Technologies AG (dave@infineon.com).
 ***********************************************************************************************************************
 *
 * Change History
 * --------------
 *
 * 2015-02-16:
 *     - Initial version for DAVEv4.<BR>
 *
 * 2015-04-06:
 *     - Modified the config structure of the COUNTER.<BR>
 *     - Enables usage of external event-2 for gating.<BR>
 *     - UI modified to support the edge selection for Count Direction and Gating.<BR>
 *     - API name change COUNTER_AcknowledgeInterrupt to COUNTER_ClearEvent.<BR>
 *
 * 2015-07-09:
 *     - Documentation updated.<BR>
 *
 * 2015-09-01:
 *     - XMC14 device support added..<BR>
 *
 * 2015-10-08:
 *     - Added support for XMC4700/XMC4800 devices.<BR>
 *
 * 2015-12-16:
 *     - Added support for XMC4300 devices.<BR>
 *
 * 2016-07-08:
 *     - Fixed incorrect case for an included header.<br>
 *     - All event signals are made mandatory.<BR>
 *
 * @endcond
 *
 */

/***********************************************************************************************************************
 * HEADER FILES
 **********************************************************************************************************************/
#include "counter.h"
 
/**********************************************************************************************************************
 * DATA STRUCTURES
 **********************************************************************************************************************/

/************************************** COUNTER_WheelRevolution *********************************************/
/* Event configuration for counter instance COUNTER_WheelRevolution */
XMC_CCU4_SLICE_EVENT_CONFIG_t COUNTER_WheelRevolution_event0_config = 
{
  .mapped_input = XMC_CCU4_SLICE_INPUT_BB,
  .edge         = XMC_CCU4_SLICE_EVENT_EDGE_SENSITIVITY_FALLING_EDGE,
  .level 	      = XMC_CCU4_SLICE_EVENT_LEVEL_SENSITIVITY_ACTIVE_LOW,
  .duration     = XMC_CCU4_SLICE_EVENT_FILTER_DISABLED
};



/*Configuration structure for CCU4 Counter for COUNTER_WheelRevolution */
COUNTER_CCU4_CONFIG_t  COUNTER_WheelRevolution_ccu4_config =
{
  .global_handle          = (GLOBAL_CCU4_t*) &GLOBAL_CCU4_0,
  .kernel_ptr             = (XMC_CCU4_MODULE_t*) (void*) CCU41_BASE,
  .slice_ptr              = (XMC_CCU4_SLICE_t*) (void*) CCU41_CC41,
  .event0_config          = (XMC_CCU4_SLICE_EVENT_CONFIG_t*) &COUNTER_WheelRevolution_event0_config,
  .count_dir_event_config = NULL,
  .gating_event_config    = NULL,
  .shadow_mask            = (uint32_t)XMC_CCU4_SHADOW_TRANSFER_SLICE_1,
  .count_match_value      = (uint16_t) 1000,
  .countdir_event         = XMC_CCU4_SLICE_EVENT_NONE,
  .gating_event           = XMC_CCU4_SLICE_EVENT_NONE,
  .count_match_node_id    = XMC_CCU4_SLICE_SR_ID_0,
  .count_rollover_node_id = XMC_CCU4_SLICE_SR_ID_0,
  .event_edge_det_node_id = XMC_CCU4_SLICE_SR_ID_2,
  .event1_node_id         = XMC_CCU4_SLICE_SR_ID_0,
  .event2_node_id         = XMC_CCU4_SLICE_SR_ID_0,
  .state                  = COUNTER_STATUS_UNINITIALIZED,
  .kernel_number          = (uint8_t) 1,
  .slice_number           = (uint8_t) 1,
  .intr_count_match       = (bool) true,
  .intr_count_rollover    = (bool) false,
  .intr_evt_edge_detect   = (bool) false,
  .intr_event1_detect     = (bool) false,
   .intr_event2_detect    = (bool) false,
  .init_start             = (bool) true
};

/* App Handle for Instance COUNTER_WheelRevolution*/
COUNTER_t COUNTER_WheelRevolution = 
{
  .counter_type = COUNTER_CCU4,
  .ccu4_handle  = (COUNTER_CCU4_CONFIG_t*) &COUNTER_WheelRevolution_ccu4_config
};
/*********************************************************************************************************************/

/************************************** COUNTER_AutoStop *********************************************/
/* Event configuration for counter instance COUNTER_AutoStop */
XMC_CCU4_SLICE_EVENT_CONFIG_t COUNTER_AutoStop_event0_config = 
{
  .mapped_input = XMC_CCU4_SLICE_INPUT_AA,
  .edge         = XMC_CCU4_SLICE_EVENT_EDGE_SENSITIVITY_FALLING_EDGE,
  .level 	      = XMC_CCU4_SLICE_EVENT_LEVEL_SENSITIVITY_ACTIVE_LOW,
  .duration     = XMC_CCU4_SLICE_EVENT_FILTER_5_CYCLES
};



/*Configuration structure for CCU4 Counter for COUNTER_AutoStop */
COUNTER_CCU4_CONFIG_t  COUNTER_AutoStop_ccu4_config =
{
  .global_handle          = (GLOBAL_CCU4_t*) &GLOBAL_CCU4_0,
  .kernel_ptr             = (XMC_CCU4_MODULE_t*) (void*) CCU41_BASE,
  .slice_ptr              = (XMC_CCU4_SLICE_t*) (void*) CCU41_CC43,
  .event0_config          = (XMC_CCU4_SLICE_EVENT_CONFIG_t*) &COUNTER_AutoStop_event0_config,
  .count_dir_event_config = NULL,
  .gating_event_config    = NULL,
  .shadow_mask            = (uint32_t)XMC_CCU4_SHADOW_TRANSFER_SLICE_3,
  .count_match_value      = (uint16_t) 200,
  .countdir_event         = XMC_CCU4_SLICE_EVENT_NONE,
  .gating_event           = XMC_CCU4_SLICE_EVENT_NONE,
  .count_match_node_id    = XMC_CCU4_SLICE_SR_ID_3,
  .count_rollover_node_id = XMC_CCU4_SLICE_SR_ID_2,
  .event_edge_det_node_id = XMC_CCU4_SLICE_SR_ID_2,
  .event1_node_id         = XMC_CCU4_SLICE_SR_ID_0,
  .event2_node_id         = XMC_CCU4_SLICE_SR_ID_0,
  .state                  = COUNTER_STATUS_UNINITIALIZED,
  .kernel_number          = (uint8_t) 1,
  .slice_number           = (uint8_t) 3,
  .intr_count_match       = (bool) true,
  .intr_count_rollover    = (bool) false,
  .intr_evt_edge_detect   = (bool) false,
  .intr_event1_detect     = (bool) false,
   .intr_event2_detect    = (bool) false,
  .init_start             = (bool) true
};

/* App Handle for Instance COUNTER_AutoStop*/
COUNTER_t COUNTER_AutoStop = 
{
  .counter_type = COUNTER_CCU4,
  .ccu4_handle  = (COUNTER_CCU4_CONFIG_t*) &COUNTER_AutoStop_ccu4_config
};
/*********************************************************************************************************************/


/********************************************************************************************************
 * @file	zcl_multistate_output.h
 *
 * @brief	This is the header file for zcl_multistate_output
 *
 * @author	Zigbee Group
 * @date	2019
 *
 * @par     Copyright (c) 2019, Telink Semiconductor (Shanghai) Co., Ltd. ("TELINK")
 *          All rights reserved.
 *
 *          Redistribution and use in source and binary forms, with or without
 *          modification, are permitted provided that the following conditions are met:
 *
 *              1. Redistributions of source code must retain the above copyright
 *              notice, this list of conditions and the following disclaimer.
 *
 *              2. Unless for usage inside a TELINK integrated circuit, redistributions
 *              in binary form must reproduce the above copyright notice, this list of
 *              conditions and the following disclaimer in the documentation and/or other
 *              materials provided with the distribution.
 *
 *              3. Neither the name of TELINK, nor the names of its contributors may be
 *              used to endorse or promote products derived from this software without
 *              specific prior written permission.
 *
 *              4. This software, with or without modification, must only be used with a
 *              TELINK integrated circuit. All other usages are subject to written permission
 *              from TELINK and different commercial license may apply.
 *
 *              5. Licensee shall be solely responsible for any claim to the extent arising out of or
 *              relating to such deletion(s), modification(s) or alteration(s).
 *
 *          THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 *          ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *          WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *          DISCLAIMED. IN NO EVENT SHALL COPYRIGHT HOLDER BE LIABLE FOR ANY
 *          DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 *          (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *          LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 *          ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *          (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 *          SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *******************************************************************************************************/
#ifndef ZCL_MULTISTATE_OUTPUT_H
#define ZCL_MULTISTATE_OUTPUT_H



/*********************************************************************
 * CONSTANTS
 */

/**
 *  @brief	multistate output cluster Attribute IDs
 */
#define ZCL_MULTISTATE_OUTPUT_ATTRID_STATE_TEXT     			0x000E
#define ZCL_MULTISTATE_OUTPUT_ATTRID_DESCRIPTION    			0x001C
#define ZCL_MULTISTATE_OUTPUT_ATTRID_NUM_OF_STATES   			0x004A
#define ZCL_MULTISTATE_OUTPUT_ATTRID_OUT_OF_SERVICE   			0x0051
#define ZCL_MULTISTATE_OUTPUT_ATTRID_PRESENT_VALUE       		0x0055
#define ZCL_MULTISTATE_OUTPUT_ATTRID_PRIORITY_ARRAY   			0x0057
#define ZCL_MULTISTATE_OUTPUT_ATTRID_RELIABLILITY         		0x0067
#define ZCL_MULTISTATE_OUTPUT_ATTRID_RELINQUISH_DEFAULT     	0x0068
#define ZCL_MULTISTATE_OUTPUT_ATTRID_STATUS_FLAGS           	0x006F
#define ZCL_MULTISTATE_OUTPUT_ATTRID_APP_TYPE       			0x0100

/**
 *  @brief Max length of char string
 */
#define ZCL_MULTISTATE_OUTPUT_MAX_LENGTH 						24


/**
 *  @brief  Definition format for priority array
 */
typedef struct {
	bool boolPara;
	u16 u16Para;
} zcl_mulOutput_priorityArray_t;


#if 0
#ifdef ZCL_MULTISTATE_OUTPUT_ATTR_STATE_TEXT_ENBLE
extern u8 zcl_attr_mulOutput_stateText[];
#endif
#ifdef ZCL_MULTISTATE_OUTPUT_ATTR_DESCRIPTION_ENBLE
extern u8 zcl_attr_mulOutput_description[];
#endif
#ifdef ZCL_MULTISTATE_OUTPUT_ATTR_NUM_OF_STATES_ENBLE
extern u16 zcl_attr_mulOutput_numOfStates;
#endif
#ifdef ZCL_MULTISTATE_OUTPUT_ATTR_OUT_OF_SERVICE_ENBLE
extern bool zcl_attr_mulOutput_outOfService;
#endif
#ifdef ZCL_MULTISTATE_OUTPUT_ATTR_PRESENT_VALUE_ENBLE
extern u16 zcl_attr_mulOutput_presentValue;
#endif
#ifdef ZCL_MULTISTATE_OUTPUT_ATTR_PRIORITY_ARRAY_ENBLE
extern zcl_mulOutput_priorityArray_t zcl_attr_mulOutput_priorityArray[];
#endif
#ifdef ZCL_MULTISTATE_OUTPUT_ATTR_RELIABLILITY_ENBLE
extern u8 zcl_attr_mulOutput_reliability;
#endif
#ifdef ZCL_MULTISTATE_OUTPUT_ATTR_RELINQUISH_DEFAULT_ENBLE
extern u16 zcl_attr_mulOutput_relinquishdDfault;
#endif
#ifdef ZCL_MULTISTATE_OUTPUT_ATTR_STATUS_FLAGS_ENBLE
extern u8 zcl_attr_mulOutput_statusFlags;
#endif
#ifdef ZCL_MULTISTATE_OUTPUT_ATTR_APP_TYPE_ENBLE
extern u32 zcl_attr_mulOutput_appType;
#endif

extern const zclAttrInfo_t multistate_output_attrTbl[];
extern const u8 zcl_multistate_output_attrNum;
#endif


status_t zcl_multistate_output_Attribute_register(u8 endpoint, u16 manuCode, u8 attrNum, const zclAttrInfo_t attrTbl[], cluster_forAppCb_t cb);

#endif	/* ZCL_MULTISTATE_OUTPUT_H */

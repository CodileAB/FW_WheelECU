#ifndef CAN_NODE_WHEEL_CONF_H
#define CAN_NODE_WHEEL_CONF_H


XMC_CAN_MO_t CAN_NODE_Wheel_LMO_WheelControl = {
	.can_mo_type      = XMC_CAN_MO_TYPE_TRANSMSGOBJ,
	.can_id_mode      = XMC_CAN_FRAME_TYPE_EXTENDED_29BITS,
	.can_priority     = XMC_CAN_ARBITRATION_MODE_IDE_DIR_BASED_PRIO_2,
	.can_identifier   = 0x100000aU,
	.can_id_mask      = 0x1000000U,
	.can_ide_mask     = 1U,
	.can_mo_ptr       = (CAN_MO_TypeDef*) CAN_MO1,
	.can_data_length  = 8U,
	.can_data[1]      = 0x00000000U,
	.can_data[0]      = 0x00000000U 
};

const CAN_NODE_LMO_t CAN_NODE_Wheel_LMO_WheelControl_Config = {
	.mo_ptr  = (XMC_CAN_MO_t*) &CAN_NODE_Wheel_LMO_WheelControl,
	.number  = 1U,
	.tx_sr   = 0U,
	.rx_sr   = 0U,
	.tx_event_enable = false,
	.rx_event_enable = true
};

XMC_CAN_MO_t CAN_NODE_Wheel_LMO_WheelStatus = {
	.can_mo_type      = XMC_CAN_MO_TYPE_TRANSMSGOBJ,
	.can_id_mode      = XMC_CAN_FRAME_TYPE_EXTENDED_29BITS,
	.can_priority     = XMC_CAN_ARBITRATION_MODE_IDE_DIR_BASED_PRIO_2,
	.can_identifier   = 0x2001109U,
	.can_id_mask      = 0x2000000U,
	.can_ide_mask     = 1U,
	.can_mo_ptr       = (CAN_MO_TypeDef*) CAN_MO2,
	.can_data_length  = 8U,
	.can_data[1]      = 0x00000000U,
	.can_data[0]      = 0x00000000U 
};

const CAN_NODE_LMO_t CAN_NODE_Wheel_LMO_WheelStatus_Config = {
	.mo_ptr  = (XMC_CAN_MO_t*) &CAN_NODE_Wheel_LMO_WheelStatus,
	.number  = 2U,
	.tx_sr   = 0U,
	.rx_sr   = 0U,
	.tx_event_enable = true,
	.rx_event_enable = false
};


#define CAN_MESSAGE_CONFIGS { \
	&CAN_NODE_Wheel_LMO_WheelControl_Config, \
	&CAN_NODE_Wheel_LMO_WheelStatus_Config, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL \
}

#define NUMBER_OF_CAN_MESSAGE_CONFIGS 2U

#endif /* End of CAN_NODE_WHEEL_CONF_H */

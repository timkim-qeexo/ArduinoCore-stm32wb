/*****************************************************************************
 * @file    ble_defs.h
 * @author  MDG
 * @brief   This file contains definitions used for BLE Stack interface.
 *****************************************************************************
 * @attention
 *
 * Copyright (c) 2018-2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 *****************************************************************************
 */

#ifndef BLE_DEFS_H__
#define BLE_DEFS_H__

/* ------------------------------------------------------------------------- */

#define ACI_L2CAP_CONNECTION_PARAMETER_UPDATE_RESP		0xFD82

/* HCI commands */
#define HCI_DISCONNECT                                          0x0406
#define HCI_READ_REMOTE_VERSION_INFORMATION			0x041D
#define HCI_SET_EVENT_MASK			                0x0C01
#define HCI_RESET			                        0x0C03
#define HCI_READ_TRANSMIT_POWER_LEVEL			        0x0C2D
#define HCI_SET_CONTROLLER_TO_HOST_FLOW_CONTROL			0x0C31
#define HCI_HOST_BUFFER_SIZE			                0x0C33
#define HCI_HOST_NUMBER_OF_COMPLETED_PACKETS			0x0C35
#define HCI_READ_LOCAL_VERSION_INFORMATION			0x1001
#define HCI_READ_LOCAL_SUPPORTED_COMMANDS			0x1002
#define HCI_READ_LOCAL_SUPPORTED_FEATURES			0x1003
#define HCI_READ_BD_ADDR			                0x1009
#define HCI_READ_RSSI			                        0x1405

/* HCI LE commands */
#define HCI_LE_SET_EVENT_MASK                                   0x2001
#define HCI_LE_READ_BUFFER_SIZE			                0x2002
#define HCI_LE_READ_LOCAL_SUPPORTED_FEATURES			0x2003
#define HCI_LE_SET_RANDOM_ADDRESS			        0x2005
#define HCI_LE_SET_ADVERTISING_PARAMETERS			0x2006
#define HCI_LE_READ_ADVERTISING_PHYSICAL_CHANNEL_TX_POWER       0x2007
#define HCI_LE_SET_ADVERTISING_DATA			        0x2008
#define HCI_LE_SET_SCAN_RESPONSE_DATA			        0x2009
#define HCI_LE_SET_ADVERTISING_ENABLE			        0x200A
#define HCI_LE_SET_SCAN_PARAMETERS			        0x200B
#define HCI_LE_SET_SCAN_ENABLE			                0x200C
#define HCI_LE_CREATE_CONNECTION			        0x200D
#define HCI_LE_CREATE_CONNECTION_CANCEL			        0x200E
#define HCI_LE_READ_FILTER_ACCEPT_LIST_SIZE			0x200F
#define HCI_LE_CLEAR_FILTER_ACCEPT_LIST			        0x2010
#define HCI_LE_ADD_DEVICE_TO_FILTER_ACCEPT_LIST			0x2011
#define HCI_LE_REMOVE_DEVICE_FROM_FILTER_ACCEPT_LIST		0x2012
#define HCI_LE_CONNECTION_UPDATE			        0x2013
#define HCI_LE_SET_HOST_CHANNEL_CLASSIFICATION			0x2014
#define HCI_LE_READ_CHANNEL_MAP			                0x2015
#define HCI_LE_READ_REMOTE_FEATURES			        0x2016
#define HCI_LE_ENCRYPT			                        0x2017
#define HCI_LE_RAND			                        0x2018
#define HCI_LE_ENABLE_ENCRYPTION			        0x2019
#define HCI_LE_LONG_TERM_KEY_REQUEST_REPLY			0x201A
#define HCI_LE_LONG_TERM_KEY_REQUEST_NEGATIVE_REPLY		0x201B
#define HCI_LE_READ_SUPPORTED_STATES			        0x201C
#define HCI_LE_SET_DATA_LENGTH			                0x2022
#define HCI_LE_READ_SUGGESTED_DEFAULT_DATA_LENGTH		0x2023
#define HCI_LE_WRITE_SUGGESTED_DEFAULT_DATA_LENGTH		0x2024
#define HCI_LE_READ_LOCAL_P256_PUBLIC_KEY			0x2025
#define HCI_LE_GENERATE_DHKEY			                0x2026
#define HCI_LE_ADD_DEVICE_TO_RESOLVING_LIST			0x2027
#define HCI_LE_REMOVE_DEVICE_FROM_RESOLVING_LIST		0x2028
#define HCI_LE_CLEAR_RESOLVING_LIST			        0x2029
#define HCI_LE_READ_RESOLVING_LIST_SIZE			        0x202A
#define HCI_LE_READ_PEER_RESOLVABLE_ADDRESS			0x202B
#define HCI_LE_READ_LOCAL_RESOLVABLE_ADDRESS			0x202C
#define HCI_LE_SET_ADDRESS_RESOLUTION_ENABLE			0x202D
#define HCI_LE_SET_RESOLVABLE_PRIVATE_ADDRESS_TIMEOUT		0x202E
#define HCI_LE_READ_MAXIMUM_DATA_LENGTH			        0x202F
#define HCI_LE_READ_PHY			                        0x2030
#define HCI_LE_SET_DEFAULT_PHY			                0x2031
#define HCI_LE_SET_PHY			                        0x2032
#define HCI_LE_SET_ADVERTISING_SET_RANDOM_ADDRESS		0x2035
#define HCI_LE_SET_EXTENDED_ADVERTISING_PARAMETERS		0x2036
#define HCI_LE_SET_EXTENDED_ADVERTISING_DATA			0x2037
#define HCI_LE_SET_EXTENDED_SCAN_RESPONSE_DATA			0x2038
#define HCI_LE_SET_EXTENDED_ADVERTISING_ENABLE			0x2039
#define HCI_LE_READ_MAXIMUM_ADVERTISING_DATA_LENGTH		0x203A
#define HCI_LE_READ_NUMBER_OF_SUPPORTED_ADVERTISING_SETS	0x203B
#define HCI_LE_REMOVE_ADVERTISING_SET			        0x203C
#define HCI_LE_CLEAR_ADVERTISING_SETS			        0x203D
#define HCI_LE_SET_EXTENDED_SCAN_PARAMETERS			0x2041
#define HCI_LE_SET_EXTENDED_SCAN_ENABLE			        0x2042
#define HCI_LE_EXTENDED_CREATE_CONNECTION			0x2043
#define HCI_LE_READ_TRANSMIT_POWER			        0x204B
#define HCI_LE_READ_RF_PATH_COMPENSATION			0x204C
#define HCI_LE_WRITE_RF_PATH_COMPENSATION			0x204D
#define HCI_LE_SET_PRIVACY_MODE			                0x204E
#define HCI_LE_RECEIVER_TEST			                0x201D
#define HCI_LE_TRANSMITTER_TEST			                0x201E
#define HCI_LE_TEST_END			                        0x201F
#define HCI_LE_RECEIVER_TEST_V2			                0x2033
#define HCI_LE_TRANSMITTER_TEST_V2			        0x2034

/* ACI HAL commands */
#define ACI_HAL_GET_FW_BUILD_NUMBER                             0xFC00
#define ACI_HAL_WRITE_CONFIG_DATA			        0xFC0C
#define ACI_HAL_READ_CONFIG_DATA			        0xFC0D
#define ACI_HAL_SET_TX_POWER_LEVEL			        0xFC0F
#define ACI_HAL_LE_TX_TEST_PACKET_NUMBER			0xFC14
#define ACI_HAL_TONE_START			                0xFC15
#define ACI_HAL_TONE_STOP			                0xFC16
#define ACI_HAL_GET_LINK_STATUS			                0xFC17
#define ACI_HAL_SET_RADIO_ACTIVITY_MASK			        0xFC18
#define ACI_HAL_GET_ANCHOR_PERIOD			        0xFC19
#define ACI_HAL_SET_EVENT_MASK			                0xFC1A
#define ACI_HAL_GET_PM_DEBUG_INFO			        0xFC1C
#define ACI_HAL_SET_SLAVE_LATENCY			        0xFC20
#define ACI_HAL_READ_RADIO_REG			                0xFC30
#define ACI_HAL_WRITE_RADIO_REG			                0xFC31
#define ACI_HAL_READ_RAW_RSSI			                0xFC32
#define ACI_HAL_RX_START			                0xFC33
#define ACI_HAL_RX_STOP			                        0xFC34
#define ACI_HAL_STACK_RESET			                0xFC3B

/* ACI GAP commands */
#define ACI_GAP_SET_NON_DISCOVERABLE                            0xFC81
#define ACI_GAP_SET_LIMITED_DISCOVERABLE			0xFC82
#define ACI_GAP_SET_DISCOVERABLE			        0xFC83
#define ACI_GAP_SET_DIRECT_CONNECTABLE			        0xFC84
#define ACI_GAP_SET_IO_CAPABILITY			        0xFC85
#define ACI_GAP_SET_AUTHENTICATION_REQUIREMENT			0xFC86
#define ACI_GAP_SET_AUTHORIZATION_REQUIREMENT			0xFC87
#define ACI_GAP_PASS_KEY_RESP			                0xFC88
#define ACI_GAP_AUTHORIZATION_RESP			        0xFC89
#define ACI_GAP_INIT			                        0xFC8A
#define ACI_GAP_SET_NON_CONNECTABLE			        0xFC8B
#define ACI_GAP_SET_UNDIRECTED_CONNECTABLE			0xFC8C
#define ACI_GAP_SLAVE_SECURITY_REQ			        0xFC8D
#define ACI_GAP_UPDATE_ADV_DATA			                0xFC8E
#define ACI_GAP_DELETE_AD_TYPE			                0xFC8F
#define ACI_GAP_GET_SECURITY_LEVEL			        0xFC90
#define ACI_GAP_SET_EVENT_MASK			                0xFC91
#define ACI_GAP_CONFIGURE_WHITELIST			        0xFC92
#define ACI_GAP_TERMINATE			                0xFC93
#define ACI_GAP_CLEAR_SECURITY_DB			        0xFC94
#define ACI_GAP_ALLOW_REBOND			                0xFC95
#define ACI_GAP_START_LIMITED_DISCOVERY_PROC			0xFC96
#define ACI_GAP_START_GENERAL_DISCOVERY_PROC			0xFC97
#define ACI_GAP_START_AUTO_CONNECTION_ESTABLISH_PROC		0xFC99
#define ACI_GAP_START_GENERAL_CONNECTION_ESTABLISH_PROC		0xFC9A
#define ACI_GAP_START_SELECTIVE_CONNECTION_ESTABLISH_PROC	0xFC9B
#define ACI_GAP_CREATE_CONNECTION			        0xFC9C
#define ACI_GAP_TERMINATE_GAP_PROC			        0xFC9D
#define ACI_GAP_START_CONNECTION_UPDATE			        0xFC9E
#define ACI_GAP_SEND_PAIRING_REQ			        0xFC9F
#define ACI_GAP_RESOLVE_PRIVATE_ADDR			        0xFCA0
#define ACI_GAP_SET_BROADCAST_MODE			        0xFCA1
#define ACI_GAP_START_OBSERVATION_PROC			        0xFCA2
#define ACI_GAP_GET_BONDED_DEVICES			        0xFCA3
#define ACI_GAP_IS_DEVICE_BONDED			        0xFCA4
#define ACI_GAP_NUMERIC_COMPARISON_VALUE_CONFIRM_YESNO		0xFCA5
#define ACI_GAP_PASSKEY_INPUT			                0xFCA6
#define ACI_GAP_GET_OOB_DATA			                0xFCA7
#define ACI_GAP_SET_OOB_DATA			                0xFCA8
#define ACI_GAP_ADD_DEVICES_TO_RESOLVING_LIST			0xFCA9
#define ACI_GAP_REMOVE_BONDED_DEVICE			        0xFCAA
#define ACI_GAP_ADD_DEVICES_TO_LIST			        0xFCAB
#define ACI_GAP_ADDITIONAL_BEACON_START			        0xFCB0
#define ACI_GAP_ADDITIONAL_BEACON_STOP			        0xFCB1
#define ACI_GAP_ADDITIONAL_BEACON_SET_DATA			0xFCB2
#define ACI_GAP_ADV_SET_CONFIGURATION			        0xFCC0
#define ACI_GAP_ADV_SET_ENABLE			                0xFCC1
#define ACI_GAP_ADV_SET_ADV_DATA			        0xFCC2
#define ACI_GAP_ADV_SET_SCAN_RESP_DATA			        0xFCC3
#define ACI_GAP_ADV_REMOVE_SET			                0xFCC4
#define ACI_GAP_ADV_CLEAR_SETS			                0xFCC5
#define ACI_GAP_ADV_SET_RANDOM_ADDRESS			        0xFCC6

/* ACI GATT/ATT commands */
#define ACI_GATT_INIT                                           0xFD01
#define ACI_GATT_ADD_SERVICE			                0xFD02
#define ACI_GATT_INCLUDE_SERVICE			        0xFD03
#define ACI_GATT_ADD_CHAR		                        0xFD04
#define ACI_GATT_ADD_CHAR_DESC			                0xFD05
#define ACI_GATT_UPDATE_CHAR_VALUE			        0xFD06
#define ACI_GATT_DEL_CHAR			                0xFD07
#define ACI_GATT_DEL_SERVICE			                0xFD08
#define ACI_GATT_DEL_INCLUDE_SERVICE			        0xFD09
#define ACI_GATT_SET_EVENT_MASK			                0xFD0A
#define ACI_GATT_EXCHANGE_CONFIG			        0xFD0B
#define ACI_ATT_FIND_INFO_REQ			                0xFD0C
#define ACI_ATT_FIND_BY_TYPE_VALUE_REQ			        0xFD0D
#define ACI_ATT_READ_BY_TYPE_REQ			        0xFD0E
#define ACI_ATT_READ_BY_GROUP_TYPE_REQ			        0xFD0F
#define ACI_ATT_PREPARE_WRITE_REQ			        0xFD10
#define ACI_ATT_EXECUTE_WRITE_REQ			        0xFD11
#define ACI_GATT_DISC_ALL_PRIMARY_SERVICES			0xFD12
#define ACI_GATT_DISC_PRIMARY_SERVICE_BY_UUID			0xFD13
#define ACI_GATT_FIND_INCLUDED_SERVICES			        0xFD14
#define ACI_GATT_DISC_ALL_CHAR_OF_SERVICE			0xFD15
#define ACI_GATT_DISC_CHAR_BY_UUID			        0xFD16
#define ACI_GATT_DISC_ALL_CHAR_DESC			        0xFD17
#define ACI_GATT_READ_CHAR_VALUE			        0xFD18
#define ACI_GATT_READ_USING_CHAR_UUID			        0xFD19
#define ACI_GATT_READ_LONG_CHAR_VALUE			        0xFD1A
#define ACI_GATT_READ_MULTIPLE_CHAR_VALUE			0xFD1B
#define ACI_GATT_WRITE_CHAR_VALUE			        0xFD1C
#define ACI_GATT_WRITE_LONG_CHAR_VALUE			        0xFD1D
#define ACI_GATT_WRITE_CHAR_RELIABLE			        0xFD1E
#define ACI_GATT_WRITE_LONG_CHAR_DESC			        0xFD1F
#define ACI_GATT_READ_LONG_CHAR_DESC			        0xFD20
#define ACI_GATT_WRITE_CHAR_DESC			        0xFD21
#define ACI_GATT_READ_CHAR_DESC			                0xFD22
#define ACI_GATT_WRITE_WITHOUT_RESP			        0xFD23
#define ACI_GATT_SIGNED_WRITE_WITHOUT_RESP			0xFD24
#define ACI_GATT_CONFIRM_INDICATION			        0xFD25
#define ACI_GATT_WRITE_RESP			                0xFD26
#define ACI_GATT_ALLOW_READ			                0xFD27
#define ACI_GATT_SET_SECURITY_PERMISSION			0xFD28
#define ACI_GATT_SET_DESC_VALUE			                0xFD29
#define ACI_GATT_READ_HANDLE_VALUE			        0xFD2A
#define ACI_GATT_UPDATE_CHAR_VALUE_EXT			        0xFD2C
#define ACI_GATT_DENY_READ			                0xFD2D
#define ACI_GATT_SET_ACCESS_PERMISSION			        0xFD2E

/* ACI L2CAP commands */
#define ACI_L2CAP_CONNECTION_PARAMETER_UPDATE_REQ		0xFD81
#define ACI_L2CAP_CONNECTION_PARAMETER_UPDATE_RESP		0xFD82
#define ACI_L2CAP_COC_CONNECT			                0xFD88
#define ACI_L2CAP_COC_CONNECT_CONFIRM			        0xFD89
#define ACI_L2CAP_COC_RECONF			                0xFD8A
#define ACI_L2CAP_COC_RECONF_CONFIRM			        0xFD8B
#define ACI_L2CAP_COC_DISCONNECT			        0xFD8C
#define ACI_L2CAP_COC_FLOW_CONTROL			        0xFD8D
#define ACI_L2CAP_COC_TX_DATA			                0xFD8E

/* ------------------------------------------------------------------------- */

/* HCI events */
#define HCI_DISCONNECTION_COMPLETE_EVENT			0x05
#define HCI_ENCRYPTION_CHANGE_EVENT			        0x08
#define HCI_READ_REMOTE_VERSION_INFORMATION_COMPLETE_EVENT	0x0C
#define HCI_COMMAND_COMPLETE_EVENT			        0x0E
#define HCI_COMMAND_STATUS_EVENT			        0x0F
#define HCI_HARDWARE_ERROR_EVENT			        0x10
#define HCI_NUMBER_OF_COMPLETED_PACKETS_EVENT			0x13
#define HCI_ENCRYPTION_KEY_REFRESH_COMPLETE_EVENT		0x30
#define HCI_LE_META_EVENT                                       0x3E
#define HCI_VENDOR_SPECIFIC_EVENT                               0xFF

/* HCI LE events */
#define HCI_LE_CONNECTION_COMPLETE_EVENT			0x01
#define HCI_LE_ADVERTISING_REPORT_EVENT			        0x02
#define HCI_LE_CONNECTION_UPDATE_COMPLETE_EVENT			0x03
#define HCI_LE_READ_REMOTE_FEATURES_COMPLETE_EVENT		0x04
#define HCI_LE_LONG_TERM_KEY_REQUEST_EVENT			0x05
#define HCI_LE_DATA_LENGTH_CHANGE_EVENT			        0x07
#define HCI_LE_READ_LOCAL_P256_PUBLIC_KEY_COMPLETE_EVENT	0x08
#define HCI_LE_GENERATE_DHKEY_COMPLETE_EVENT			0x09
#define HCI_LE_ENHANCED_CONNECTION_COMPLETE_EVENT		0x0A
#define HCI_LE_DIRECT_ADVERTISING_REPORT_EVENT			0x0B
#define HCI_LE_PHY_UPDATE_COMPLETE_EVENT			0x0C
#define HCI_LE_EXTENDED_ADVERTISING_REPORT_EVENT		0x0D
#define HCI_LE_SCAN_TIMEOUT_EVENT			        0x11
#define HCI_LE_ADVERTISING_SET_TERMINATED_EVENT			0x12
#define HCI_LE_SCAN_REQUEST_RECEIVED_EVENT			0x13
#define HCI_LE_CHANNEL_SELECTION_ALGORITHM_EVENT		0x14

/* ACI HAL events */
#define ACI_HAL_END_OF_RADIO_ACTIVITY_EVENT			0x0004
#define ACI_HAL_SCAN_REQ_REPORT_EVENT			        0x0005
#define ACI_HAL_FW_ERROR_EVENT			                0x0006

/* ACI GAP events */
#define ACI_GAP_LIMITED_DISCOVERABLE_EVENT			0x0400
#define ACI_GAP_PAIRING_COMPLETE_EVENT			        0x0401
#define ACI_GAP_PASS_KEY_REQ_EVENT			        0x0402
#define ACI_GAP_AUTHORIZATION_REQ_EVENT			        0x0403
#define ACI_GAP_SLAVE_SECURITY_INITIATED_EVENT			0x0404
#define ACI_GAP_BOND_LOST_EVENT			                0x0405
#define ACI_GAP_PROC_COMPLETE_EVENT			        0x0407
#define ACI_GAP_ADDR_NOT_RESOLVED_EVENT			        0x0408
#define ACI_GAP_NUMERIC_COMPARISON_VALUE_EVENT			0x0409
#define ACI_GAP_KEYPRESS_NOTIFICATION_EVENT			0x040A

/* ACI L2CAP events */
#define ACI_L2CAP_CONNECTION_UPDATE_RESP_EVENT			0x0800
#define ACI_L2CAP_PROC_TIMEOUT_EVENT			        0x0801
#define ACI_L2CAP_CONNECTION_UPDATE_REQ_EVENT			0x0802
#define ACI_L2CAP_COMMAND_REJECT_EVENT			        0x080A
#define ACI_L2CAP_COC_CONNECT_EVENT			        0x0810
#define ACI_L2CAP_COC_CONNECT_CONFIRM_EVENT			0x0811
#define ACI_L2CAP_COC_RECONF_EVENT			        0x0812
#define ACI_L2CAP_COC_RECONF_CONFIRM_EVENT			0x0813
#define ACI_L2CAP_COC_DISCONNECT_EVENT			        0x0814
#define ACI_L2CAP_COC_FLOW_CONTROL_EVENT			0x0815
#define ACI_L2CAP_COC_RX_DATA_EVENT			        0x0816
#define ACI_L2CAP_COC_TX_POOL_AVAILABLE_EVENT			0x0817

/* ACI GATT/ATT events */
#define ACI_GATT_ATTRIBUTE_MODIFIED_EVENT			0x0C01
#define ACI_GATT_PROC_TIMEOUT_EVENT			        0x0C02
#define ACI_ATT_EXCHANGE_MTU_RESP_EVENT			        0x0C03
#define ACI_ATT_FIND_INFO_RESP_EVENT			        0x0C04
#define ACI_ATT_FIND_BY_TYPE_VALUE_RESP_EVENT			0x0C05
#define ACI_ATT_READ_BY_TYPE_RESP_EVENT			        0x0C06
#define ACI_ATT_READ_RESP_EVENT			                0x0C07
#define ACI_ATT_READ_BLOB_RESP_EVENT			        0x0C08
#define ACI_ATT_READ_MULTIPLE_RESP_EVENT			0x0C09
#define ACI_ATT_READ_BY_GROUP_TYPE_RESP_EVENT			0x0C0A
#define ACI_ATT_PREPARE_WRITE_RESP_EVENT			0x0C0C
#define ACI_ATT_EXEC_WRITE_RESP_EVENT			        0x0C0D
#define ACI_GATT_INDICATION_EVENT			        0x0C0E
#define ACI_GATT_NOTIFICATION_EVENT			        0x0C0F
#define ACI_GATT_PROC_COMPLETE_EVENT			        0x0C10
#define ACI_GATT_ERROR_RESP_EVENT			        0x0C11
#define ACI_GATT_DISC_READ_CHAR_BY_UUID_RESP_EVENT		0x0C12
#define ACI_GATT_WRITE_PERMIT_REQ_EVENT			        0x0C13
#define ACI_GATT_READ_PERMIT_REQ_EVENT			        0x0C14
#define ACI_GATT_READ_MULTI_PERMIT_REQ_EVENT			0x0C15
#define ACI_GATT_TX_POOL_AVAILABLE_EVENT			0x0C16
#define ACI_GATT_SERVER_CONFIRMATION_EVENT			0x0C17
#define ACI_GATT_PREPARE_WRITE_PERMIT_REQ_EVENT			0x0C18
#define ACI_GATT_READ_EXT_EVENT			                0x0C1D
#define ACI_GATT_INDICATION_EXT_EVENT			        0x0C1E
#define ACI_GATT_NOTIFICATION_EXT_EVENT			        0x0C1F

/* ------------------------------------------------------------------------- */

/* ACI GAP vendor specific event codes
 */

/* ACI_GAP_LIMITED_DISCOVERABLE_EVENT code: */
#define ACI_GAP_LIMITED_DISCOVERABLE_VSEVT_CODE         0x0400U

/* ACI_GAP_PAIRING_COMPLETE_EVENT code: */
#define ACI_GAP_PAIRING_COMPLETE_VSEVT_CODE             0x0401U

/* ACI_GAP_PASS_KEY_REQ_EVENT code: */
#define ACI_GAP_PASS_KEY_REQ_VSEVT_CODE                 0x0402U

/* ACI_GAP_AUTHORIZATION_REQ_EVENT code: */
#define ACI_GAP_AUTHORIZATION_REQ_VSEVT_CODE            0x0403U

/* ACI_GAP_SLAVE_SECURITY_INITIATED_EVENT code: */
#define ACI_GAP_SLAVE_SECURITY_INITIATED_VSEVT_CODE     0x0404U

/* ACI_GAP_BOND_LOST_EVENT code: */
#define ACI_GAP_BOND_LOST_VSEVT_CODE                    0x0405U

/* ACI_GAP_PROC_COMPLETE_EVENT code: */
#define ACI_GAP_PROC_COMPLETE_VSEVT_CODE                0x0407U

/* ACI_GAP_ADDR_NOT_RESOLVED_EVENT code: */
#define ACI_GAP_ADDR_NOT_RESOLVED_VSEVT_CODE            0x0408U

/* ACI_GAP_NUMERIC_COMPARISON_VALUE_EVENT code: */
#define ACI_GAP_NUMERIC_COMPARISON_VALUE_VSEVT_CODE     0x0409U

/* ACI_GAP_KEYPRESS_NOTIFICATION_EVENT code: */
#define ACI_GAP_KEYPRESS_NOTIFICATION_VSEVT_CODE        0x040AU

/* ACI GATT/ATT vendor specific event codes
 */

/* ACI_GATT_ATTRIBUTE_MODIFIED_EVENT code: */
#define ACI_GATT_ATTRIBUTE_MODIFIED_VSEVT_CODE          0x0C01U

/* ACI_GATT_PROC_TIMEOUT_EVENT code: */
#define ACI_GATT_PROC_TIMEOUT_VSEVT_CODE                0x0C02U

/* ACI_ATT_EXCHANGE_MTU_RESP_EVENT code: */
#define ACI_ATT_EXCHANGE_MTU_RESP_VSEVT_CODE            0x0C03U

/* ACI_ATT_FIND_INFO_RESP_EVENT code: */
#define ACI_ATT_FIND_INFO_RESP_VSEVT_CODE               0x0C04U

/* ACI_ATT_FIND_BY_TYPE_VALUE_RESP_EVENT code: */
#define ACI_ATT_FIND_BY_TYPE_VALUE_RESP_VSEVT_CODE      0x0C05U

/* ACI_ATT_READ_BY_TYPE_RESP_EVENT code: */
#define ACI_ATT_READ_BY_TYPE_RESP_VSEVT_CODE            0x0C06U

/* ACI_ATT_READ_RESP_EVENT code: */
#define ACI_ATT_READ_RESP_VSEVT_CODE                    0x0C07U

/* ACI_ATT_READ_BLOB_RESP_EVENT code: */
#define ACI_ATT_READ_BLOB_RESP_VSEVT_CODE               0x0C08U

/* ACI_ATT_READ_MULTIPLE_RESP_EVENT code: */
#define ACI_ATT_READ_MULTIPLE_RESP_VSEVT_CODE           0x0C09U

/* ACI_ATT_READ_BY_GROUP_TYPE_RESP_EVENT code: */
#define ACI_ATT_READ_BY_GROUP_TYPE_RESP_VSEVT_CODE      0x0C0AU

/* ACI_ATT_PREPARE_WRITE_RESP_EVENT code: */
#define ACI_ATT_PREPARE_WRITE_RESP_VSEVT_CODE           0x0C0CU

/* ACI_ATT_EXEC_WRITE_RESP_EVENT code: */
#define ACI_ATT_EXEC_WRITE_RESP_VSEVT_CODE              0x0C0DU

/* ACI_GATT_INDICATION_EVENT code: */
#define ACI_GATT_INDICATION_VSEVT_CODE                  0x0C0EU

/* ACI_GATT_NOTIFICATION_EVENT code: */
#define ACI_GATT_NOTIFICATION_VSEVT_CODE                0x0C0FU

/* ACI_GATT_PROC_COMPLETE_EVENT code: */
#define ACI_GATT_PROC_COMPLETE_VSEVT_CODE               0x0C10U

/* ACI_GATT_ERROR_RESP_EVENT code: */
#define ACI_GATT_ERROR_RESP_VSEVT_CODE                  0x0C11U

/* ACI_GATT_DISC_READ_CHAR_BY_UUID_RESP_EVENT code: */
#define ACI_GATT_DISC_READ_CHAR_BY_UUID_RESP_VSEVT_CODE 0x0C12U

/* ACI_GATT_WRITE_PERMIT_REQ_EVENT code: */
#define ACI_GATT_WRITE_PERMIT_REQ_VSEVT_CODE            0x0C13U

/* ACI_GATT_READ_PERMIT_REQ_EVENT code: */
#define ACI_GATT_READ_PERMIT_REQ_VSEVT_CODE             0x0C14U

/* ACI_GATT_READ_MULTI_PERMIT_REQ_EVENT code: */
#define ACI_GATT_READ_MULTI_PERMIT_REQ_VSEVT_CODE       0x0C15U

/* ACI_GATT_TX_POOL_AVAILABLE_EVENT code: */
#define ACI_GATT_TX_POOL_AVAILABLE_VSEVT_CODE           0x0C16U

/* ACI_GATT_SERVER_CONFIRMATION_EVENT code: */
#define ACI_GATT_SERVER_CONFIRMATION_VSEVT_CODE         0x0C17U

/* ACI_GATT_PREPARE_WRITE_PERMIT_REQ_EVENT code: */
#define ACI_GATT_PREPARE_WRITE_PERMIT_REQ_VSEVT_CODE    0x0C18U

/* ACI_GATT_READ_EXT_EVENT code: */
#define ACI_GATT_READ_EXT_VSEVT_CODE                    0x0C1DU

/* ACI_GATT_INDICATION_EXT_EVENT code: */
#define ACI_GATT_INDICATION_EXT_VSEVT_CODE              0x0C1EU

/* ACI_GATT_NOTIFICATION_EXT_EVENT code: */
#define ACI_GATT_NOTIFICATION_EXT_VSEVT_CODE            0x0C1FU

/* ACI L2CAP vendor specific event codes
 */

/* ACI_L2CAP_CONNECTION_UPDATE_RESP_EVENT code: */
#define ACI_L2CAP_CONNECTION_UPDATE_RESP_VSEVT_CODE     0x0800U

/* ACI_L2CAP_PROC_TIMEOUT_EVENT code: */
#define ACI_L2CAP_PROC_TIMEOUT_VSEVT_CODE               0x0801U

/* ACI_L2CAP_CONNECTION_UPDATE_REQ_EVENT code: */
#define ACI_L2CAP_CONNECTION_UPDATE_REQ_VSEVT_CODE      0x0802U

/* ACI_L2CAP_COMMAND_REJECT_EVENT code: */
#define ACI_L2CAP_COMMAND_REJECT_VSEVT_CODE             0x080AU

/* ACI_L2CAP_COC_CONNECT_EVENT code: */
#define ACI_L2CAP_COC_CONNECT_VSEVT_CODE                0x0810U

/* ACI_L2CAP_COC_CONNECT_CONFIRM_EVENT code: */
#define ACI_L2CAP_COC_CONNECT_CONFIRM_VSEVT_CODE        0x0811U

/* ACI_L2CAP_COC_RECONF_EVENT code: */
#define ACI_L2CAP_COC_RECONF_VSEVT_CODE                 0x0812U

/* ACI_L2CAP_COC_RECONF_CONFIRM_EVENT code: */
#define ACI_L2CAP_COC_RECONF_CONFIRM_VSEVT_CODE         0x0813U

/* ACI_L2CAP_COC_DISCONNECT_EVENT code: */
#define ACI_L2CAP_COC_DISCONNECT_VSEVT_CODE             0x0814U

/* ACI_L2CAP_COC_FLOW_CONTROL_EVENT code: */
#define ACI_L2CAP_COC_FLOW_CONTROL_VSEVT_CODE           0x0815U

/* ACI_L2CAP_COC_RX_DATA_EVENT code: */
#define ACI_L2CAP_COC_RX_DATA_VSEVT_CODE                0x0816U

/* ACI_L2CAP_COC_TX_POOL_AVAILABLE_EVENT code: */
#define ACI_L2CAP_COC_TX_POOL_AVAILABLE_VSEVT_CODE      0x0817U

/* ACI HAL vendor specific event codes
 */

/* ACI_HAL_END_OF_RADIO_ACTIVITY_EVENT code: */
#define ACI_HAL_END_OF_RADIO_ACTIVITY_VSEVT_CODE        0x0004U

/* ACI_HAL_SCAN_REQ_REPORT_EVENT code: */
#define ACI_HAL_SCAN_REQ_REPORT_VSEVT_CODE              0x0005U

/* ACI_HAL_FW_ERROR_EVENT code: */
#define ACI_HAL_FW_ERROR_VSEVT_CODE                     0x0006U

/* ------------------------------------------------------------------------- */

/* Status codes */

/* Returned when the command has completed with success
 */
#define BLE_STATUS_SUCCESS                              0x00U

/* The remote device in in the Blacklist and the pairing operation it requested
 * cannot be performed.
 */
#define BLE_STATUS_DEV_IN_BLACKLIST                     0x59U

/* CSRK not found during validation of an incoming signed packet
 */
#define BLE_STATUS_CSRK_NOT_FOUND                       0x5AU

/* IRK not found (Currently not used)
 */
#define BLE_STATUS_IRK_NOT_FOUND                        0x5BU

/* A search for a specific remote device was unsuccessful because no entry
 * exists either into NVM Database or in volatile database. 
 */
#define BLE_STATUS_DEV_NOT_FOUND                        0x5CU

/* The security database is full and no more records can be added.
 */
#define BLE_STATUS_SEC_DB_FULL                          0x5DU

/* The remote device is not bonded, and no operations related to bonded devices
 * may be performed (e.g. writing Gatt Client data).
 */
#define BLE_STATUS_DEV_NOT_BONDED                       0x5EU

/* The encryption key size used for encrypting the link is insufficient\n
 */
#define BLE_STATUS_INSUFFICIENT_ENC_KEYSIZE             0x5FU

/* The attribute handle is invalid.
 */
#define BLE_STATUS_INVALID_HANDLE                       0x60U

/* There aren't sufficient Attributes handles available for allocation during
 * creation of Services, Characteristics or Descriptors.
 */
#define BLE_STATUS_OUT_OF_HANDLE                        0x61U

/* The requested GATT operation is not allowed in this context/status or using 
 * the provided parameters. 
 * This is a specific GATT error, different from generic Not Allowed error, 
 * because it refers to specific GATT specifications/rules.
 */
#define BLE_STATUS_INVALID_OPERATION                    0x62U

/* The characteristic has already been added to the database.
 */
#define BLE_STATUS_CHARAC_ALREADY_EXISTS                0x63U

/* The requested operation failed for a temporary lack of resources
 * (e.g. packet pool or timers), but it may be retried later when resources may
 * become available (packets or timers may have been released by other
 * consumers).
 */
#define BLE_STATUS_INSUFFICIENT_RESOURCES               0x64U

/* Notification/Indication can't be sent to the requested remote device because
 * it doesn't satisfy the needed security permission.
 */ 
#define BLE_STATUS_SEC_PERMISSION_ERROR                 0x65U

/* The address of the device could not be resolved using the IRK stored\n
 */
#define BLE_STATUS_ADDRESS_NOT_RESOLVED                 0x70U

/* Returned when no valid slots are available
 * (e.g. when there are no available state machines).
 */
#define BLE_STATUS_NO_VALID_SLOT                        0x82U

/* The only slot available is not long enough to satisfy scan window request.
 */
#define BLE_STATUS_SCAN_WINDOW_SHORT                    0x83U

/* Returned when the maximum requested interval to be allocated is shorter
 * then the current anchor period and there is no submultiple for the
 * current anchor period that is between the minimum and the maximum requested
 * intervals.
 */
#define BLE_STATUS_NEW_INTERVAL_FAILED                  0x84U

/* Returned when the maximum requested interval to be allocated is greater
 * than the current anchor period and there is no multiple of the anchor
 * period that is between the minimum and the maximum requested intervals.
 */
#define BLE_STATUS_INTERVAL_TOO_LARGE                   0x85U

/* Returned when the current anchor period or a new one can be found that
 * is compatible to the interval range requested by the new slot but the
 * maximum available length that can be allocated is less than the minimum
 * requested slot length.
 */
#define BLE_STATUS_LENGTH_FAILED                        0x86U

/* The Host failed while performing the requested operation.
 */
#define BLE_STATUS_FAILED                               0x91U

/* Invalid parameters in Host commands
 */
#define BLE_STATUS_INVALID_PARAMS                       0x92U

/* The Host is already processing another request received in advance.
 */
#define BLE_STATUS_BUSY                                 0x93U

/* The operation requested cannot be completed immediately by the Host
 * (usually because of lack of resources). 
 * The operation is generally put on hold by the caller and it's usually 
 * retried on later time.
 */
#define BLE_STATUS_PENDING                              0x95U

/* The requested operation violates the logic of the called layer/function or
 * the format of the data to be processed during the operation.
 */
#define BLE_STATUS_ERROR                                0x97U

/* The requested operation failed because of lack of memory.
 * Out of memory shall be returned for situations where memory will never 
 * become available again (e.g. ATT database)
 */
#define BLE_STATUS_OUT_OF_MEMORY                        0x98U

/* Returned when a timeout occurs at BLE application interface
 */
#define BLE_STATUS_TIMEOUT                              0xFFU

/* ------------------------------------------------------------------------- */

/* Characteristic value lengths
 */
#define DEVICE_NAME_CHARACTERISTIC_LEN                  8
#define APPEARANCE_CHARACTERISTIC_LEN                   2
#define PERIPHERAL_PRIVACY_CHARACTERISTIC_LEN           1
#define RECONNECTION_ADDR_CHARACTERISTIC_LEN            6
#define PERIPHERAL_PREF_CONN_PARAMS_CHARACTERISTIC_LEN  8

/* Adv. lengths
 */
#define MAX_ADV_DATA_LEN                              31U
#define BD_ADDR_SIZE                                   6U

/* AD types for adv. data and scan response data
 */
#define AD_TYPE_FLAGS                                0x01U
#define AD_TYPE_16_BIT_SERV_UUID                     0x02U
#define AD_TYPE_16_BIT_SERV_UUID_CMPLT_LIST          0x03U
#define AD_TYPE_32_BIT_SERV_UUID                     0x04U
#define AD_TYPE_32_BIT_SERV_UUID_CMPLT_LIST          0x05U
#define AD_TYPE_128_BIT_SERV_UUID                    0x06U
#define AD_TYPE_128_BIT_SERV_UUID_CMPLT_LIST         0x07U
#define AD_TYPE_SHORTENED_LOCAL_NAME                 0x08U
#define AD_TYPE_COMPLETE_LOCAL_NAME                  0x09U
#define AD_TYPE_TX_POWER_LEVEL                       0x0AU
#define AD_TYPE_CLASS_OF_DEVICE                      0x0DU
#define AD_TYPE_SEC_MGR_TK_VALUE                     0x10U
#define AD_TYPE_SEC_MGR_OOB_FLAGS                    0x11U
#define AD_TYPE_SLAVE_CONN_INTERVAL                  0x12U
#define AD_TYPE_SERV_SOLICIT_16_BIT_UUID_LIST        0x14U
#define AD_TYPE_SERV_SOLICIT_128_BIT_UUID_LIST       0x15U
#define AD_TYPE_SERVICE_DATA                         0x16U
#define AD_TYPE_APPEARANCE                           0x19U
#define AD_TYPE_ADVERTISING_INTERVAL                 0x1AU
#define AD_TYPE_LE_ROLE                              0x1CU
#define AD_TYPE_SERV_SOLICIT_32_BIT_UUID_LIST        0x1FU
#define AD_TYPE_URI                                  0x24U
#define AD_TYPE_MANUFACTURER_SPECIFIC_DATA           0xFFU

/* Flag bits for Flags AD Type
 */
#define FLAG_BIT_LE_LIMITED_DISCOVERABLE_MODE        0x01
#define FLAG_BIT_LE_GENERAL_DISCOVERABLE_MODE        0x02
#define FLAG_BIT_BR_EDR_NOT_SUPPORTED                0x04
#define FLAG_BIT_LE_BR_EDR_CONTROLLER                0x08
#define FLAG_BIT_LE_BR_EDR_HOST                      0x10

/* Appearance values
 */
#define GAP_APPEARANCE_UNKNOWN                                 0x0000
#define GAP_APPEARANCE_GENERIC_PHONE                           0x0040
#define GAP_APPEARANCE_GENERIC_COMPUTER                        0x0080
#define GAP_APPEARANCE_GENERIC_WATCH                           0x00C0
#define GAP_APPEARANCE_WATCH_SPORT_WATCH                       0x00C1
#define GAP_APPEARANCE_GENERIC_CLOCK                           0x0100
#define GAP_APPEARANCE_GENERIC_DISPLAY                         0x0140
#define GAP_APPEARANCE_GENERIC_REMOTE_CONTROL                  0x0180
#define GAP_APPEARANCE_GENERIC_EYE_GLASSES                     0x01C0
#define GAP_APPEARANCE_GENERIC_TAG                             0x0200
#define GAP_APPEARANCE_GENERIC_KEYRING                         0x0240
#define GAP_APPEARANCE_GENERIC_MEDIA_PLAYER                    0x0280
#define GAP_APPEARANCE_GENERIC_BARCODE_SCANNER                 0x02C0
#define GAP_APPEARANCE_GENERIC_THERMOMETER                     0x0300
#define GAP_APPEARANCE_THERMOMETER_EAR                         0x0301
#define GAP_APPEARANCE_GENERIC_HEART_RATE_SENSOR               0x0340
#define GAP_APPEARANCE_HEART_RATE_SENSOR_HEART_RATE_BELT       0x0341
#define GAP_APPEARANCE_GENERIC_BLOOD_PRESSURE                  0x0380
#define GAP_APPEARANCE_BLOOD_PRESSURE_ARM                      0x0381
#define GAP_APPEARANCE_BLOOD_PRESSURE_WRIST                    0x0382
#define GAP_APPEARANCE_HUMAN_INTERFACE_DEVICE                  0x03C0
#define GAP_APPEARANCE_KEYBOARD                                0x03C1
#define GAP_APPEARANCE_MOUSE                                   0x03C2
#define GAP_APPEARANCE_JOYSTICK                                0x03C3
#define GAP_APPEARANCE_GAMEPAD                                 0x03C4
#define GAP_APPEARANCE_DIGITIZER_TABLET                        0x03C5
#define GAP_APPEARANCE_CARD_READER                             0x03C6
#define GAP_APPEARANCE_DIGITAL_PEN                             0x03C7
#define GAP_APPEARANCE_BARCODE_SCANNER                         0x03C8
#define GAP_APPEARANCE_GENERIC_GLUCOSE_METER                   0x0400
#define GAP_APPEARANCE_GENERIC_RUNNING_WALKING_SENSOR          0x0440
#define GAP_APPEARANCE_RUNNING_WALKING_IN_SHOE                 0x0441
#define GAP_APPEARANCE_RUNNING_WALKING_ON_SHOE                 0x0442
#define GAP_APPEARANCE_RUNNING_WALKING_ON_HIP                  0x0443
#define GAP_APPEARANCE_GENERIC_CYCLING                         0x0480
#define GAP_APPEARANCE_CYCLING_CYCLING_COMPUTER                0x0481
#define GAP_APPEARANCE_CYCLING_SPEED_SENSOR                    0x0482
#define GAP_APPEARANCE_CYCLING_CADENCE_SENSOR                  0x0483
#define GAP_APPEARANCE_CYCLING_POWER_SENSOR                    0x0484
#define GAP_APPEARANCE_CYCLING_SPEED_AND_CADENCE_SENSOR        0x0485
#define GAP_APPEARANCE_GENERIC_PULSE_OXYMETER                  0x0C40
#define GAP_APPEARANCE_FINGERTIP                               0x0C41
#define GAP_APPEARANCE_WRIST_WORN                              0x0C42
#define GAP_APPEARANCE_GENERIC_WEIGHT_SCALE                    0x0C80
#define GAP_APPEARANCE_GENERIC_OUTDOOR_SPORT_ACTIVITY          0x1440
#define GAP_APPEARANCE_LOCATION_DISPLAY_DEVICE                 0x1441
#define GAP_APPEARANCE_LOCATION_AND_NAVIGATION_DISPLAY_DEVICE  0x1442
#define GAP_APPEARANCE_LOCATION_POD                            0x1443
#define GAP_APPEARANCE_LOCATION_AND_NAVIGATION_POD             0x1444
#define GAP_APPEARANCE_GENERIC_ENVIRONMENTAL_SENSOR            0x1640

/* Privacy flag values
 */
#define PRIVACY_ENABLED                               0x02
#define PRIVACY_DISABLED                              0x00

/* Intervals in terms of 625 micro sec
 */
#define DIR_CONN_ADV_INT_MIN                        0x190U  /* 250 ms */
#define DIR_CONN_ADV_INT_MAX                        0x320U  /* 500 ms */
#define UNDIR_CONN_ADV_INT_MIN                      0x800U  /* 1.28 s */
#define UNDIR_CONN_ADV_INT_MAX                     0x1000U  /* 2.56 s */
#define LIM_DISC_ADV_INT_MIN                        0x190U  /* 250 ms */
#define LIM_DISC_ADV_INT_MAX                        0x320U  /* 500 ms */
#define GEN_DISC_ADV_INT_MIN                        0x800U  /* 1.28 s */
#define GEN_DISC_ADV_INT_MAX                       0x1000U  /* 2.56 s */

/* GAP Roles
 */
#define GAP_PERIPHERAL_ROLE                          0x01U
#define GAP_BROADCASTER_ROLE                         0x02U
#define GAP_CENTRAL_ROLE                             0x04U
#define GAP_OBSERVER_ROLE                            0x08U

/* GAP procedure codes
 * Procedure codes for ACI_GAP_PROC_COMPLETE_EVENT event
 * and ACI_GAP_TERMINATE_GAP_PROC command.
 */
#define GAP_LIMITED_DISCOVERY_PROC                   0x01U
#define GAP_GENERAL_DISCOVERY_PROC                   0x02U
#define GAP_NAME_DISCOVERY_PROC                      0x04U
#define GAP_AUTO_CONNECTION_ESTABLISHMENT_PROC       0x08U
#define GAP_GENERAL_CONNECTION_ESTABLISHMENT_PROC    0x10U
#define GAP_SELECTIVE_CONNECTION_ESTABLISHMENT_PROC  0x20U
#define GAP_DIRECT_CONNECTION_ESTABLISHMENT_PROC     0x40U
#define GAP_OBSERVATION_PROC                         0x80U

/* GAP Address Type
 */
#define GAP_PUBLIC_ADDR                              0x00U
#define GAP_STATIC_RANDOM_ADDR                       0x01U
#define GAP_RESOLVABLE_PRIVATE_ADDR                  0x02U
#define GAP_NON_RESOLVABLE_PRIVATE_ADDR              0x03U

/* ------------------------------------------------------------------------- */

/* IO capabilities
 */
#define IO_CAP_DISPLAY_ONLY                        0x00U
#define IO_CAP_DISPLAY_YES_NO                      0x01U
#define IO_CAP_KEYBOARD_ONLY                       0x02U
#define IO_CAP_NO_INPUT_NO_OUTPUT                  0x03U
#define IO_CAP_KEYBOARD_DISPLAY                    0x04U

/* Authentication requirements
 */
#define NO_BONDING                                 0x00U
#define BONDING                                    0x01U

/* MITM protection requirements
 */
#define MITM_PROTECTION_NOT_REQUIRED               0x00U
#define MITM_PROTECTION_REQUIRED                   0x01U

/* Secure connection requirements
 */
#define SC_IS_NOT_SUPPORTED                        0x00U
#define SC_IS_SUPPORTED                            0x01U
#define SC_IS_MANDATORY                            0x02U

/* Out-Of-Band data
 */
#define OOB_AUTH_DATA_ABSENT                       0x00U
#define OOB_AUTH_DATA_PRESENT                      0x01U

/* Authorization requirements
 */
#define AUTHORIZATION_NOT_REQUIRED                 0x00U
#define AUTHORIZATION_REQUIRED                     0x01U

/* Connection authorization
 */
#define CONNECTION_AUTHORIZED                      0x01U
#define CONNECTION_REJECTED                        0x02U

/* Keypress notification support
 */
#define KEYPRESS_NOT_SUPPORTED                     0x00U
#define KEYPRESS_SUPPORTED                         0x01U

/* Use fixed pin
 */
#define USE_FIXED_PIN_FOR_PAIRING_ALLOWED          0x00U
#define USE_FIXED_PIN_FOR_PAIRING_FORBIDDEN        0x01U

/* SMP pairing status (ACI_GAP_PAIRING_COMPLETE_EVENT)
 */
#define SMP_PAIRING_STATUS_SUCCESS                 0x00U
#define SMP_PAIRING_STATUS_SMP_TIMEOUT             0x01U
#define SMP_PAIRING_STATUS_PAIRING_FAILED          0x02U
#define SMP_PAIRING_STATUS_ENCRYPT_FAILED          0x03U

/* SMP pairing failed reason code (ACI_GAP_PAIRING_COMPLETE_EVENT)
 */
#define OOB_NOT_AVAILABLE                          0x02
#define AUTH_REQ_CANNOT_BE_MET                     0x03
#define CONFIRM_VALUE_FAILED                       0x04
#define PAIRING_NOT_SUPPORTED                      0x05
#define INSUFF_ENCRYPTION_KEY_SIZE                 0x06
#define CMD_NOT_SUPPORTED                          0x07
#define UNSPECIFIED_REASON                         0x08
#define VERY_EARLY_NEXT_ATTEMPT                    0x09
#define SM_INVALID_PARAMS                          0x0A
#define SMP_SC_DHKEY_CHECK_FAILED                  0x0B
#define SMP_SC_NUMCOMPARISON_FAILED                0x0C

/* Passkey input type detected (ACI_GAP_PASSKEY_INPUT)
 */
#define PASSKEY_ENTRY_STARTED                      0x00U
#define PASSKEY_DIGIT_ENTERED                      0x01U
#define PASSKEY_DIGIT_ERASED                       0x02U
#define PASSKEY_CLEARED                            0x03U
#define PASSKEY_ENTRY_COMPLETED                    0x04U

/* Numeric Comparison Confirm Value
 * (ACI_GAP_NUMERIC_COMPARISON_VALUE_CONFIRM_YESNO)
 */
#define NUMERIC_COMPARISON_CONFIRM_NO              0x00U
#define NUMERIC_COMPARISON_CONFIRM_YES             0x01U

/* OOB Device Type (ACI_GAP_SET_OOB_DATA)
 */
#define OOB_DEVICE_TYPE_LOCAL                      0x00U
#define OOB_DEVICE_TYPE_REMOTE                     0x01U

/* OOB Data Type (ACI_GAP_GET_OOB_DATA / ACI_GAP_SET_OOB_DATA)
 */
#define OOB_DATA_TYPE_LP_TK                        0x00U
#define OOB_DATA_TYPE_SC_RANDOM                    0x01U
#define OOB_DATA_TYPE_SC_CONFIRM                   0x02U

/* ------------------------------------------------------------------------- */

/* GATT UUIDs
 */
#define PRIMARY_SERVICE_UUID                     0x2800U
#define SECONDARY_SERVICE_UUID                   0x2801U
#define INCLUDE_SERVICE_UUID                     0x2802U
#define CHARACTERISTIC_UUID                      0x2803U
#define CHAR_EXTENDED_PROP_DESC_UUID             0x2900U
#define CHAR_USER_DESC_UUID                      0x2901U
#define CHAR_CLIENT_CONFIG_DESC_UUID             0x2902U
#define CHAR_SERVER_CONFIG_DESC_UUID             0x2903U
#define CHAR_FORMAT_DESC_UUID                    0x2904U
#define CHAR_AGGR_FMT_DESC_UUID                  0x2905U
#define GATT_SERVICE_UUID                        0x1801U
#define SERVICE_CHANGED_UUID                     0x2A05U

/* GAP UUIDs
 */
#define GAP_SERVICE_UUID                         0x1800U
#define DEVICE_NAME_UUID                         0x2A00U
#define APPEARANCE_UUID                          0x2A01U
#define PERIPHERAL_PRIVACY_FLAG_UUID             0x2A02U
#define RECONNECTION_ADDR_UUID                   0x2A03U
#define PERIPHERAL_PREFERRED_CONN_PARAMS_UUID    0x2A04U
#define CENTRAL_ADDRESS_RESOLUTION_UUID          0x2AA6U
#define RESOLVABLE_PRIVATE_ADDRESS_ONLY_UUID     0x2AC9U

/* Access permissions for an attribute
 */
#define ATTR_NO_ACCESS                           0x00U
#define ATTR_ACCESS_READ_ONLY                    0x01U
#define ATTR_ACCESS_WRITE_REQ_ONLY               0x02U
#define ATTR_ACCESS_READ_WRITE                   0x03U
#define ATTR_ACCESS_WRITE_WITHOUT_RESPONSE       0x04U
#define ATTR_ACCESS_SIGNED_WRITE_ALLOWED         0x08U
#define ATTR_ACCESS_WRITE_ANY                    0x0EU
#define ATTR_ACCESS_ANY                          0x0FU

/* Characteristic properties
 */
#define CHAR_PROP_NONE                           0x00U
#define CHAR_PROP_BROADCAST                      0x01U
#define CHAR_PROP_READ                           0x02U
#define CHAR_PROP_WRITE_WITHOUT_RESP             0x04U
#define CHAR_PROP_WRITE                          0x08U
#define CHAR_PROP_NOTIFY                         0x10u
#define CHAR_PROP_INDICATE                       0x20U
#define CHAR_PROP_SIGNED_WRITE                   0x40U
#define CHAR_PROP_EXT                            0x80U

/* Security permissions for an attribute
 */
#define ATTR_PERMISSION_NONE           0x00U /* No security. */
#define ATTR_PERMISSION_AUTHEN_READ    0x01U /* Need authentication to read */
#define ATTR_PERMISSION_AUTHOR_READ    0x02U /* Need authorization to read */
#define ATTR_PERMISSION_ENCRY_READ     0x04U /* Need encryption to read */
#define ATTR_PERMISSION_AUTHEN_WRITE   0x08U /* Need authentication to write */
#define ATTR_PERMISSION_AUTHOR_WRITE   0x10U /* Need authorization to write */
#define ATTR_PERMISSION_ENCRY_WRITE    0x20U /* Need encryption to write */

/* Type of UUID (16 bit or 128 bit)
 */
#define UUID_TYPE_16                             0x01U
#define UUID_TYPE_128                            0x02U

/* Type of service (primary or secondary)
 */
#define PRIMARY_SERVICE                          0x01U
#define SECONDARY_SERVICE                        0x02U

/* Gatt Event Mask
 * Type of event generated by GATT server
 * See aci_gatt_add_char.
 */
#define GATT_DONT_NOTIFY_EVENTS                       0x00 
#define GATT_NOTIFY_ATTRIBUTE_WRITE                   0x01
#define GATT_NOTIFY_WRITE_REQ_AND_WAIT_FOR_APPL_RESP  0x02
#define GATT_NOTIFY_READ_REQ_AND_WAIT_FOR_APPL_RESP   0x04

/* Type of characteristic length (see ACI_GATT_ADD_CHAR)
 */
#define CHAR_VALUE_LEN_CONSTANT                  0x00
#define CHAR_VALUE_LEN_VARIABLE                  0x01

/* Encryption key size
 */
#define MIN_ENCRY_KEY_SIZE                       7U
#define MAX_ENCRY_KEY_SIZE                      16U

/* Format
 */
#define FORMAT_UINT8                             0x04U
#define FORMAT_UINT16                            0x06U
#define FORMAT_SINT16                            0x0EU
#define FORMAT_SINT24                            0x0FU

/* Unit
 */
#define UNIT_UNITLESS                          0x2700
#define UNIT_TEMP_CELSIUS                      0x272F
#define UNIT_PRESSURE_BAR                      0x2780

/* ------------------------------------------------------------------------- */

/* Advertising policy for filtering (white list related)
 * See HCI_LE_SET_ADVERTISING_PARAMETERS
 */
#define NO_WHITE_LIST_USE                      0X00U
#define WHITE_LIST_FOR_ONLY_SCAN               0X01U
#define WHITE_LIST_FOR_ONLY_CONN               0X02U
#define WHITE_LIST_FOR_ALL                     0X03U

/* Advertising channels
 */
#define ADV_CH_37                              0x01
#define ADV_CH_38                              0x02
#define ADV_CH_39                              0x04

/* ------------------------------------------------------------------------- */

/* Offset for configuration values (see ACI_HAL_WRITE_CONFIG_DATA)
 */
#define CONFIG_DATA_PUBADDR_OFFSET             0x00U
#define CONFIG_DATA_ER_OFFSET                  0x08U
#define CONFIG_DATA_IR_OFFSET                  0x18U
#define CONFIG_DATA_RANDOM_ADDRESS_OFFSET      0x2EU
#define CONFIG_DATA_SMP_MODE_OFFSET            0xB0U

/* Length for configuration values (see ACI_HAL_WRITE_CONFIG_DATA)
 */
#define CONFIG_DATA_PUBADDR_LEN                6
#define CONFIG_DATA_ER_LEN                    16
#define CONFIG_DATA_IR_LEN                    16
#define CONFIG_DATA_RANDOM_ADDRESS_LEN         6
#define CONFIG_DATA_SMP_MODE_LEN               1

/* ------------------------------------------------------------------------- */


#endif /* BLE_DEFS_H__ */

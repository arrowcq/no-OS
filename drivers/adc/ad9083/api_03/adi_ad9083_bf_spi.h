/*!
 * @brief     SPI Register Definition Header File, automatically generated by
 *            yoda2h v1.1.2 at 1/2/2020 9:13:37 AM.
 * 
 * @copyright copyright(c) 2018 - Analog Devices Inc.All Rights Reserved.
 *            This software is proprietary to Analog Devices, Inc. and its
 *            licensor. By using this software you agree to the terms of the
 *            associated analog devices software license agreement.
 */

/*! 
 * @addtogroup AD9083_BF
 * @{
 */
#ifndef __ADI_AD9083_BF_SPI_H__
#define __ADI_AD9083_BF_SPI_H__

/*============= I N C L U D E S ============*/
#include "adi_ad9083_config.h"

/*============= D E F I N E S ==============*/
#define REG_SPI_INTERFACE_CONFIG_A_ADDR 0x00000000
#define BF_SOFT_RESET_0_INFO            0x00000000, 0x00000100
#define BF_LSB_FIRST_INFO               0x00000000, 0x00000101
#define BF_ADDR_ASCENSION_0_INFO        0x00000000, 0x00000102
#define BF_ADDR_ASCENSION_M_INFO        0x00000000, 0x00000105
#define BF_LSB_FIRST_M_INFO             0x00000000, 0x00000106
#define BF_SOFT_RESET_M_INFO            0x00000000, 0x00000107

#define REG_SPI_INTERFACE_CONFIG_B_ADDR 0x00000001
#define BF_SINGLE_INSTRUCTION_INFO      0x00000001, 0x00000107

#define REG_DEVICE_CONFIG_ADDR          0x00000002
#define BF_OP_MODE_INFO                 0x00000002, 0x00000200
#define BF_CUST_OP_MODE_INFO            0x00000002, 0x00000202
#define BF_DEVICE_STATUS_INFO           0x00000002, 0x00000404

#define REG_CHIP_TYPE_ADDR              0x00000003
#define BF_CHIP_TYPE_INFO               0x00000003, 0x00000800

#define REG_PROD_ID_LSB_ADDR            0x00000004
#define BF_PROD_ID_INFO                 0x00000004, 0x00001000


#define REG_CHIP_GRADE_ADDR             0x00000006
#define BF_CHIP_SPEED_GRADE_INFO        0x00000006, 0x00000404


#define REG_DEVICE_INDEX1_ADDR          0x00000008
#define BF_DEV_INDEX1_INFO              0x00000008, 0x00000800

#define REG_DEVICE_INDEX2_ADDR          0x00000009
#define BF_DEV_INDEX2_INFO              0x00000009, 0x00000800

#define REG_CHIP_SCRATCH_ADDR           0x0000000A
#define BF_CHIP_SCRATCH_INFO            0x0000000A, 0x00000800


#define REG_VENDOR_ID_LSB_ADDR          0x0000000C
#define BF_CHIP_VENDOR_ID_INFO          0x0000000C, 0x00001000




#define REG_PORB_STAT_ADDR              0x00000020
#define BF_PORB_VDD_ANA_INFO            0x00000020, 0x00000100
#define BF_PORB_VDD_DIG_1P0_INFO        0x00000020, 0x00000101
#define BF_PORB_VDD_SYNCRX_1P8_INFO     0x00000020, 0x00000102
#define BF_PORB_VDDCP_LCPLL_1P0_INFO    0x00000020, 0x00000103
#define BF_PORB_VDDLDO_LCPLL_1P8_INFO   0x00000020, 0x00000104
#define BF_PORB_VDDPHY_SER_1P0_INFO     0x00000020, 0x00000105
#define BF_PORB_VDDSYNTH_LCPLL_1P0_INFO 0x00000020, 0x00000106

#define REG_PORB_MASK_RESET_ADDR        0x00000021
#define BF_PORB_IGNORE_INFO             0x00000021, 0x00000100

#define REG_BLOCK_RESET_ADDR            0x00000024
#define BF_VCOADC_RESET_INFO            0x00000024, 0x00000100
#define BF_CLKTOP_RESET_INFO            0x00000024, 0x00000101
#define BF_TOPREF_RESET_INFO            0x00000024, 0x00000102
#define BF_SERPHY_RESET_INFO            0x00000024, 0x00000103
#define BF_SERPLL_RESET_INFO            0x00000024, 0x00000104
#define BF_DIG_DP_JTX_RESET_INFO        0x00000024, 0x00000105

#define REG_LOW_PWR_PIN_CTRL_ADDR       0x00000030
#define BF_VCOADC_PIN_CTRL_INFO         0x00000030, 0x00000100
#define BF_CLKTOP_PIN_CTRL_INFO         0x00000030, 0x00000101
#define BF_TOPREF_PIN_CTRL_INFO         0x00000030, 0x00000102
#define BF_DIG_DP_PIN_CTRL_INFO         0x00000030, 0x00000103
#define BF_JTX_PIN_CTRL_INFO            0x00000030, 0x00000104
#define BF_SERPHY_PIN_CTRL_INFO         0x00000030, 0x00000105

#define REG_LOW_PWR_PIN_POLARITY_ADDR   0x00000031
#define BF_POL_INFO                     0x00000031, 0x00000200

#define REG_LOW_PWR_CONFIG_ADDR         0x00000032
#define BF_VCOADC_LP_MODE_INFO          0x00000032, 0x00000100
#define BF_CLKTOP_LP_MODE_INFO          0x00000032, 0x00000101
#define BF_TOPREF_LP_MODE_INFO          0x00000032, 0x00000102
#define BF_DIG_DP_LP_MODE_INFO          0x00000032, 0x00000103
#define BF_JTX_LP_MODE_INFO             0x00000032, 0x00000104
#define BF_SERPHY_LP_MODE_INFO          0x00000032, 0x00000105

#define REG_LOW_PWR_PIN_MASK_ADDR       0x00000033
#define BF_VCOADC_LP_PIN_MASK_INFO      0x00000033, 0x00000100
#define BF_CLKTOP_LP_PIN_MASK_INFO      0x00000033, 0x00000101
#define BF_TOPREF_LP_PIN_MASK_INFO      0x00000033, 0x00000102
#define BF_DIG_DP_LP_PIN_MASK_INFO      0x00000033, 0x00000103
#define BF_JTX_LP_PIN_MASK_INFO         0x00000033, 0x00000104
#define BF_SERPHY_LP_PIN_MASK_INFO      0x00000033, 0x00000105

#define REG_LOW_PWR_PIN_STAT_ADDR       0x00000034
#define BF_VCOADC_LP_STAT_INFO          0x00000034, 0x00000100
#define BF_CLKTOP_LP_STAT_INFO          0x00000034, 0x00000101
#define BF_TOPREF_LP_STAT_INFO          0x00000034, 0x00000102
#define BF_DIG_DP_LP_STAT_INFO          0x00000034, 0x00000103
#define BF_JTX_LP_STAT_INFO             0x00000034, 0x00000104
#define BF_SERPHY_LP_STAT_INFO          0x00000034, 0x00000105

#define REG_DIE_ID_ADDR                 0x00000040
#define BF_DIE_ID_INFO                  0x00000040, 0x00000800

#define REG_LAMINATE_ID_ADDR            0x00000041
#define BF_LAMINATE_ID_INFO             0x00000041, 0x00000500

#define REG_SPI_ADDR_DELAY_EN_ADDR      0x00000080
#define BF_SPI_ADDR_DELAY_EN_BIT_INFO   0x00000080, 0x00000100




#endif /* __ADI_AD9083_BF_SPI_H__ */
/*! @} */
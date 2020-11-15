/*
 * Copyright 2019-2020 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/*! @brief Direction type  */
typedef enum _pin_mux_direction
{
  kPIN_MUX_DirectionInput = 0U,         /* Input direction */
  kPIN_MUX_DirectionOutput = 1U,        /* Output direction */
  kPIN_MUX_DirectionInputOrOutput = 2U  /* Input or output direction */
} pin_mux_direction_t;

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/* GPIO_AD_B0_07 (number 101), UART1_RXD/J17[4] */
#define BOARD_INITPINS_UART1_RXD_PERIPHERAL                              LPUART1   /*!< Device name: LPUART1 */
#define BOARD_INITPINS_UART1_RXD_SIGNAL                                       RX   /*!< LPUART1 signal: RX */

/* GPIO_AD_B0_06 (number 105), UART1_TXD/J17[6] */
#define BOARD_INITPINS_UART1_TXD_PERIPHERAL                              LPUART1   /*!< Device name: LPUART1 */
#define BOARD_INITPINS_UART1_TXD_SIGNAL                                       TX   /*!< LPUART1 signal: TX */

/* GPIO_AD_B0_14 (number 94), ENET_TXD0/U11[24]/J17[7] */
#define BOARD_INITPINS_ENET_TXD0_PERIPHERAL                                 CMP1   /*!< Device name: CMP1 */
#define BOARD_INITPINS_ENET_TXD0_SIGNAL                                       IN   /*!< CMP1 signal: IN */
#define BOARD_INITPINS_ENET_TXD0_CHANNEL                                      0U   /*!< CMP1 IN channel: 0 */

/* GPIO_AD_B1_06 (number 84), ENET_INT/U11[21]/J17[8] */
#define BOARD_INITPINS_ENET_INT_PERIPHERAL                                  PWM1   /*!< Device name: PWM1 */
#define BOARD_INITPINS_ENET_INT_SIGNAL                                         A   /*!< PWM1 signal: A */
#define BOARD_INITPINS_ENET_INT_CHANNEL                                       0U   /*!< PWM1 A channel: 0 */

/* GPIO_AD_B0_11 (number 97), ENET_CRS_DV/U11[18]/J19[3] */
#define BOARD_INITPINS_ENET_CRS_DV_PERIPHERAL                                ARM   /*!< Device name: ARM */
#define BOARD_INITPINS_ENET_CRS_DV_SIGNAL                          arm_trace_swo   /*!< ARM signal: arm_trace_swo */


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
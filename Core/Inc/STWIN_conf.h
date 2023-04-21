/**
******************************************************************************
* @file    STWIN_conf.h
* @author  SRA
* @version V1.0.0
* @date    22-Oct-2021
* @brief   This file contains definitions for the components bus interfaces
******************************************************************************
* @attention
*
* <h2><center>&copy; Copyright (c) 2019 STMicroelectronics. 
* All rights reserved.</center></h2>
*
* This software component is licensed by ST under BSD 3-Clause license,
* the "License"; You may not use this file except in compliance with the 
* License. You may obtain a copy of the License at:
*                        opensource.org/licenses/BSD-3-Clause
*
******************************************************************************
*/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef STWIN_CONF_H__
#define STWIN_CONF_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"
#include "STWIN_bus.h"
#include "STWIN_errno.h"

/* Battery Charger */

/* Define 1 to use already implemented callback; 0 to implement callback
   into an application file */ 
   
#define USE_BC_TIM_IRQ_CALLBACK         0U  
#define USE_BC_GPIO_IRQ_HANDLER         1U  
#define USE_BC_GPIO_IRQ_CALLBACK        1U    
  
#define USE_MOTION_SENSOR_IIS2DH_0      1U
#define USE_MOTION_SENSOR_IIS2MDC_0     1U
#define USE_MOTION_SENSOR_IIS3DWB_0     0U
#define USE_MOTION_SENSOR_ISM330DHCX_0  1U
#define USE_ENV_SENSOR_HTS221_0         1U
#define USE_ENV_SENSOR_LPS22HH_0        1U
#define USE_ENV_SENSOR_STTS751_0        1U  

/* iis2dh */
#define BSP_IIS2DH_CS_GPIO_CLK_ENABLE() __GPIOD_CLK_ENABLE()  
#define BSP_IIS2DH_CS_PORT GPIOD
#define BSP_IIS2DH_CS_PIN GPIO_PIN_15

/* iis3dwb */
#define BSP_IIS3DWB_CS_GPIO_CLK_ENABLE() __GPIOF_CLK_ENABLE()
#define BSP_IIS3DWB_CS_PORT GPIOF
#define BSP_IIS3DWB_CS_PIN GPIO_PIN_5

#define BSP_IIS3DWB_INT1_GPIO_CLK_ENABLE()  __HAL_RCC_GPIOE_CLK_ENABLE()
#define BSP_IIS3DWB_INT1_PORT               GPIOE
#define BSP_IIS3DWB_INT1_PIN                GPIO_PIN_14
#define BSP_IIS3DWB_INT1_EXTI_IRQn          EXTI15_10_IRQn
#define BSP_IIS3DWB_INT1_EXTI_IRQ_PP        7
#define BSP_IIS3DWB_INT1_EXTI_IRQ_SP        0
#define BSP_IIS3DWB_INT1_EXTI_IRQHandler    EXTI15_10_IRQHandler

#define BSP_IIS3DWB_INT2_GPIO_CLK_ENABLE()  __HAL_RCC_GPIOB_CLK_ENABLE()
#define BSP_IIS3DWB_INT2_PORT               GPIOB
#define BSP_IIS3DWB_INT2_PIN                GPIO_PIN_2
#define BSP_IIS3DWB_INT2_EXTI_IRQn          EXTI2_IRQn
#define BSP_IIS3DWB_INT2_EXTI_IRQ_PP        7
#define BSP_IIS3DWB_INT2_EXTI_IRQ_SP        0
#define BSP_IIS3DWB_INT2_EXTI_IRQHandler    EXTI2_IRQHandler

/* ISM330DHCX */
#define BSP_ISM330DHCX_CS_GPIO_CLK_ENABLE() 	__GPIOF_CLK_ENABLE()
#define BSP_ISM330DHCX_CS_PORT 					GPIOF
#define BSP_ISM330DHCX_CS_PIN 					GPIO_PIN_13

#define BSP_ISM330DHCX_INT2_GPIO_CLK_ENABLE() 	__GPIOF_CLK_ENABLE()
#define BSP_ISM330DHCX_INT2_PORT 				GPIOF
#define BSP_ISM330DHCX_INT2_PIN 				GPIO_PIN_4  
#define BSP_ISM330DHCX_INT2_EXTI_IRQn          	EXTI4_IRQn
#define BSP_ISM330DHCX_INT2_EXTI_IRQ_PP        	7
#define BSP_ISM330DHCX_INT2_EXTI_IRQ_SP        	0
  
/* stts751 */  
#define BSP_STTS751_INT_GPIO_CLK_ENABLE() 	__GPIOE_CLK_ENABLE()
#define BSP_STTS751_INT_PORT 				GPIOE
#define BSP_STTS751_INT_PIN 				GPIO_PIN_15  
#define BSP_STTS751_INT_EXTI_IRQn           EXTI15_10_IRQn  

  
#ifdef __cplusplus
}
#endif

#endif /* STWIN_CONF_H__*/

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/


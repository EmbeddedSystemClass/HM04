/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * Copyright (c) 2018 STMicroelectronics International N.V. 
  * All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H__
#define __MAIN_H__

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_ll_tim.h"
#include "stm32f1xx_ll_bus.h"
#include "stm32f1xx_ll_cortex.h"
#include "stm32f1xx_ll_rcc.h"
#include "stm32f1xx_ll_system.h"
#include "stm32f1xx_ll_utils.h"
#include "stm32f1xx_ll_pwr.h"
#include "stm32f1xx_ll_gpio.h"
#include "stm32f1xx_ll_dma.h"

#include "stm32f1xx_ll_exti.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define key_pair_Pin GPIO_PIN_0
#define key_pair_GPIO_Port GPIOA
#define wifi_tx_Pin GPIO_PIN_2
#define wifi_tx_GPIO_Port GPIOA
#define wifi_rx_Pin GPIO_PIN_3
#define wifi_rx_GPIO_Port GPIOA
#define led_wifi_Pin GPIO_PIN_6
#define led_wifi_GPIO_Port GPIOA
#define led_on_Pin GPIO_PIN_7
#define led_on_GPIO_Port GPIOA
#define led_1h_Pin GPIO_PIN_4
#define led_1h_GPIO_Port GPIOC
#define led_2h_Pin GPIO_PIN_5
#define led_2h_GPIO_Port GPIOC
#define key_mist_Pin GPIO_PIN_0
#define key_mist_GPIO_Port GPIOB
#define key_lamp_Pin GPIO_PIN_1
#define key_lamp_GPIO_Port GPIOB
#define lamp_yellow_Pin GPIO_PIN_10
#define lamp_yellow_GPIO_Port GPIOB
#define lamp_white_Pin GPIO_PIN_11
#define lamp_white_GPIO_Port GPIOB
#define lamp_blue_Pin GPIO_PIN_6
#define lamp_blue_GPIO_Port GPIOC
#define lamp_red_Pin GPIO_PIN_7
#define lamp_red_GPIO_Port GPIOC
#define lamp_green_Pin GPIO_PIN_8
#define lamp_green_GPIO_Port GPIOC
#define fan_Pin GPIO_PIN_9
#define fan_GPIO_Port GPIOC
#define mist_Pin GPIO_PIN_8
#define mist_GPIO_Port GPIOA
#define HT_SDA_Pin GPIO_PIN_11
#define HT_SDA_GPIO_Port GPIOA
#define HT_SCL_Pin GPIO_PIN_12
#define HT_SCL_GPIO_Port GPIOA
#define IR_Pin GPIO_PIN_6
#define IR_GPIO_Port GPIOB
#define HT_SCL_2_Pin GPIO_PIN_8
#define HT_SCL_2_GPIO_Port GPIOB
#define HT_SDA_2_Pin GPIO_PIN_9
#define HT_SDA_2_GPIO_Port GPIOB

/* ########################## Assert Selection ############################## */
/**
  * @brief Uncomment the line below to expanse the "assert_param" macro in the 
  *        HAL drivers code
  */
/* #define USE_FULL_ASSERT    1U */

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
 extern "C" {
#endif
void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)
#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

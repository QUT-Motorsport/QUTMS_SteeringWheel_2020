/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f3xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdbool.h>
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */
bool rtd;
extern volatile int curr_value;

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define SCREEN_RS_Pin GPIO_PIN_0
#define SCREEN_RS_GPIO_Port GPIOC
#define SCREEN_TE_Pin GPIO_PIN_1
#define SCREEN_TE_GPIO_Port GPIOC
#define SCREEN_BL_Pin GPIO_PIN_2
#define SCREEN_BL_GPIO_Port GPIOC
#define BACK_SW_Pin GPIO_PIN_2
#define BACK_SW_GPIO_Port GPIOA
#define ACTIVATE_SW_Pin GPIO_PIN_3
#define ACTIVATE_SW_GPIO_Port GPIOA
#define LED_B_Pin GPIO_PIN_4
#define LED_B_GPIO_Port GPIOF
#define ROT1_ENC_DEC_Pin GPIO_PIN_0
#define ROT1_ENC_DEC_GPIO_Port GPIOB
#define ROT1_ENC_INC_Pin GPIO_PIN_1
#define ROT1_ENC_INC_GPIO_Port GPIOB
#define ROT1_ENC_INC_EXTI_IRQn EXTI1_IRQn
#define ROT1_ENC_SW_Pin GPIO_PIN_8
#define ROT1_ENC_SW_GPIO_Port GPIOA
#define SCREEN_CS_Pin GPIO_PIN_10
#define SCREEN_CS_GPIO_Port GPIOC
#define SCREEN_D_C_Pin GPIO_PIN_11
#define SCREEN_D_C_GPIO_Port GPIOC
#define LED_A_Pin GPIO_PIN_2
#define LED_A_GPIO_Port GPIOD
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

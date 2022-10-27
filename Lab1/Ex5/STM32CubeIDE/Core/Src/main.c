//APPROVED 27/10/2022
/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
void display7SEG_0(int num) {
	switch(num) {
	case 0: {
		HAL_GPIO_WritePin(a0_GPIO_Port, a0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b0_GPIO_Port, b0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c0_GPIO_Port, c0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d0_GPIO_Port, d0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e0_GPIO_Port, e0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(f0_GPIO_Port, f0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g0_GPIO_Port, g0_Pin, GPIO_PIN_SET);
		break;
	}
	case 1: {
		HAL_GPIO_WritePin(a0_GPIO_Port, a0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(b0_GPIO_Port, b0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c0_GPIO_Port, c0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d0_GPIO_Port, d0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(e0_GPIO_Port, e0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f0_GPIO_Port, f0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g0_GPIO_Port, g0_Pin, GPIO_PIN_SET);
		break;
	}
	case 2: {
		HAL_GPIO_WritePin(a0_GPIO_Port, a0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b0_GPIO_Port, b0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c0_GPIO_Port, c0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(d0_GPIO_Port, d0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e0_GPIO_Port, e0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(f0_GPIO_Port, f0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g0_GPIO_Port, g0_Pin, GPIO_PIN_RESET);
		break;
	}
	case 3: {
		HAL_GPIO_WritePin(a0_GPIO_Port, a0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b0_GPIO_Port, b0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c0_GPIO_Port, c0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d0_GPIO_Port, d0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e0_GPIO_Port, e0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f0_GPIO_Port, f0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g0_GPIO_Port, g0_Pin, GPIO_PIN_RESET);
		break;
	}
	case 4: {
		HAL_GPIO_WritePin(a0_GPIO_Port, a0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(b0_GPIO_Port, b0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c0_GPIO_Port, c0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d0_GPIO_Port, d0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(e0_GPIO_Port, e0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f0_GPIO_Port, f0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g0_GPIO_Port, g0_Pin, GPIO_PIN_RESET);
		break;
	}
	case 5: {
		HAL_GPIO_WritePin(a0_GPIO_Port, a0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b0_GPIO_Port, b0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(c0_GPIO_Port, c0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d0_GPIO_Port, d0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e0_GPIO_Port, e0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f0_GPIO_Port, f0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g0_GPIO_Port, g0_Pin, GPIO_PIN_RESET);
		break;
	}
	case 6: {
		HAL_GPIO_WritePin(a0_GPIO_Port, a0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b0_GPIO_Port, b0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(c0_GPIO_Port, c0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d0_GPIO_Port, d0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e0_GPIO_Port, e0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(f0_GPIO_Port, f0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g0_GPIO_Port, g0_Pin, GPIO_PIN_RESET);
		break;
	}
	case 7: {
		HAL_GPIO_WritePin(a0_GPIO_Port, a0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b0_GPIO_Port, b0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c0_GPIO_Port, c0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d0_GPIO_Port, d0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(e0_GPIO_Port, e0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f0_GPIO_Port, f0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g0_GPIO_Port, g0_Pin, GPIO_PIN_SET);
		break;
	}
	case 8: {
		HAL_GPIO_WritePin(a0_GPIO_Port, a0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b0_GPIO_Port, b0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c0_GPIO_Port, c0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d0_GPIO_Port, d0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e0_GPIO_Port, e0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(f0_GPIO_Port, f0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g0_GPIO_Port, g0_Pin, GPIO_PIN_RESET);
		break;
	}
	default: {
		HAL_GPIO_WritePin(a0_GPIO_Port, a0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b0_GPIO_Port, b0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c0_GPIO_Port, c0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d0_GPIO_Port, d0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e0_GPIO_Port, e0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f0_GPIO_Port, f0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g0_GPIO_Port, g0_Pin, GPIO_PIN_RESET);
	}
	}
}

void display7SEG_1(int num) {
	switch(num) {
	case 0: {
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_SET);
		break;
	}
	case 1: {
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_SET);
		break;
	}
	case 2: {
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
		break;
	}
	case 3: {
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
		break;
	}
	case 4: {
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
		break;
	}
	case 5: {
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
		break;
	}
	case 6: {
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
		break;
	}
	case 7: {
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_SET);
		break;
	}
	case 8: {
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
		break;
	}
	default: {
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
	}
	}
}


/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  int count = 5;
  int status = 0;
  while (1)
  {
	if (status == 0) {
		HAL_GPIO_WritePin(R0_GPIO_Port, R0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(Y0_GPIO_Port, Y0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(G0_GPIO_Port, G0_Pin, GPIO_PIN_SET);
		display7SEG_0(count);
		if (count > 3) {
			HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, GPIO_PIN_SET);
			display7SEG_1(count - 5);
		} else {
			HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, GPIO_PIN_RESET);
			display7SEG_1(count);
		}
	} else {
		HAL_GPIO_WritePin(R0_GPIO_Port, R0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, GPIO_PIN_SET);
		display7SEG_1(count);
		if (count > 3) {
			HAL_GPIO_WritePin(Y0_GPIO_Port, Y0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(G0_GPIO_Port, G0_Pin, GPIO_PIN_SET);
			display7SEG_0(count - 5);
		} else {
			HAL_GPIO_WritePin(Y0_GPIO_Port, Y0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(G0_GPIO_Port, G0_Pin, GPIO_PIN_RESET);
			display7SEG_0(count);
		}
	}
	count = count - 1;
	if (count == 0) {
		count = 5;
		status = !status;
	}
	HAL_Delay(1000);
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, R0_Pin|Y0_Pin|G0_Pin|R1_Pin
                          |Y1_Pin|G1_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, a0_Pin|b0_Pin|c0_Pin|d1_Pin
                          |e1_Pin|f1_Pin|g1_Pin|d0_Pin
                          |e0_Pin|f0_Pin|g0_Pin|a1_Pin
                          |b1_Pin|c1_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : R0_Pin Y0_Pin G0_Pin R1_Pin
                           Y1_Pin G1_Pin */
  GPIO_InitStruct.Pin = R0_Pin|Y0_Pin|G0_Pin|R1_Pin
                          |Y1_Pin|G1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : a0_Pin b0_Pin c0_Pin d1_Pin
                           e1_Pin f1_Pin g1_Pin d0_Pin
                           e0_Pin f0_Pin g0_Pin a1_Pin
                           b1_Pin c1_Pin */
  GPIO_InitStruct.Pin = a0_Pin|b0_Pin|c0_Pin|d1_Pin
                          |e1_Pin|f1_Pin|g1_Pin|d0_Pin
                          |e0_Pin|f0_Pin|g0_Pin|a1_Pin
                          |b1_Pin|c1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

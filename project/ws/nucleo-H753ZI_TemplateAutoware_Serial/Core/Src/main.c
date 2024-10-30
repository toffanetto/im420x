/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "cmsis_os.h"
#include "adc.h"
#include "dma.h"
#include "usart.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "utils.h"
#include "taskControle.h"
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

unsigned char ucButtonState = 0;

// ADC1 buffer for channels 2 and 6.
unsigned int uiADC1Buffer[2];

// Control action struct with high level control action from MicroAutoware to TaskControle,
// for compute the vehicle control action.
control_action xControlAction;

// Control signal struct with low level control signal from TaskControle to MicroAutoware,
// for publish in simulator topics by micro-ros.
control_signal xControlSignal;

// Data structure for data received from CARLA by UART2
vehicle_status xVehicleStatus;

// Buffer for data received from CARLA by UART2
unsigned char ucDmaBuffer[UART2_DMA_BUFFER_SIZE]; // TODO Ajustar o buffer pro tamanho da mensagem, manter a mais nova


extern osThreadId_t TaskControleHandle;

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
void MX_FREERTOS_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

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
  MX_DMA_Init();
  MX_USART3_UART_Init();
  MX_ADC1_Init();
  MX_USART2_UART_Init();
  /* USER CODE BEGIN 2 */

  // Starting ADC1 reading by DMA
  HAL_ADC_Start_DMA(&hadc1, (uint32_t * ) uiADC1Buffer, 2);

  /* USER CODE END 2 */

  /* Init scheduler */
  osKernelInitialize();

  /* Call init function for freertos objects (in cmsis_os2.c) */
  MX_FREERTOS_Init();

  /* Start scheduler */
  osKernelStart();

  /* We should never get here as control is now taken by the scheduler */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
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

  /** Supply configuration update enable
  */
  HAL_PWREx_ConfigSupply(PWR_LDO_SUPPLY);

  /** Configure the main internal regulator output voltage
  */
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  while(!__HAL_PWR_GET_FLAG(PWR_FLAG_VOSRDY)) {}

  __HAL_RCC_SYSCFG_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE0);

  while(!__HAL_PWR_GET_FLAG(PWR_FLAG_VOSRDY)) {}

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_CSI;
  RCC_OscInitStruct.CSIState = RCC_CSI_ON;
  RCC_OscInitStruct.CSICalibrationValue = RCC_CSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_CSI;
  RCC_OscInitStruct.PLL.PLLM = 1;
  RCC_OscInitStruct.PLL.PLLN = 240;
  RCC_OscInitStruct.PLL.PLLP = 2;
  RCC_OscInitStruct.PLL.PLLQ = 4;
  RCC_OscInitStruct.PLL.PLLR = 2;
  RCC_OscInitStruct.PLL.PLLRGE = RCC_PLL1VCIRANGE_2;
  RCC_OscInitStruct.PLL.PLLVCOSEL = RCC_PLL1VCOWIDE;
  RCC_OscInitStruct.PLL.PLLFRACN = 0;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2
                              |RCC_CLOCKTYPE_D3PCLK1|RCC_CLOCKTYPE_D1PCLK1;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.SYSCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB3CLKDivider = RCC_APB3_DIV2;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_APB1_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_APB2_DIV2;
  RCC_ClkInitStruct.APB4CLKDivider = RCC_APB4_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_4) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */
/**
  * @name   HAL_GPIO_EXTI_Callback
  * @brief  ISR callback for the JoySW, switching the control mode.
  * @param  GPIO_Pin: EXTI pin.
  * @retval None
  */
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
  if(JoySW_Pin == GPIO_Pin){
    ucButtonState ^= 1;
    osThreadFlagsSet(TaskControleHandle, 0x1000);
  }
}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef * huart)
{
  if(&huart2 == huart)
  {

    unsigned int ucSmState = 0;

    for(unsigned char i = 0; i<UART2_DMA_BUFFER_SIZE; i++)
    {
      switch (ucSmState)
      {
        case 0:
        if('#' == ucDmaBuffer[i])
        {
          ucSmState = 1;
        }
        break;

        case 1:
        switch (ucDmaBuffer[i])
        {
          case 'A':
          ucSmState = 10;
          break;

          case 'B':
          ucSmState = 20;
          break;

          case 'C':
          ucSmState = 30;
          break;

          case 'D':
          ucSmState = 40;
          break;

          case '$':
          ucSmState = 0;
          osThreadFlagsSet(TaskControleHandle, 0x10000);
          break;

          default:
            ucSmState = 0;
            break;
        }
        break;

        case 10:
        xVehicleStatus.xLongSpeed.ucBytes[0] = ucDmaBuffer[i];
        ucSmState = 11;
        break;

        case 11:
        xVehicleStatus.xLongSpeed.ucBytes[1] = ucDmaBuffer[i];
        ucSmState = 12;
        break;

        case 12:
        xVehicleStatus.xLongSpeed.ucBytes[2] = ucDmaBuffer[i];
        ucSmState = 13;
        break;

        case 13:
        xVehicleStatus.xLongSpeed.ucBytes[3] = ucDmaBuffer[i];
        ucSmState = 1;
        break;

        case 20:
        xVehicleStatus.xLatSpeed.ucBytes[0] = ucDmaBuffer[i];
        ucSmState = 21;
        break;

        case 21:
        xVehicleStatus.xLatSpeed.ucBytes[1] = ucDmaBuffer[i];
        ucSmState = 22;
        break;

        case 22:
        xVehicleStatus.xLatSpeed.ucBytes[2] = ucDmaBuffer[i];
        ucSmState = 23;
        break;

        case 23:
        xVehicleStatus.xLatSpeed.ucBytes[3] = ucDmaBuffer[i];
        ucSmState = 1;
        break;

        case 30:
        xVehicleStatus.xHeadingRate.ucBytes[0] = ucDmaBuffer[i];
        ucSmState = 31;
        break;

        case 31:
        xVehicleStatus.xHeadingRate.ucBytes[1] = ucDmaBuffer[i];
        ucSmState = 32;
        break;

        case 32:
        xVehicleStatus.xHeadingRate.ucBytes[2] = ucDmaBuffer[i];
        ucSmState = 33;
        break;

        case 33:
        xVehicleStatus.xHeadingRate.ucBytes[3] = ucDmaBuffer[i];
        ucSmState = 1;
        break;

        case 40:
        xVehicleStatus.ucGear = ucDmaBuffer[i];
        ucSmState = 1;
        break;

        default:
		      ucSmState = 0;
          break;
      }
    }
    HAL_UART_Receive_DMA(&huart2, ucDmaBuffer, UART2_DMA_BUFFER_SIZE);

  }
}

/* USER CODE END 4 */

/**
  * @brief  Period elapsed callback in non blocking mode
  * @note   This function is called  when TIM6 interrupt took place, inside
  * HAL_TIM_IRQHandler(). It makes a direct call to HAL_IncTick() to increment
  * a global variable "uwTick" used as application time base.
  * @param  htim : TIM handle
  * @retval None
  */
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  /* USER CODE BEGIN Callback 0 */

  /* USER CODE END Callback 0 */
  if (htim->Instance == TIM6) {
    HAL_IncTick();
  }
  /* USER CODE BEGIN Callback 1 */

  /* USER CODE END Callback 1 */
}

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

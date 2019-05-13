/*
 * bsp_usart.c
 *
 *  Created on: 2019年5月12日
 *      Author: Paul
 */

#include "bsp_usart.h"

extern UART_HandleTypeDef huart1;

// 重定向c库函数printf到串口，重定向后可使用printf函数
int __io_putchar(int ch)
{
  HAL_UART_Transmit(&huart1, (uint8_t*) &ch, 1, HAL_MAX_DELAY);
  return (ch);
}

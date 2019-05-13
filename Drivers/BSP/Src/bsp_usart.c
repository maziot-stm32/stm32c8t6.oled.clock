/*
 * bsp_usart.c
 *
 *  Created on: 2019��5��12��
 *      Author: Paul
 */

#include "bsp_usart.h"

extern UART_HandleTypeDef huart1;

// �ض���c�⺯��printf�����ڣ��ض�����ʹ��printf����
int __io_putchar(int ch)
{
  HAL_UART_Transmit(&huart1, (uint8_t*) &ch, 1, HAL_MAX_DELAY);
  return (ch);
}

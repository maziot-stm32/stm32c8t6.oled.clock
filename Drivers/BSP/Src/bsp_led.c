/*
 * bsp_led.c
 *
 *  Created on: 2019Äê5ÔÂ12ÈÕ
 *      Author: Paul
 */

#include "main.h"
#include "bsp_led.h"


void led_init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = { 0 };

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE()
  ;
  __HAL_RCC_GPIOD_CLK_ENABLE()
  ;
  __HAL_RCC_GPIOA_CLK_ENABLE()
  ;

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(LED_GPIO_Port, LED_PIN, GPIO_PIN_RESET);

  /*Configure GPIO pin : LED_PIN */
  GPIO_InitStruct.Pin = LED_PIN;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(LED_GPIO_Port, &GPIO_InitStruct);
}



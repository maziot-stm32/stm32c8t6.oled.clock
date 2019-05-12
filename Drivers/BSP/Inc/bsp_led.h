/*
 * bsp_led.h
 *
 *  Created on: 2019Äê5ÔÂ12ÈÕ
 *      Author: Paul
 */

#ifndef BSP_INC_BSP_LED_H_
#define BSP_INC_BSP_LED_H_

#include "main.h"

#define LED_PIN GPIO_PIN_13
#define LED_GPIO_Port GPIOC

void led_init(void);
void led_on(void);
void led_off(void);

#endif /* BSP_INC_BSP_LED_H_ */

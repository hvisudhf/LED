#ifndef __LED_H__
#define __LED_H__

#include "stm32f10X.h"

#define LED_GPIO_PIN   GPIO_Pin_5
#define LED_GPIO_PORT  GPIOA
#define LED_GPIO_CLK  RCC_APB2Periph_GPIOC

void LED_GPIO_Config(void);


#endif


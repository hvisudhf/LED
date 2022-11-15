#include "stm32f10x.h"
#include "led.h"
#include "delay.h"


int main(void)
{
		LED_GPIO_Config();
		delay_init();

		while(1)			
		{
			

			GPIO_SetBits(GPIOA, GPIO_Pin_5);
			delay_ms(1000);
			GPIO_ResetBits(GPIOA, GPIO_Pin_5);
			

			GPIO_SetBits(GPIOB, GPIO_Pin_9);
			delay_ms(1000);
			GPIO_ResetBits(GPIOB, GPIO_Pin_9);
			

			GPIO_SetBits(GPIOC, GPIO_Pin_14);
			delay_ms(1000);
			GPIO_ResetBits(GPIOC, GPIO_Pin_14);
		
		};
}

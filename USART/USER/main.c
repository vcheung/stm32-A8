/**
  ******************************************************************************
  * 描述    ：下位机_
  *         
  * 实验平台：stm32f103c8t6
  * 硬件连接：------------------------
  *          | PA9  - USART1(Tx)      |
  *          | PA10 - USART1(Rx)      |
  *           ------------------------
  * 库版本  ：ST3.5.0
  * 作者    ：zhangwj   
  ******************************************************************************
  *  
  * 在我们的 main.c 文件中要把 stdio.h 这个头文件包含进来，还要在
  * 编译器中设置一个选项 Use MicroLIB (使用微库)，在 Options for target。
  * 这个微库是 keil MDK 为嵌入式应用量身定做的 C 库，我们要先具有库，才能重定向。
  * 勾选使用之后，我们就可以使用 printf() 这个函数了。
  *
  **/	
/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"
#include "usart1.h"
#include "led.h"

int main(void)
{
	USART1_Config();
	LED_GPIO_config();

	while (1)
	{
		if(USART_GetFlagStatus(USART1 , USART_IT_RXNE) == SET)
		{
			if(USART_ReceiveData(USART1)==0x00)
			{
				GPIO_SetBits(GPIOA, GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7);	
				LED1(ON);
				printf("LED1 ON \n");
			}
			else if(USART_ReceiveData(USART1)==0x01)
			{
				GPIO_SetBits(GPIOA, GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7);	
				LED2(ON);
				printf("LED2 ON \n");
			}
			else if(USART_ReceiveData(USART1)==0x02)
			{
				GPIO_SetBits(GPIOA, GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7);	
				LED3(ON);
				printf("LED3 ON \n");
			}

			else if(USART_ReceiveData(USART1)==0x03)
			{
				GPIO_SetBits(GPIOA, GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7);	
				LED4(ON);
				printf("LED4 ON \n");
			}
		}
	}

}


/******************* (C) COPYRIGHT 2011 STMicroelectronics *****END OF FILE****/

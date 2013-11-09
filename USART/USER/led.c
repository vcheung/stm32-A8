/********************************************************************************
 * 文件名  ：led.c
 * 描述    ：led 应用函数库         
 * 实验平台：stm32f103c8t6
 * 硬件连接：-----------------
 *          |   PA4 - LED1     |
 *          |   PA5 - LED2     |
 *          |   PA6 - LED3     |
 *          |   PA7 - LED4     |
 *          |   LED共阳极      |
 *           ----------------- 
 * 库版本  ：ST3.5.0
 * 作者    ：zhangwj
**********************************************************************************/
#include "led.h"

void LED_GPIO_config(void)
{
	/*定义一个GPIO_InitTypeDef类型的结构体*/
	GPIO_InitTypeDef GPIO_InitStructure;

	/*开启GPIOA的外设时钟*/
	RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOA, ENABLE);
	 
	/*选择要控制的GPIOA引脚*/															   
  	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7;	

	/*设置引脚模式为通用推挽输出*/
  	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;   

	/*设置引脚速率为50MHz */   
  	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 

	/*调用库函数，初始化GPIOA*/
  	GPIO_Init(GPIOA, &GPIO_InitStructure);		  

	/* 关闭所有led灯	*/
	GPIO_SetBits(GPIOA, GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7);			
}

#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "ADC.h"

int main()
{
	uint16_t ADC_Value;
	float Voltage;
	OLED_Init();
	ADC_Init_t();
	OLED_ShowString(1, 1, "AD0:");
	OLED_ShowString(2, 1, "AD1:");
	OLED_ShowString(3, 1, "AD2:");
	OLED_ShowString(4, 1, "AD3:");

	while(1)
	{
		OLED_ShowNum(1, 5, ADC_GetValue(ADC_Channel_0),4);//显示PA0
		OLED_ShowNum(2, 5, ADC_GetValue(ADC_Channel_1),4);//显示PA1
		OLED_ShowNum(3, 5, ADC_GetValue(ADC_Channel_2),4);//显示PA2
		OLED_ShowNum(4, 5, ADC_GetValue(ADC_Channel_3),4);//显示PA3
	}
}

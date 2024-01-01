/*=================================================================================*/
/*  Author      : Ahmed bayoumii                   Embedded SW Engineer           */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-bayoumii77/             */
/*  Git account : https://github.com/Baioumi7				               */
/*  mail        : ahmedbayoumii2024@gmil.com                                         */
/*=================================================================================*/
#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "ADC_interface.h"
#include "DIO_interface.h"

#include "LM35_interface.h"
#include "LM35_config.h"
#include "LM35_private.h"

void LM35_voidInit(void)
{
	ADC_voidInit();
	DIO_u8SetPinDirection(DIO_u8PORTA,LM35_PIN,DIO_u8PIN_INPUT);
}
u8 LM35_u8GetTempValue (void)
{
	u8 Local_u8TempValue;

	u16 Local_u16ADCValue;

	/* Read ADC channel where the temperature sensor is connected */
	Local_u16ADCValue = ADC_u8GetChannelReading(SENSOR_CHANNEL_ID);

	/* Calculate the temperature from the ADC value*/
	Local_u8TempValue = ( Local_u16ADCValue * 4.88 ) / ( 10 );

	return Local_u8TempValue;
}

/*=================================================================================*/
/*  Author      : Ahmed bayoumii                   Embedded SW Engineer           */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-bayoumii77/             */
/*  Git account : https://github.com/Baioumi7				               */
/*  mail        : ahmedbayoumii2024@gmil.com                                         */
/*=================================================================================*/

#ifndef DCM_INTERFACE_H_
#define DCM_INTERFACE_H_

#define CW_STATE			1
#define CWW_STATE			2
#define STOP_STATE			3

void DCM_voidInit(void);

void DCM_voidCW(void);

void DCM_voidCCW(void);

void DCM_voidRotate(u8 Local_u8State , u8 Local_u8Speed);


#endif

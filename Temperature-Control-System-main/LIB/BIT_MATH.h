/*=================================================================================*/
/*  Author      : Ahmed bayoumii                   Embedded SW Engineer           */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-bayoumii77/             */
/*  Git account : https://github.com/Baioumi7				               */
/*  mail        : ahmedbayoumii2024@gmil.com                                         */
/*=================================================================================*/
#ifndef BIT_MATH_H_
#define BIT_MATH_H_

/* Set a certain bit in any register */
#define SET_BIT(REG,BIT) 		 REG|=(1<<BIT)

/* Clear a certain bit in any register */
#define CLR_BIT(REG,BIT) 		 REG&=(~(1<<BIT))

/* Toggle a certain bit in any register */
#define TOOGLE_BIT(REG,BIT)	     REG^=(1<<BIT)

/* Get a certain bit in any register */
#define GET_BIT(REG,BIT) 		((REG>>BIT)&1)

/* Check if a specific bit is set in any register and return true if yes */
#define BIT_IS_SET(REG,BIT) ( REG & (1<<BIT) )

/* Check if a specific bit is cleared in any register and return true if yes */
#define BIT_IS_CLEAR(REG,BIT) ( !(REG & (1<<BIT)) )

#endif /* BIT_MATH_H_ */

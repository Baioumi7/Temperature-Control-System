/*=================================================================================*/
/*  Author      : Ahmed bayoumii                   Embedded SW Engineer           */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-bayoumii77/             */
/*  Git account : https://github.com/Baioumi7				               */
/*  mail        : ahmedbayoumii2024@gmil.com                                         */
/*=================================================================================*/
#ifndef STD_TYPES_H_
#define STD_TYPES_H_

typedef unsigned char		 u8; 				/*           0 .. 255              */
typedef signed char			 s8;				/*        -128 .. +127             */

typedef unsigned short		 u16;				/*           0 .. 65535            */
typedef signed short		 s16;				/*      -32768 .. +32767           */

typedef unsigned long		 u32;				/*           0 .. 4294967295       */
typedef signed long			 s32;				/* -2147483648 .. +2147483647      */

typedef unsigned long long   u64;				/*      0 .. 18446744073709551615  */
typedef signed long long     s64;				/* -9223372036854775808 .. 9223372036854775807 */

typedef float				 f32;
typedef double				 f64;
typedef long double          f128;

#define TRUE 	 	 (u8)0x01
#define FALSE	 	 (u8)0x00
#define NULL  		 ((void*)0)

#define OK				0
#define NOK				1
#define NULL_POINTER	2

#endif /* STD_TYPES_H_ */

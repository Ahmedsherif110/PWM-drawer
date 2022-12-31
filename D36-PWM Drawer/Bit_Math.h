/*
 * Bit_Math.h
 *
 * Created: 12/31/2022 8:27:10 PM
 *  Author: as588
 */ 
#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(Reg, Bit_No) Reg |= (1<<Bit_No)
#define CLR_BIT(Reg, Bit_No) Reg &=~ (1<<Bit_No)
#define CHK_BIT(Reg, Bit_No) Reg &= (1<<Bit_No)
#define TOG_BIT(Reg, Bit_No) Reg ^= (1<<Bit_No)

#endif
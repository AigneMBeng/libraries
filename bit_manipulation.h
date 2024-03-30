// Bit Manipulation Header

#ifndef BIT_MANIPULATION_H
#define BIT_MANIPULATION_H

// Macros
#define sbi(reg, bit) (reg |= (1 << bit))  // set bit of register reg
#define cbi(reg, bit) (reg &= ~(1 << bit)) // clear bit of register reg

#define sbs(reg, mask, values) (reg &= (~mask & values))
/*  Example


   */


#endif // BIT_MANIPULATION_H 

// Bit Manipulation Header
/* Mandatory Reqiurements
 * <stdint>
 * <stdio>
 */

#ifndef BIT_MANIPULATION_H
#define BIT_MANIPULATION_H

// Macros
#define sbi(reg, bit) (reg |= (1 << bit))  // set bit of register reg
#define cbi(reg, bit) (reg &= ~(1 << bit)) // clear bit of register reg

#define sbs(reg, mask, values) (reg = (reg | values) & (~mask | values))
/*  Example


   */

void printb8(uint8_t b);

#endif // BIT_MANIPULATION_H 

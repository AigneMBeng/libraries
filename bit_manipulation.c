// Bit Manipulation Source

#include "bit_manipulation.h"

void printb8(uint8_t b) {
    int mask = 0b00000001;
    for(int i = 0; i < 8; i ++) {
        if(b & 0b10000000) {
            printf("1");
        }
        else {
            printf("0");
        }
        b = b << 1;
    }
}

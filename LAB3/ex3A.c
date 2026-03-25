#include <stdio.h>

unsigned char switch_byte(unsigned char x){
    return (x<<4)|(x>>4);
}

int main(void) {
    unsigned char teste = 0xAB;
    printf("Original: %02X -> Trocado: %02X\n", teste, switch_byte(teste));
    return 0;
}
//Imprima byte a byte de um RGBA.

#include <stdio.h>

int main() {
	int rgba = 0x010203FF;
	unsigned char *c = (unsigned char *) &rgba;
    
    //Imprimindo os bytes individuais
    printf("c(&rgba): %u\n", c+3);
    printf("*c - byte 2 - %x (%d)\n", *(c+3), *(c+3));
    printf("c(&rgba): %u\n", c+2);
    printf("*c - byte 3 - %x (%d)\n", *(c+2), *(c+2));
    printf("c(&rgba): %u\n", c+1);
    printf("*c - byte 2 - %x (%d)\n", *(c+1), *(c+1));
    printf("c(&rgba): %u\n", c);
    printf("*c - byte 1 - %x (%d)\n", *c, *c);
  
	return 0;
}
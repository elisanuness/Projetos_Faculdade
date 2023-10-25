// Invertendo uma string - Implemente em linguagem C a inversão da String utilizando apenas ponteiros.

#include "stdio.h"

//Invertendo uma string
int main(void) {
  char string[] = "Hello World";
  char *p1 = string;
  char *p2 = string+10;

//Looping de inversão:
  while(p2!=p1){
    char original = *p1;
    *p1=*p2;
    *p2 = original;
    p1++;
    p2--;
  }

//Imprimindo a string invertida
  printf("String invertida: %s", string);
  return 0;
}
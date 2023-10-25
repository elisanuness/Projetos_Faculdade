//Explore o uso do ponteiro para valores e para endereços.

#include <stdio.h>

int main(void) {
  
  //Entrada de Valores
  int i = 5;
  int *p;
  p = &i;
  printf("&p: %p\n", &p);
  printf("p  (&i - endereço de i): %p\n",  p);
  printf("*p ( i -    valor de i): %d\n"  , *p);
  
  //Mudando o valor de i a partir da sua localização
  *p = 4; // i = 4 
  printf("*p ( i -    valor de i): %d\n"  , *p);

  //Modifica o valor de i manualmente
  printf("Insira o valor de i: ");
  scanf("%d", &i);
  printf("i: %d\n", *p);
  
  return 0;
}
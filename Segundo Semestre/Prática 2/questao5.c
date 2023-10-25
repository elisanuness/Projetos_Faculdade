//Escreva uma função que realize a troca de dois inteiros passado como parâmetros. A troca dos valores deverá modificar as variáveis passadas como parâmetro.

#include <stdio.h>

void troca (int x, int y, int *ptr_x, int *ptr_y){
  int original = x;
  *ptr_x = y;
  *ptr_y = original;
}

int main (){
  int x = 2;
  int y = 4;
  int ptr_x, ptr_y;
  troca(x,y,&ptr_x, &ptr_y);

  printf("%d %d", ptr_x, ptr_y);
}
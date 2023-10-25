//Faça um programa para somar valores pares, usando função.

#include <stdio.h>

//variável global:
int numero = 5;

int ehPar(int n){
  return n % 2 ==0;
}

int somaSePar(int a){
  if(ehPar(a))
  return a + numero;
  return a;
}

int main(void) {
//Variavel local
  int numeros[] = {0,1,2,3,4,5};
  for (int i=0; i<6;i++){
  //Se for par:
  if(ehPar(numeros[i]))
    printf("%d\n", numeros[i]);
  //Se for impar
  if(!ehPar(numeros[i]))
    printf("%d\n", numeros[i]);
  }

  for (int i=0; i<6;i++){
    printf("%d\n", somaSePar(numeros[i]));
  }
  
  return 0;
}
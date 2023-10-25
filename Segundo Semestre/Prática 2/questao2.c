//Faça um código que possua as seguintes operações matemáticas: soma, subtração, divisão, multiplicação, média e módulo;

#include <stdio.h>

// função soma
int soma(int x, int y) {
	return x + y;
}


//Divisão:
int div(int x, int y) {
  if(y==0){
    fprintf(stdout, "Divisão ilegal por zero\n");
    return 0;
  }
  return x/y;
}

//Subtração:
int sub(int x, int y) {
	return x-y;
}

//Multiplicação:
int mult(int x, int y) {
	return x*y;
}

//Modulo:
int modulo(unsigned int x) {
	return x;
}

//Menor:
int menor(int x, int y) {
	if(x<y){
  return x;
  }
  if(y<x){
  return y;
  }
}

//Media:
float media(int x, int y) {
	return (x+y)/2;
}


// função main
int main() {
    printf("a soma de 3 + 3 é: %d\n", soma(3,3));
    printf("a divisão de 3 : 3 é: %d\n", div(3,3));
    printf("a subtração de 3 - 3 é: %d\n", sub(3,3));
    printf("a multiplicação de 3 . 3 é: %d\n", mult(3,3));
    printf("a modulo de 3 é: %d\n", modulo(3));
    printf("o menor valor entre 3 e 5 é: %d\n", menor(3,5));
    printf("a media de 3 + 4 é: %d\n", media(3,4));
}
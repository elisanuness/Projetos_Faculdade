//Crie e análise um código com uma função de soma.

#include <stdio.h>

// Função soma
int soma(int x, int y) {
	return x + y;
}

// Função main
int main() {
	int sum = soma(5, 3);
  
  //Atribuindo valores aos parametros e atribuindo ele a uma nova variavel.
	printf("a soma de 5 + 3 é: %d\n", sum);
	printf("a soma de 3 + 3 é: %d\n", soma(3,3));
	printf("a soma de 2 + 4 é: %d\n", soma(2,4));
	return 0;
  //O return 0 é indicativo de falta de problemas no código da função.
}
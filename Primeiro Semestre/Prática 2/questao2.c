//Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.

#include <stdio.h>
#include <math.h>

int main() {

    //Entrada de Valores
    int num1 = 0;
    int num2 = 0;
    printf("Entre com o dividendo: ");
    scanf("%i", &num1);
    printf("Entre com o divisor: ");
    scanf("%i", &num2);

    //Cálculo e Saída
    int quociente = num1/num2;
    int resto = num1%num2;
    printf("O valor do quociente é %i e o resto é %i", quociente, resto);
    
    return 0;
}
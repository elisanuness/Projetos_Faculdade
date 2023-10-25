//Faça um programa em C que leia três números reais e imprima a média aritmética destes números.

#include <stdio.h>
#include <math.h>

int main () {

    //Entrada de Valores
    float num1 = 0.0f;
    printf("Entre com o primeiro valor: ");
    scanf("%f", &num1);
    float num2 = 0.0f;
    printf("Entre com o segundo valor: ");
    scanf("%f", &num2);
    float num3 = 0.0f;
    printf("Entre com o terceiro valor: ");
    scanf("%f", &num3);

    //Cálculo e Saída
    float media = (num1+num2+num3)/3.0;
    printf ("O valor da média aritmética desses três valores é de %.2f\n", media);

    return 0;
}
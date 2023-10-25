//Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.

#include <stdio.h>
#include <math.h>

int main(){
    
    //Entrada de valores
    float base;
    float altura;
    printf("Entre com o valor da base: ");
    scanf("%f", &base);
    printf("Entre com o valor da altura");
    scanf("%f", &altura);

    //Cálculo da área do triangulo
    float area = (base*altura)/2;
    printf("A área do triângulo é: %.2f", &area);

    return 0;
}
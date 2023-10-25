//Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32).

#include <stdio.h>
#include <math.h>

int main() {

    //Entrada de Valores
    float celsius = 0.0f;
    printf("Entre com o valor de graus em Celsius: ");
    scanf("%f", &celsius);

    //Cálculo e Saída
    float fahrenheit = ((celsius*9)/5)+32;
    printf("O valor de %.2f°C é igual a %.2f Fahrenheit", celsius, fahrenheit);

    return 0;
}
//Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.

#include <stdio.h>
#include <math.h>

int main() {

    //Entrada de Valores
    float distancia = 0.0f;
    printf("Entre com o valor da distância percorrida: ");
    scanf("%f", &distancia);

    float angulo = 0.0f;
    printf("Entre com o valor do ângulo de inclinação menor que 45°: ");
    scanf("%f", &angulo);

    //Cálculo e Resultado da Altura alcançada
    if (angulo<=45)
    {
        const float pi = 3.1415f;
        float radiano = (angulo*pi)/180.0;

        float altura = (sin(radiano))*distancia;
        printf("O valor da altura alcançada é de %.2f\n", altura);
    }

    else
    {
        printf("O ângulo é inválido.");
    }
    
    return 0;
}
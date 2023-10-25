//Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.

#include <stdio.h>
#include <math.h>

int main() {

    //Entrada de Valores:
    int raio = 0;
    printf ("Entre com o valor do raio: ");
    scanf("%i", &raio);

    //Calculando o perímetro da pizza:
    const float pi = 3.14f;
    float perimetro=2*pi*raio;
    printf ("O valor do perímetro da pizza é de: %.2f\n", perimetro);
    
    return 0;
}
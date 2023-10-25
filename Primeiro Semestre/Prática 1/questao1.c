//Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.

#include <stdio.h>
#include <math.h>

int main(void) {

    //Entrada de notas
    float nota_a1 = 0.0f; // nota 1
    float nota_a2 = 0.0f; // nota 2
    printf("Entre com o valor entre 0 e 10 para a nota A1 = ");
    scanf("%f", &nota_a1);
    printf("Entre com o valor entre 0 e 10 para a nota A2 = ");
    scanf("%f", &nota_a2);

    //Calculando a média
    float a=nota_a1, b=nota_a2, média;
    média= (a*0.4f)+(b*0.6f);
    printf ("A média final é = %f", média);
  
  return 0;
}
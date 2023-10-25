//Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).

#include <stdio.h>
#include <math.h>

int main() {

    //Entrada de Valores
    float coeficiente_a= 0.0f;
    float coeficiente_b= 0.0f;
    float coeficiente_c= 0.0f;

    printf ("Insira o valor do coeficiente a: ");
    scanf("%f", &coeficiente_a);
    printf ("Insira o valor do coeficiente b: ");
    scanf("%f", &coeficiente_b);
    printf ("Insira o valor do coeficiente c: ");
    scanf("%f", &coeficiente_c);

    //Cálculo de raízes
    float delta= pow(coeficiente_b, 2) - (4*coeficiente_a*coeficiente_c);
    float raiz1 = (-(coeficiente_b) + sqrt(delta))/ 2* coeficiente_a;
    float raiz2 = (-(coeficiente_b) - sqrt(delta))/ 2* coeficiente_a;

    //Resultado
    printf("As raízes da equação são %f e %f\n", raiz1, raiz2);  
    
    return 0;
}


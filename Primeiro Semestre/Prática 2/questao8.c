//Faça um programa em C que leia as coordenadas de dois pontos (x1, y1) e (x2, y2) e calcule a distância entre eles (d = raiz_quadrada((x2-x1)² + (y2-y1)²)).

#include <stdio.h>
#include <math.h>

int main() {

    //Entrada de Valores
    int x1= 0;
    int y1= 0;
    printf("Insira a coordenada x do primeiro ponto: ");
    scanf("%i", &x1);
    printf("Insira a coordenada y do primeiro ponto: ");
    scanf("%i", &y1);

    int x2= 0;
    int y2= 0;
    printf("Insira a coordenada x do segundo ponto: ");
    scanf("%i", &x2);
    printf("Insira a coordenada y do segundo ponto: ");
    scanf("%i", &y2);

    //Cálculo e Saída
    float distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("A distância entre os dois pontos é de aproximadamente %.2f", distancia);
    
    return 0;
}
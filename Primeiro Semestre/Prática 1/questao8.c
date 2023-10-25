//Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).

#include <stdio.h>
#include <math.h>

int main () {

    //Entrada de Valores
    int inicial = 0;
    printf("Entre com o número de segundos: ");
    scanf("%i", &inicial);

    //Cálculo de tempo
    int hora = inicial/3600;
    int resto_hora = (inicial%3600);
    int minutos = resto_hora /60;
    int resto_min = (resto_hora%60);
    int segundos = resto_min;

    //Saída
    printf("Os segundos convertidos em hora, minuto e segundo são iguais a:\n%i horas %i minutos e %i segundos", hora, minutos, segundos);

  
return 0;
}
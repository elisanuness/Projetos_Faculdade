//Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).

#include <stdio.h>
#include <math.h>

int main() {
    
    //Entrada de valores =
    const int byte = pow(1024, 3);
    float gb = 0.0f;
    printf("Entre com a quantidade de Gigabytes: ");
    scanf("%f", &gb);
    printf("\n");
    
    //Cálculo de Bytes:
    float total = byte*gb;
    printf("O valor de bytes correspondentes é de exatamente %.2f\n", total);
    float arredondado = cbrt (byte*gb);
    printf("O valor de bytes correspondentes é de aproximadamente %.0f³\n", arredondado);

return 0;
}
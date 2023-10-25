/*Faça os seguintes códigos utilizando função recursiva
    1. Contruindo andar de um prédio
    2. Somátorio
    3. Produtório
    4. Soma + 3
    5. Multiplicação * 3
    6. Apertos de mãos */


#include <stdio.h>

int construirAndar(int n) {
    if(n > 0) return construirAndar(n-1) + 1; // +1 andar PASSO RECURSIVO
    return 0; // CASO BASE
}

//Sequencia de fibonnaci
int somatorio(int n){
  if(n > 0) return somatorio(n-1)+n; // +1 e n PASSO RECURSIVO 
  return 0; // CASO BASE
}

//Produtos sucessivos
int produtorio(int n){
  if(n > 0) return produtorio(n-1)*3; // +1 e n PASSO RECURSIVO 
  else if(n == 0) return 2; // CASO BASE
  return 0;
}

//Produtos sucessivos
int soma3 (int n){
      if (n > 0)  return 3 + soma3(n -1); // PASSO RECURSIVO
      if (n == 0) return 2; // CASO BASE 
      return 0; // OUTROS CASOS
}


//Produtos sucessivos
int multiplicacao3 (int n){
      if (n > 0)  return 2 * multiplicacao3(n-1); // PASSO RECURSIVO
      if (n == 0) return 3; // CASO BASE 
      return 0; // OUTROS CASOS
}

int maos (int n){
  if (n > 1) return (n-1) + maos(n-1);
  return 0;
}
int main(){
  int n = 3;
  
  int x = construirAndar(n);
  int y = somatorio(n);
  int z = produtorio(n);
  int a = soma3(n);
  int b = multiplicacao3(n);
  int c = maos(n);
  
  //Mostrando a recursividade em andares de um prédio
  while(x > 0) {
  printf("O numero do andar é: %d\n", x);
  x--;
  }

  //Aplicando o somatório
  printf("O somatório de s(%d): %d\n", n, y);

  //Aplicando o produtório
  printf("O produtório de s(%d): %d\n", n, z);

  //Aplicando o soma3
  printf("O soma 3 de s(%d): %d\n", n, a);

  //Aplicando o mult3
  printf("O multiplicacao 3 de s(%d): %d\n", n, b);

  //Aplicando o mult3
  printf("A quantidade de apertos e de s(%d): %d\n", n, c);
  
  return 0;
}
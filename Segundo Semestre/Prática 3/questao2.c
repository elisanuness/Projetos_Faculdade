#include <stdio.h>

struct Pessoa {
  char nome[50];
  char idade;
  char genero;
};

typedef struct Pessoa Pessoa; 
// Não precisa mais escrever struct Pessoa, apenas Pessoa é suficiente.

/*
Pode fazer isso de forma direta:
typedef struct {
  char nome[50];
  char idade;
  char genero;
} Pessoa;
*/

/*
Exemplo de estrutura de produtos =

1 - Crie uma estrutura contendo as seguintes propriedades:
  - codigo, do tipo int
    - nome, do tipo string de até 100 caracteres
    - valor, do tipo double
    - quantidade, do tipo int
    - categoria, do tipo char 
      Exemplos: [E - eletrodomestico, F- ferramenta, V- vestuário];

*/

typedef struct{
  int codigo;
  char nome[100];
  double valor;
  int quantidade;
  char categoria;
} Produto;

// 2. Crie uma função: void lerProduto(Produtos *p); - Recebe um ponteiro para produto e preenche os dados de um produto, solicitados ao usuário e lidos do teclado

void lerProdutos(Produto *p){
  printf("Digite o nome do produto: ");
  scanf("%100[^\n]%*c", p->nome); //Como é um ponteiro, precisa usar o ->
  printf("Digite o valor do produto: ");
  scanf("%lf%*c", &p->valor); // lf -> longfloat = double
  printf("Digite a quantidade do produto: ");
  scanf("%d%*c", &p->quantidade);
  printf("Digite a categoria do produto: ");
  scanf("%c%*c", &p->categoria);
}

// 3. Crie uma função: gerarCodigo(Produto *p, Produto produtos[]) - recebe um ponteiro para produto e um vetor de produtos e gera um código único para o produto.
// Exemplo: produtos[0].codigo = 1, produtos[1].codigo = 2, produtos

void gerarCodigo (Produto *p, int quantidade, Produto produtos[]) {
	if (!quantidade) {
		p->codigo = 0;
		return;
	}
p->codigo = produtos[quantidade].codigo+1;
}	

/*
Outra opção:
void gerarCodigo(Produto *p, int quantidade, Produto produtos[]){
  for(int i = 0; i < quantidade; i++){
    if(produtos[i].codigo == 0){
      p->codigo = i + 1;
      break;
    }
  }
}
*/

// 4. Crie uma função: void preencherProdutos(int quantidade, Produto produtos[quantidade]); - recebe a quantidade de produtos a serem cadastrados e um vetor de produtos. Em seguida, solicita ao usuário que informe os dados de cada produto e os preenche. (reutilize a função lerProdutos, para cada produto a ser preenchido pelo usuário.)
void preencheProdutos(int quantidade, Produto produtos[quantidade]){
  for (int i = 0; i < quantidade; i++){
    printf("\n");
    printf("Dados produto %d\n", i+1);
    printf("-------------------------------------------------------------\n");
    lerProdutos(&produtos[i]);
  }
}

// 5. Crie uma função: void exibirProduto(Produto p); - recebe um produto e exibe os dados de um produto.
void exibirProduto(Produto *p) {
  printf("{%d, %s, %.2lf, %d, %c}",p->codigo, p->nome, p->valor, p->quantidade, p->categoria);  
}

// 6. Crie uma função: void exibirProdutos(int quantidade, Produto produtos[quantidade]); - recebe a quantidade de produtos a serem exibidos e um vetor de produtos. Em seguida, exibe os dados de cada produto. (Reutilize a função exibirProduto, para cada produto a ser exibido.)
void exibirProdutos(int quantidade, Produto produtos[quantidade]) {
  for (int i = 0; i < quantidade; i++){
    exibirProduto(&produtos[i]);
  }
}

int main(void) {
  Produto produtos[10] = {
  {1, "Mouse", 25.99, 50, 'E'},
  {2, "Teclado", 25.99, 50, 'E'},
  {3, "Monitor", 25.99, 50, 'E'},
  {4, "Camisa Chad", 25.99, 50, 'V'},
  {5, "Calça Jogging", 25.99, 50, 'V'},
  {6, "Alicate", 25.99, 50, 'F'},
  };

  //Caso eu quisesse continuar a lista de produtos acima, utilizaria:
    /*
    lerProduto(&produtos[6]); //Sétimo elemento da 
    gerarCodigo(&produtos[6], 5, produtos);
    preencherProdutos(3,produtos+7)
    */
  
  //Sobrepondo a lista acima
  preencheProdutos (2, produtos);
  exibirProdutos(2, produtos);
  return 0;

}
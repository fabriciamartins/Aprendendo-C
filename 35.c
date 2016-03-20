#include <stdio.h>
#include <stdlib.h>

struct endereco
{
	char rua[50];
	int numero;
	char bairro[20];
	char cidade[30];
	char sigla_estado[3];
	long int CEP;	
};

typedef struct restaurante
{
	char nome[50];
	struct endereco endereco;
	enum {brasileira, chinesa, francesa, italiana, japonesa} tipo_comida;
	enum {zero,um,dois,tres,quatro,cinco} nota_cozinha;
	struct restaurante *proximo;
}restaurante;

void inserir(restaurante **cabeca);
void listar(restaurante *cabeca);

int main()
{
	restaurante *cabeca = NULL; /*ponteiro para a cabeça da lista*/
	restaurante *noAtual; /*ponteiro a ser usado para percorrer a lista no momento de desalocar seus elementos*/
	char q; /*caracter para receber a opçao do usuario*/
	
	do{
		printf("\n\nOpcoes: \nI -> para inserir novo restaurante; \nL -> para listar os restaurantes; \nS -> para sair:\n");
		scanf("%c",&q); /*le a opcao do usuario*/
		
		switch(q)
		{
			case 'i': case 'I': inserir(&cabeca); break;
			case 'l': case 'L': listar(cabeca); break;
			case 's': case 'S': break;
			default: printf("\n\nOpcao invalida");
		}
		
		fflush(stdin); /*limpa o buffer de entrada*/
	}while((q != 's') && (q != 'S'));
	
	/*Desaloca a memoria alocada para os elementos da lista*/
	noAtual = cabeca;
	while(noAtual != NULL)
	{
		cabeca = noAtual.proximo;
		free(noAtual);
		noAtual = cabeca;
	}
}

/*listar todos os elementos presentes na lista encadeada*/
void listar(restaurante *noAtual)
{
	int i=0;
	
	while(noAtual != NULL) /*enquanto nao chega no fim da lista*/
	{
		i++;
		printf("\n\nRestaurante numero %d \n Nome: %s \nTipo de Comida: ",i,noAtual.nome);
		noAtual = noAtual->proximo; /*faz noAtual apontar para o proximo no*/
	}
}

/*funcao para inserir um novo no, ao final da lista*/
void inserir(restaurante **cabeca)
{
	restaurante *noAtual, *novoNo;
	char nome[];
	enum tipo_comida tipo_comida;
	enum nota_cozinha nota_cozinha;
	
	printf("\nNome do novo restaurante:");
	scanf("%s",&nome);
	printf("\nTipo de comida:");
	scanf("%d",&tipo_comida);
	printf("\nNota da Cozinha:");
	scanf("%d",&nota_cozinha);
	
	if(*cabeca == NULL) /*se ainda não existir nenhum restaurante na lista*/
	{
		/*cria o nó cabeca*/
		*cabeca = (restaurante *)malloc(sizeof(restaurante));
		(*cabeca)->nome = nome;
		(*cabeca)->tipo_comida = tipo_comida;
		(*cabeca)->nota_cozinha = nota_cozinha;
		(*cabeca)->proximo = NULL;
	}
	else
	{
		/*se ja existirem elementos na lista, deve percorre-la ate o seu final e inserir o novo elemento*/
		noAtual = *cabeca;
		while(noAtual->proximo != NULL)
		{
			noAtual = noAtual.proximo; /*ao final do while, noAtual aponta para o ultimo nó*/
		}
		
		novoNo = (restaurante *)malloc(sizeof(restaurante)); /*aloca memoria para o novo nó*/
		novoNo->nome = nome;
		novoNo->tipo_comida = tipo_comida;
		novoNo->nota_cozinha = nota_cozinha;
		novoNo->proximo = NULL;
		noAtual->proximo = novoNo; /*faz o ultimo nó apontar para o novo ultimo nó*/
	}
}


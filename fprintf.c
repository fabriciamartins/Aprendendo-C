#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *file;
	char str[80], c;
	
	/*Le um nome para o arquivo a ser aberto*/
	printf("\n\n Entre com um nome para o arquivo:\n");
	gets(str);
	
	if(!(file = fopen(str, "w"))) /*Caso ocorra algum erro na abertura do arquivo...*/
	{
		printf("Erro! Impossivel abrir o arquivo!\n");
		exit(1); /*... o programa aborta automaticamente*/
	}
	
	/*Se nao houve erro, imprime no arquivo, fecha...*/
	fprintf(file, "Este eh um arquivo chamado:\n%s\n",str);
	fclose(file);
	
	/*Abre novamente para a leitura*/
	file = fopen(str, "r");
	while(!feof(file))
	{
		fscanf(file, "%c",&c);
		printf("%c",c);
	}
	
	fclose(file);
	return(0);
}

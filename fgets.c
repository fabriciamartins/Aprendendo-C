#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE *file;
	char str[30],frase[] = "Este e um arquivo chamado: ", resposta[80];
	int i;
	
	/*Le um nome para o arquivo a ser aberto*/
	printf("\n\nEntre com um nome para o arquivo:\n");
	fgets(str,29,stdin); /*Usa fgets como se fosse gets*/
	
	for(i=0; str[i]; i++)
	{
		if(str[i] == '\n')
		{
			str[i] = 0; /*Elimina o \n da string lida*/
		}
	}
	
	if(!(file = fopen(str, "w")))/*Caso ocorra algum erro na abertura do arquivo...*/
	{
		printf("Erro! Impossivel abrir arquivo!\n");
		exit(1);/*... o programa aborta automaticamente*/
	}
	
	/*Se não houve erro, imprime no arquivo e o fecha*/
	fputs(frase, file);
	fputs(str, file);
	fclose(file);
	
	/*Abre novamente o arquivo e le*/
	file = fopen(str, "r");
	fgets(resposta, 79, file);
	printf("\n\n%s\n",resposta);
	fclose(file);
	remove(str);
	return(0);
}

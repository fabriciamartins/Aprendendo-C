#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char c;
	fp = fopen("arquivo.txt","r"); /*Arqvuivo  ASCII para leitura*/
	if(!fp)
	{
		printf("Erro na abertura do arquivo.");
		exit(0);
	}
	while((c=getc(fp)) != EOF) /*Enquanto não chegou ao final do arquivo...*/
	{
		printf("%c",c); /*...imprime o caracter lido*/
	}
	fclose(fp);
	return(0);
}

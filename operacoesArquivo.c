#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	FILE *p;
	char c, str[30], frase[80] = "Este e um arquivo chamado: ";
	int i;
	
	printf("\n\nEntre com um nome para o arquivo:\n"); /*Le um nome para o arquivo a ser aberto*/
	gets(str);
	
	if(!(p=fopen(str,"w"))) /*Caso ocorra algum erro na aberturado arquivo*/
	{
		printf("Erro! Impossivel abrir o arquivo!\n");
		exit(1);
	}
	
	/*Se não houve erro ao abrir o arquivo, imprime no arquivo e fecha*/
	strcat(frase,str);
	for(i=0;frase[i];i++)
	{
		putc(frase[i],p);
	}
	fclose(p);
	
	p=fopen(str,"r"); /*Abre novamente para leitura*/
	c=getc(p); /*Le o primeiro caracter*/
	while(!feof(p)) /*Enquanto não se chega ao final do arquivo*/
	{
		printf("%c",c); /*Imprime o caracter na tela*/
		c=getc(p); /*Le um novo caracter do arquivo*/
	}
	fclose(p); /*Fecha o arquivo*/
}

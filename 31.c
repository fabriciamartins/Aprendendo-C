#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	FILE *f;
	int i=0;
	char c, nome_arquivo[30];
	
	printf("Digite o nome do arquivo que deseja abrir: ");
	gets(nome_arquivo);
	
	f=fopen(nome_arquivo,"r");
	
	if(!f)
	{
		printf("\nErro ao abrir o arquivo: %s",nome_arquivo);
		exit(0);
	}
	while(!feof(f))
	{
		c = getc(f);
		printf("%c",c);
		i++;
	}
	fclose(f);
	
	printf("\nO arquivo %s contem %d caracteres.",nome_arquivo,i);
	
	return(0);
}

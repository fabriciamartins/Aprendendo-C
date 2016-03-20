#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	
	FILE *file;
	int espaco = 10;
	char espacos = ' ';
	char c;
	
	if(!(file = fopen("lista-nomes-e-idades.txt","r")))
	{
		printf("Erro ao abrir arquivo");
		exit(1);
	}
	
	printf("NOMES     | IDADES\n");
	printf("-------------------\n");
	while(!feof(file))
	{
		espaco--;
		fscanf(file,"%c",&c);
		
		if(c == ' ')
		{
			for(espaco; espaco >= 0; espaco--)
			{
				printf(" ");
			}
			printf("|");
			espaco = 13;
		}
		
		printf("%c",c);
	}
	
	
}

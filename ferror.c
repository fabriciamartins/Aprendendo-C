#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *file;
	char string[100];
	
	if((file=fopen("arquivo.txt","w")) == NULL)
	{
		printf("\nNao consigo abrir o arquivo!");
		exit(1);
	}
	
	do{
		printf("\nDigite uma nova string. Para terminar, digite <enter>:");
		gets(string);
		fputs(string,file);
		putc('\n',file);
		
		if(ferror(file))
		{
			perror("Erro na gravacao");
			fclose(file);
			exit(1);
		}
	}while(strlen(string) > 0);
	
	fclose(file);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *file;
	float  pi = 3.1415;
	float pilido;
	
	if((file = fopen("arquivo.bin","wb")) == NULL) /*Abre arquivo binário para escrita*/
	{
		printf("Erro na abertura do arquivo");
		exit(1);
	}
	
	/*sizeof retorna o tamanho em bytes da variável ou do tipo de dados*/
	if(fwrite(&pi, sizeof(float), 1, file) != 1) /*Escreve a variável pi*/
	{
		printf("Erro na escrita  do arquivo");
	}
	fclose(file); /*Fecha o arquivo*/
	
	if((file = fopen("arquivo.bin","rb")) == NULL) /*Abre o arquivo novamente para leitura*/
	{
		printf("Erro na abertura do arquivo");
		exit(1);
	}
	
	if(fread(&pilido, sizeof(float), 1, file) != 1) /*Le em pilido o valor da variavel armazenada*/
	{
		printf("Erro na leitura do arquivo");
	}
	
	printf("\nO valor de PI, lido do arquivo eh: %f",pilido);
	fclose(file);
	return(0);
}

#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
	int mes;
	char *nomeMes[] = {"Janeiro","Fevereiro","Março","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
	
	if(argc == 4) /*Testa se o numero de parametros fornecidos esta correto
					o primeiro parametro e o nome do programa, o segundo o dia
					o terceiro o mes e o quarto os dois ultimos algorismos do ano*/
	{
		mes =  atoi(argv[2]); /*argv contem strings. A string referente ao mes deve ser transformada
								em um numero inteiro. A funcao atoi esta sendo usada para isto: recebe
								a string e transforma no inteiro equivalente*/
		
		if(mes<1 || mes>12) /*Testa se o mes eh valido*/
			printf("Erro!\n Uso: data dia mes ano, todos inteiros");
		else
			printf("\n%s de %s de 19%s", argv[1], nomeMes[mes-1],argv[3]);
	}
	else
		printf("Erro! \n Uso: data dia mes ano, todos inteiros");
}

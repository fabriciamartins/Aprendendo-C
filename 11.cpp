#include <stdio.h>

int main()
{
	int dia_semana;
	
	printf("Digite um numero correspondente a um dia da semana, conforme abaixo: \n	1 - Segunda\n 2 - Ter�a\n 3 - Quarta\n 4 - Quinta\n 5 - Sexta\n 6 - S�bado\n 7 - Domingo\n");
	scanf("%d",&dia_semana);
	
	switch(dia_semana)
	{
		case 1:
			printf("Dia da semana: Segunda");
			break;
		case 2:
			printf("Dia da semana: Ter�a");
			break;
		case 3:
			printf("Dia da semana: Quarta");
			break;
		case 4:
			printf("Dia da semana: Quinta");
			break;
		case 5:
			printf("Dia da semana: Sexta");
			break;
		case 6:
			printf("Dia da semana: S�bado");
			break;
		case 7:
			printf("Dia da semana: Domingo");
			break;
		default:
			printf("O dia informado n�o condiz com nenhum dia da semana.");
	}
	
	return(0);
		
}

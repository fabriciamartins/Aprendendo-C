#include <stdio.h>

/*Programa que ler duas strings e as imprime na tela.
	Imprime tambem a segunda letra de cada string.*/
int main()
{
	
	char string1[100];
	char string2[100];
	
	printf("Digite a primeira string: \n");
	scanf("%s",&string1);
	printf("Digite a segunda string: \n");
	scanf("%s",&string2);
	
	printf("Primeira string digitada: %s \n",string1);
	printf("Segunda string digitada: %s \n\n",string2);
	
	printf("Segunda letra da primeira string: %c \n",string1[1]);
	printf("Segunda letra da segunda string: %c",string2[1]);
	
	return(0);
}

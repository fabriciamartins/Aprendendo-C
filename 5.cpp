#include <stdio.h>
#include <conio.h>

/*Programa que ler um caracter digitado pelo usuario, imprime o 
	caracter digitado e o seu respectivo codigo ASCII*/
int main()
{

	char c;
	c = getch();
	printf("Caracter digitado: %c",c);
	printf("Codigo ASCII do caracter digitado: %d",c);
	return(0);

}

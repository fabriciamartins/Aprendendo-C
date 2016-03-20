#include <stdio.h>
#include <string.h>

void PrintString(char *str, int (*func)(const char *));

main(void)
{
	char String[20] = "Curso de C";
	
	int (*p)(const char *); /*Declaracao do ponteiro para funcao*/
							/*Funcao apontada eh inteira e recebe como parametro uma string constante*/
	
	p = puts; /*O ponteiro p passa a apontar para a funcao puts que tem o seguinte prototipo: int puts(const char *)*/
	
	PrintString(String, p);
	
	return(0);
}

void PrintString(char *str, int (*func)(const char *))
{
	(*func)(str); /*Chamada a função atraves do ponteiro para funcao*/
	func(str); /*Maneira também válida de se fazer a chamada a funcao puts atraves do ponteiro para funcao func*/
}

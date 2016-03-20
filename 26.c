#include <stdio.h>

void zerarVariaveis(int *a, int*b)
{
	*a=0;
	*b=0;
}

main()
{
	int a = 10;
	int b = 20;
	
	printf("Valor antes de chamar a funcao: a=%d b=%d",a,b);
	
	zerarVariaveis(&a,&b);
	
	printf("\nValor depois de chamar a funcao: a=%d b=%d",a,b);
}

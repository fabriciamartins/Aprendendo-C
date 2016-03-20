#include <stdio.h>
#define impar(x) ((x%2!=0) ? (1):(0))

main()
{
	int valor;
	printf("Digite um numero: ");
	scanf("%d",&valor);
	int isImpar = impar(valor);
	if(isImpar)
	{
		printf("\n O valor %d eh impar",valor);
	}
	else
	{
		printf("\n O valor %d eh par",valor);
	}
	
}

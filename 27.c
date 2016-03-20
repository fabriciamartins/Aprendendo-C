#include <stdio.h>

void levetor(int *vet, int dimensao)
{
	int i=0;
	
	for(i=0; i < dimensao; i++)
	{
		int inteiro;
		printf("Digite um numero inteiro: ");
		scanf("%d",&inteiro);
		vet[i] = inteiro;
	}
}

main()
{
	int vet[5];
	int i=0;
	
	levetor(vet,5);
	
	for(i=0; i < 5; i++)
	{
		printf("%d",vet[i]);
	}
}

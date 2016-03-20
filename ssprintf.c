#include <stdio.h>

main()
{
	int i;
	char  string1[20];
	printf("Entre com um valor inteiro: ");
	scanf("%d",&i);
	sprintf(string1, "Valor de i = %d",i);
	puts(string1);
	return (0);
}

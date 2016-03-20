#include <stdio.h>
#include <stdlib.h> /*Para usar malloc*/
#include <string.h>

main(void)
{
	int *p;
	char a[50] = "Testando malloc";
	int i;
	
	p = (int *)malloc(sizeof(a));
	
	if(!p)
	{
		printf("** Erro: Memoria insuficiente **");
		exit;
	}
	
	for(i=0; p[i]; i++)
	{
		printf("%c",p[i]);
	}
	
	return(0);
}

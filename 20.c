#include <stdio.h>

void StrCat(char *destino, char *origem)
{
	while(*destino){
		destino++;
	}
	
	while(*origem){
		*destino = *origem;
		destino++;
		origem++;
	}
}

int main()
{
	char str1[100] = "Fabricia";
	char str2[100] = "Martins";

	StrCat(str2,str1);
	printf("Resultado: %s",str2);
}

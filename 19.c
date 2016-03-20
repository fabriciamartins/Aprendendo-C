#include <stdio.h>

int StrLen(char *string)
{
	int len = 0;
	
	while(*string)
	{
		len++;
		string++;
	}
	
	return len;
	
}

int main()
{
	char str[100];
	printf("Digite uma string: ");
	gets(str);
	
	printf("O tamanho da string digitada eh: %d",StrLen(str));
}

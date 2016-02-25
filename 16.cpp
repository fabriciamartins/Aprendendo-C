#include <stdio.h>
#include <string.h>

int main()
{
	
	char string1[100], string2[100], string3[100], string4[100];
	
	printf("Digite uma palavra: \n");
	gets(string1);
	
	printf("Digite uma palavra: \n");
	gets(string2);
	
	printf("Digite uma palavra: \n");
	gets(string3);
	
	printf("Digite uma palavra: \n");
	gets(string4);
	
	strcat(string1,string2);
	strcat(string1,string3);
	strcat(string1,string4);
	
	printf("Strings concatenadas: %s",string1);
}

#include <stdio.h>
#include <string.h>

int main()
{

	int index_string_invertida=0;
	char string[100];
	
	printf("Digite uma palavra: \n");
	gets(string);
	
	int tamanho_string = strlen(string)-1;
	char string_invertida[tamanho_string];
	int contador = tamanho_string;
	
	while(contador>=0)
	{
		string_invertida[index_string_invertida] = string[contador];
		index_string_invertida++;
		contador--;
	}
	
	printf("String: %s \n",string);
	printf("String invertida: %s",string_invertida);
	
}

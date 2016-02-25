#include <stdio.h>

int main(){
	
	int count;
	int count_a = 0;
	
	char string[100];

	printf("Digite uma palavra: ");

	gets(string);

	for(count=0; string[count]!='\0' ;count++){
		
		if(string[count]=='a'){
			count_a++;
			string[count] = 'b';
		}
		
	}
	
	printf("Numero caracter modificados: %d \n",count_a);
	printf("String modificada: %s",string);

	return (0);

}

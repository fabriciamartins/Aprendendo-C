#include <stdio.h>

int main()
{
	
	int num[100]; /*Declara um vetor de inteiros de 100 posicoes*/
	int count = 0;
	int total_nums;
	
	do{
		
		printf("\n Entre com um numero (-999 para terminar): ");
		scanf("%d", &num[count]);
		count++;
		
		if(count==100)
		{
			break;
		}
		
	}while(num[count-1] != -999);
	
	total_nums = count-1;
	printf("\n\n\n\t Os numeros que voce  digitou formam:\n\n");
	for(count=0; count<total_nums; count++)
	{
		printf("%d",num[count]);
	}
	
	return(0);
	
}

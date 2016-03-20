#include <stdio.h>

int strend(char *s, char *t)
{
	
	char *temp = t;
	
	while(*t)
	{
		t++;
	}
	
	while(*s)
	{
		s++;
	}
	
	while(*temp)
	{
		s--;
		t--;
		
		if(*s != *t)
		{
			return 0;
		}
		temp++;
	}
	
	return 1;
	
}

int main()
{
	char str1[100] = "testebubu";
	char str2[100] = "bubu";
	printf("Resultado: %d",strend(str1,str2));
}

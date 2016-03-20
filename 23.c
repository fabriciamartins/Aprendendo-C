#include <stdio.h>

int main()
{
	int matriz[100][100];
	int inteiro = 0;
	int *p = &inteiro;
	int i;
	int j;
	int k;
	int l;
	int m;
	int n;
	
	for(i=0; i<101; i++)
	{
		for(j=0; j<101; j++)
		{
			matriz[i][j] = 0;
		}
	}
	
	/*
	for(k=0; k<101;k++)
	{
		for(l=0; l<101; l++)
		{
			//matriz[k][l] = p++;
		}
	}*/
	
	for(m=0; m<101; m++)
	{
		for(n=0; n<101; n++)
		{
			printf("%d",matriz[m][n]);
		}
	}
}

#include <stdio.h>

int num;

int func(int a, int b)
{
	a =  (a+b)/2; /*valor de a após a atribuição = 25*/
	num -= a;
	return a;
}

main()
{
	int first = 0, sec = 50;
	num = 10;
	num += func(first, sec); /*antes da atribuicao: num=10, first=0; sec=50; depois da atribuicao: num=10, first=0; sec=50*/
	printf("\n\nConfira! num = %d\t first = %d \t sec = %d", num, first, sec);
}

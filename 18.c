#include <stdio.h>

int main()
{

	/*declaração das variaveis y e x, e do ponteiro p*/
	int y, *p, x;
	/*inicializacao da variavel y com valor 0*/
	y = 0;
	/*inicialização do ponteiro p com o endereço da variavel y*/
	p = &y;
	/*inicialização da variavel x com o valor do ponteiro p*/
	x = *p;
	/*variavel x recebe valor 4*/
	x = 4;
	/*acrescimo no valor do ponteiro p*/
	(*p)++;
	/*acrescimo na variavel x*/
	x--;
	/*acrescimo do valor da variavel x no valor do ponteiro p*/
	(*p) += x;
	
	printf("y = %d\n",y);
	
	return(0);
	
}

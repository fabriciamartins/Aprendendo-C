#include <stdio.h>

int main()
{

	/*declara��o das variaveis y e x, e do ponteiro p*/
	int y, *p, x;
	/*inicializacao da variavel y com valor 0*/
	y = 0;
	/*inicializa��o do ponteiro p com o endere�o da variavel y*/
	p = &y;
	/*inicializa��o da variavel x com o valor do ponteiro p*/
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

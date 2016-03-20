#include <stdio.h>
#include <math.h>

struct ponto
{
	int x;
	int y;	
};

main(void)
{
	struct ponto pontoA;
	struct ponto pontoB;
	int distanciaPontos;
	
	pontoA.x = 2;
	pontoA.y = -3;
	
	pontoB.x = 4;
	pontoB.y = 5;
	
	distanciaPontos = sqrt((pow((pontoB.x - pontoA.x),2)) + (pow((pontoB.y - pontoA.y),2)));
	
	printf("Distancia entre os dois pontos: %d",distanciaPontos);
}

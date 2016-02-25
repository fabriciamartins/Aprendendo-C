#include <stdio.h>

int dia, mes, ano;

bool isBissexto(int valorAno)
{
	
	if(valorAno%400==0)
	{
		return true;
	}
	else if( (valorAno%4==0) && (valorAno%100!=0) )
	{
		return true;
	}
	
	return false;
}

bool isDiaValido(int valorDia)
{
	
	if((valorDia>=1) && (valorDia<=31))
	{
		return true;	
	}
	else
	{
		return false;
	}
	
}

bool isMesValido(int valorMes)
{
	
	if( (valorMes>=1) && (valorMes<=12) )
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

bool isAnoValido(int valorAno)
{
	
	if( (valorAno>=1900) && (valorAno<=2100) )
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

int calcularNumeroDoDiaNoAno()
{

	int numero=0;

	if(mes>1){
		
		for(int contador=1; contador<=mes; contador++)
		{
			
			if(contador==mes){
				numero+=dia;
			}
			else if(contador==2)
			{
				
				if(isBissexto(ano))
				{
					numero+=29;	
				}
				else
				{
					numero+=28;	
				}	
			}
			else if(contador%2==0)
			{
				numero+=30;
			}
			else
			{
				numero+=31;
			}
			
		}
		
	}
	
	return numero;
	
}

int main()
{
	
	bool continua_loop = true;
	
	do{
		
		printf("Digite um dia: %d \n");
		scanf("%d",&dia);
		
		printf("Digite um mes: %d \n");
		scanf("%d",&mes);
		
		printf("Digite um ano: %d \n");
		scanf("%d",&ano);
		
		
		if( (isDiaValido(dia)) && (isMesValido(mes)) && (isAnoValido(ano)) )
		{
			
			if(mes==2)
			{
				
				if( dia<=28 )
				{
					continua_loop = false;
				}
				else if( (dia==29) && (isAnoValido(ano)) )
				{
					continua_loop = false;	
				}
				
			}
			else
			{
				continua_loop = false;	
			}
			
		}
		
	}while(continua_loop);
	
	printf("Numero do dia correspondente no ano: %d",calcularNumeroDoDiaNoAno());
	
	return(0);
	
}



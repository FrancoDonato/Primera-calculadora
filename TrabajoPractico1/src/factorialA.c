#include "Bibliotecas.h"

int factorialA (int numero1)
{
	int resultado=1;
	int i;

	if(numero1<-1)
	{
		for(i = numero1 ; i < -1; i++)
		{
			resultado=resultado*i;
		}
	}
	else
		if(numero1>1)
	{
		for(i = numero1 ; i > 1; i--)
		{
	      resultado=resultado*i;
		}
	}


	return resultado;
}

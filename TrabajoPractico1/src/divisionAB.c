#include "Bibliotecas.h"

void divisionAB (int numero1, int numero2)
{
	float resultado;

	if(numero2!=0)
	{
	resultado = numero1 / (float)numero2;

	printf("\nEl resultado de la division entre %d y %d es: %.2f \n", numero1, numero2, resultado);

	}
	else
	{
		printf("\nError! No es posible realizar una division por 0 \n");
	}
}

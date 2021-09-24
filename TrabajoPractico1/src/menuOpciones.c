#include "Bibliotecas.h"

int menuOpciones(int numero1, int numero2)
{
	int resultado;

	printf("\n1.Calcular suma de %d + %d.\n", numero1, numero2);
	printf("2.Calcular resta de %d - %d.\n", numero1, numero2);
	printf("3.Calcular la division %d / %d.\n", numero1, numero2);
	printf("4.Calcular la multiplicacion %d * %d.\n", numero1, numero2);
	printf("5.Calcular el factorial %d y %d.\n", numero1, numero2);
	printf("6.Reingresar datos.\n");
	printf("7.Mostrar todos los resultados. \n");
	printf("8. Salir.\n");
	printf("Elija una de las opciones:\n");
	scanf("%d", &resultado);

	return resultado;
}

#include "Bibliotecas.h"

int main(void) {
	setbuf(stdout, NULL);
	int opcion;
	int numero1;
	int numero2;
    int suma;
    int resta;
    int multiplicacion;
	int factorial1;
	int factorial2;

	printf("Bienvenid@ a la calculadora de Franco Donato Gonzalez.\n\n");

	printf("Ingrese el primer numero: \n");
	scanf("%d", &numero1);
	printf("Ingrese el segundo numero: \n");
	scanf("%d", &numero2);
	do
	{
		system("cls");
		opcion=menuOpciones(numero1, numero2);

	switch(opcion)
	{
		case 1:
			suma=sumaAB(numero1, numero2);
			printf("\nEl resultado de la suma es: %d \n\n", suma );
			break;
		case 2:
			resta=restaAB(numero1, numero2);
			printf("\nEl resultado de la resta es : %d \n\n", resta);
			break;
		case 3:
			divisionAB(numero1, numero2);
			break;
		case 4:
		 	multiplicacion=multiplicacionAB(numero1, numero2);
			printf("\nEl resultado de la multiplicacion entre %d y %d es: %d \n\n", numero1, numero2, multiplicacion);
			break;
		case 5:
			factorial1=factorialA(numero1);
			printf("\nEl factorial de %d es : %d\n\n", numero1, factorial1);
			factorial2=factorialA(numero2);
			printf("\nEl factorial de %d es : %d\n\n", numero2, factorial2);
			break;
		case 6:
			printf("\nIngrese un nuevo numero:");
			scanf("%d", &numero1);
			printf("\nIngrese otro nuevo numero:");
			scanf("%d", &numero2);
			break;
		case 7:
			suma=sumaAB(numero1, numero2);
			printf("\nEl resultado de la suma es: %d \n", suma);
			resta=restaAB(numero1, numero2);
			printf("\nEl resultado de la resta es : %d \n", resta);
			divisionAB(numero1, numero2);
			multiplicacion=multiplicacionAB(numero1, numero2);
			printf("\nEl resultado de la multiplicacion entre %d y %d es: %d \n", numero1, numero2, multiplicacion);
			factorial1=factorialA(numero1);
			printf("\nEl factorial de %d es : %d\n", numero1, factorial1);
			factorial2=factorialA(numero2);
			printf("\nEl factorial de %d es : %d\n", numero2, factorial2);
			break;
		case 8:
			printf("\n\nGracias por utilizar la calculadora!");
			break;
		default:
			printf("\nError! Ingrese una opcion valida");
			break;
	}
	 system("pause");
	}while(opcion!=8);

}

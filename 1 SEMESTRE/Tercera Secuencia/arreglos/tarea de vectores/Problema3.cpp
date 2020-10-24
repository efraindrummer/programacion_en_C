/*Almacenar 10 números en un vector, elevar al cuadrado cada valor almacenado en el vector, almacenar
el resultado en otro vector. Imprimir el vector original y el vector resultante.*/

#include <stdio.h>
#include <math.h>

void lectura (int x[10])
{
	printf("Ingrese 10 numeros: \n");
	
	for (int i=0; i<10; i++)
	{
		printf("%d = ", i + 1);
		scanf("%d", & x[i]);
	}
}

void cuadrado(int x[10], int y[10])
{
	for (int i=0; i<10; i++)
	{
		y[i] = x[i] * x[i];
	}	
}

void resultado(int x[10], int y[10])
{
	for (int i=0; i<10; i++)
	{
		printf("\n%d = %d", x[i], y[i]);
	}
}

main()
{
	int x[10], y[10];
	
	lectura(x);
	cuadrado(x, y);
	resultado(x, y);
}

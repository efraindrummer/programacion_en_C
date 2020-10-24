/*LLenar un vector de 15 elementos, imprimir la posición y el valor del elemento mayor almacenado 
en el vector. Suponga que todos los elementos del vector son diferentes.*/

#include <stdio.h>

void lectura (int v[15])
{
	printf("Ingrese 15 numeros: \n");
	
	for (int i=0; i<15; i++)
	{
		printf("%d. ", i + 1);
		scanf("%d", & v[i]);
	}
}

void mayor (int v[15])
{
	int auxM = 0, posM = -1;
	
	for (int i=0; i<15; i++)
	{
		if (v[i] > auxM)
		{
			auxM = v[i];
			posM = i;
		}
	}
	printf("\nEl mayor es %d y se encuentra en la posicion %d", auxM, posM + 1);
}

main()
{
	int x[15];
	
	lectura (x);
	mayor (x);
}

/*Generar una matriz de mXn que pida cuántos elementos se van a ingresar y la coordenada en
el que se requiere almacenar cada dato:
Ejemplo: ingresar 5 datos.
Para cada dato ingresar los valores de la siguiente forma dato, renglón, columna.
5, 1, 2
10, 2, 4
7, 0, 3
1, 3, 1
8, 4, 2 */

#include <stdio.h>
#define maxcol 20
#define maxfil 30

void leer(int a[][maxcol], int b[][maxcol], int m, int n){
	
	for(int x=0;x<n;x++){
		printf("\n Introducir datos para la fila [%i][%i] N:%d", x+1);
		for(int y=0;y<m;y++)
		scanf("%d", a[x][y]);
	}
	return;
}

void resolver(int a[][maxcol], int b[][maxcol], int m, int n){
	
	for(int x=0;x<n;x++){
		for(int y=0;y<m;y++)
		
	}
}



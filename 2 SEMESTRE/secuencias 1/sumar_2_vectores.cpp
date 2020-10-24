//calcular la suma de los elementos en dos tablas de enteros

#include <stdio.h>
//constantes
#define MAXFIL 20
#define MAXCOL 30

void leerentrada(int [][MAXCOL], int nfilas, int ncols);
void calcularsuma(int [][MAXCOL], int b[][MAXCOL], int [][MAXCOL], int nfilas, int ncols);
void escribirsalida(int [][MAXCOL], int nfilas, int ncols);

main(){
	
	int nfilas, ncols;
	/* definiciones de arrays */
	int a[MAXFIL][MAXCOL], b[MAXFIL][MAXCOL], c[MAXFIL][MAXCOL] ;
		
	printf("¿Cuantas filas?: ");
	scanf("%d", &nfilas);
	
	printf("¿Cuantas columnas? ");
	scanf ("%d", &ncols);
	
	printf ("\n\nPrimera tabla: \n");
	leerentrada(a, nfilas, ncols);
	
	printf ( "\n\nSegunda tabla: \n") ;
	leerentrada(b, nfilas, ncols);
	
	calcularsuma(a, b, c, nfilas, ncols);
	
	printf("\n\nsuma de elementos:\n\n");
	escribirsalida(c, nfilas, ncols);
}

void leerentrada(int a[][MAXCOL], int m, int n){
	
	for(int fila=0;fila<m;fila++){
		printf("\n Introducir datos para la fila n %2d\n", fila + 1);
		for(int col=0;col<n;col++)
		scanf("%d", &a[fila][col]);
	}
	return;
}
//sumas los elementos de las 2 tablas de enteros
void calcularsuma(int a[][MAXCOL], int b[][MAXCOL], int c[][MAXCOL], int m, int n){
	
	for(int fila=0;fila<m;fila++)
		for(int col=0;col<n;col++)
		
		c[fila][col] = a[fila][col] + b[fila][col];
		return;
}
//escribir una tabla de enteros
void escribirsalida(int a[][MAXCOL], int m, int n){
	
	for(int fila=0;fila<m;fila++){
		for(int col=0;col<n;col++)
		printf("%d ", a[fila][col]);
		printf("\n");
	}return;
}



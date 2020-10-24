#include<stdio.h>
#define maxcol 30
#define maxfil 20
/*calcular la suma de los elementos en dos tablas de enteros*/

void entrada(int a[][maxcol],int nfilas, int ncols);
void salida(int c[][maxcol],int nfilas, int ncols);

main(){
	int nfilas, ncols;
	/*definiciones de arrays*/
	int a[maxfil][maxcol], b[maxfil][maxcol], c[maxfil][maxcol];
	
	printf("¿Cuantas filas? \n");
	scanf("%d",&nfilas);
	
	printf("¿Cuantas columnas? \n");
	scanf("%d",&ncols);
	
	entrada(a,nfilas,ncols);
		
	printf("\n linea intermedia: \n \n");
	salida(a,nfilas,ncols);
}

/*leer una tabla de enteros*/

void entrada(int a[][maxcol],int m, int n){
	int fila, col;
	
	for(fila=0; fila<m; fila++){
		for(col=0; col<n; col++)
		if(fila==col){
			a[fila][col]=1;
		}else{
			if(fila!=col){
				a[fila][col]=0;	
			}
		}
	}return;
}

void salida(int a[][maxcol],int m, int n){
	int fila, col;
	
	for(fila=0; fila<m; fila++){
		for(col=0; col<n; col++)
		printf("%d ",a[fila][col]);
	    printf("\n");
	}return;
}

	
	
	
	
	

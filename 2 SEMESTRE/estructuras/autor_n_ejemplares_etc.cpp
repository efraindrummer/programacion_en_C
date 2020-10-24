#include <stdio.h>
#define M 10

void leerentrada(int i);
void escribirsalida(int i);

struct libro {
	char titulo[80];
	char autor[80];
	char ISBN[16];
	int ejemplares;
}   libros[M];

main(){
	int i, n;
	
	printf("SISTEMA DE REGISTRO DE LIBROS\n\n");
	printf("¿Cuantos libros desea registrar?  ");
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
	leerentrada(i);
   	
	for(i=0;i<n;++i){
	escribirsalida(i);
}
}
}

void leerentrada(int i){
	
	printf("\nLIBRO n° %d", i+1);
	printf("\nTITULO: ");
	scanf(" %[^\n]", libros[i].titulo);
	
	printf(" AUTOR: ");
	fflush(stdin);
	scanf(" %[^\n]", libros[i].autor);
	
	printf(" ISBN: ");
	fflush(stdin);
	scanf(" %[^\n]", libros[i].ISBN);
	
	printf(" NUMERO DE EJEMPLARES: ");
	fflush(stdin);
	scanf("%d", libros[i].ejemplares);
	return;
}

void escribirsalida(int i){
	
	printf("\nTUTULO DEL LIBRO: %s", libros[i].titulo);
	printf(" AUTOR: %s\n", libros[i].autor);
	printf(" ISBN: %s\n", libros[i].ISBN);
	printf("NUMERO DE EJEMPLARES: %d\n\n", libros[i].ejemplares);
}

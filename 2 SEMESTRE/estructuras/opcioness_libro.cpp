#include <stdio.h>
#include <stdlib.h>
#define M 10

void leerentrada(libro libros[]);
void leersalida(libro, libros[]);
void saludo();
int menu();

typedef struct libro {
	char titulo[80];
	char autor[80];
	char ISBN[16];
	int ejemplares;
}libros[M];

main(){
	int i, n, op;
	
	printf("SISTEMA DE REGISTRO DE LIBROS\n\n");
	printf("¿Cuantos libros desea registrar?  ");
	scanf("%d", &n);
	
	do{
		op=menu();
		switch(op){
			case 1:
				for(i=0;i<n;i++){
					leerentrada(i);
				}
				break;
			case 2:
				for(i=0;i<n;i++){
					leerentrada(i);
				}
				break;
			case 0: saludo(); break;
			default : printf("opcion no valida");
			break;	
		}
				system("pause");
				system("cls");
	}while(op!=0);
}

void leerentrada(int i, libro libros[]){
	
	printf("\nLIBRO n° %d", i+1);
	printf(" \nTITULO: ");
	fflush(stdin);
	scanf(" %[^\n]", libros[i].titulo);
	
	printf(" AUTOR: ");
	fflush(stdin);
	scanf(" %[^\n]", libros[i].autor);
	
	printf(" ISBN: ");
	fflush(stdin);
	scanf(" %[^\n]", libros[i].ISBN);
	
	printf(" NUMERO DE EJEMPLARES:  ");
	fflush(stdin);
	scanf(" %d", libros[i].ejemplares);
	return;
}

int menu(){
	int op;
		
	printf("\n1.REGISTRO DE LIBROS");
	printf("\n2.IMPRIMIR REGISTROS");
	printf("\n0.salir");
	printf("\n\ningresar opcion: ");	
	scanf("%d", &op);
	return op;
}

void escribirsalida(int i){
	
	printf("\nTUTULO DEL LIBRO: %s", libros[i].titulo);
	printf(" AUTOR: %s\n", libros[i].autor);
	printf(" ISBN: %s\n", libros[i].ISBN);
	printf("NUMERO DE EJEMPLARES: %d\n\n", libros[i].ejemplares);
	return;
}

void saludo(){
	printf("gracias por su preferencia");
	printf("programa echo por EFRAIN MAY MAYO");
	system("pause");
	system("cls");
	return;
}

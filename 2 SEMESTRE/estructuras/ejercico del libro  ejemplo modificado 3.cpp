/*pasar un registro como parametro typedef struct{ }*/

#include<stdio.h>
#define M 10
#include<stdlib.h>

typedef struct {
	char Titulo[80];
	char Autor[80];
	char ISBN[16];
	int ejemplares;
}	libro;

void saludo();
void leerentrada(libro libros[], int n );
libro leerunregistro(int n);
void escribirsalida(libro libros[], int n);
void imprimirunregistro(libro libros);
int menu();

main()
{
	int i,n,opcion;
	libro libros[M];
	printf("SISTEMA DE REGISTRO DE LIBROS\n\n");
	printf("Cuantos libros desea registrar? ");
	scanf("%d",&n);
	do
	{
	opcion=menu();
	switch (opcion){
		case 1:
		leerentrada(libros,n);	
		break;
		
		case 2:
		escribirsalida(libros,n);
		break;
		
		case 3:saludo();break;
		default:printf("opcion no valida ");
		break;
		
		case 0:
		printf("Adios :3");
		break;		
	}
	} while(opcion!=0);

}

int menu(){
	int op;
	printf("\n1.Registro ");
	printf("\n2.Imprimir registro ");
	printf("\n3.saludo ");
	printf("\nIngresa opcion: ");
	scanf("%d",&op);
	return op;
}

libro leerunregistro(int r)

{
	libro librito;
	printf("\nLibro n° %d\n",r + 1);
	printf("   Titulo: ");
	scanf(" %[^\n]", librito.Titulo);
	printf("   Autor: ");
	scanf(" %[^\n]",librito.Autor);fflush(stdin);
	printf("   ISBN : ");
	scanf("%[^\n]", &librito.ISBN);
	printf("   Numero de ejemplares: ");
	scanf("%d", &librito.ejemplares);
	return librito;
}
void leerentrada(libro libros[], int n)
{
	int i;
	for(i=0;i<n;i++)
		libros[i]=leerunregistro(i);
}
void imprimeunregistro(libro l)
{
	printf("\nTitulo del libro: %s",l.Titulo);
	printf(" \nAutor: %s",l.Autor);
	printf(" \nISBN %sn",l.ISBN);
	printf("\nNumero de ejemplares: %d\n\n",l.ejemplares);
	return;
}
void escribirsalida(libro libros[],int n)
{
	int i;
	for(i=0;i<n;i++)
		imprimeunregistro(libros[i]);
	return;
}
void saludo()
{
	printf("Gracias por su preferencia!! ");
	printf("programa hecho por MI!! ");
	system("pause");
}

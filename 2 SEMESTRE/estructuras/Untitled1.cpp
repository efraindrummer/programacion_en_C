#include <stdio.h>
#include <stdlib.h>
#define M 100

typedef struct{
	int mes;
	int dia;
	int anio;
}   fecha;

typedef struct{
	char nombre[80];
	char calle[80];
	char ciudad[80];
	int num_cuenta;
	int tipo_cuenta;
	
	float anteriorsaldo;
	float nuevosaldo;
	float pago;
}cliente;

void saludo();
void escribirentrada(cliente clientes[], int i);
cliente leerunregistro();
void escribirsalida(cliente clientes[], int i);
void imprimirunregistro(cliente clientes[], int i);
int menu();

main(){
	int i, n, op;
	cliente clientes[M];
	
	printf("SISTEMA DE FACTURACION DE CLIENTES\n\n");
	printf("¿Cuantos clientes hay?  ");
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		escribirentrada(clientes, i);
		
		if(clientes[i].pago > 0)
		clientes[i].tipo_cuenta = (clientes[i].pago < 0.1 * clientes[i].anteriorsaldo) ?  'R'  :'A';
		else
			clientes[i].tipo_cuenta = (clientes[i].anteriorsaldo > 0) ? 'D' : 'A';
			
			clientes[i].nuevosaldo = clientes[i].anteriorsaldo - clientes[i].pago;							  
	

	for(i=0;i<n;++i){
		escribirsalida(clientes,i);
}
}
	do{
		op=menu();
		switch(op){
			case 1:
					for(i=0;i<n;i++){
					escribirentrada(clientes, i);
				}
				break;
				
				case 2:
						for(i=0;i<n;i++){
						escribirentrada(clientes, i);
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

int menu(){
	int op;
		
	printf("\n1.REGISTROS DE CLIENTES");
	printf("\n2.IMPRIMIR REGISTROS");
	printf("\n0.salir");
	printf("\n\ningresar opcion: ");	
	scanf("%d", &op);
	return op;
}

cliente imprimirunregistro(int i)
{/*leer datos de entrada y actualizar el registro del cliente*/

	cliente clientitos;
	printf("nCliente n° %d\n", i+1);
	printf("  Nombre:  ");
	scanf(" %[^\n]", clientes[i].nombre);
	
	printf("  Calle:  ");
	scanf(" %[^\n]", clientes[i].ciudad);
	
	printf("  Ciudad:  ");
	scanf(" %[^\n]", clientes[i].ciudad);
	
	printf("  Numero de cuenta:  ");
	scanf("%d", &clientes[i].num_cuenta);
	
	printf("  Saldo anterior:  ");
	scanf("%f", &clientes[i].anteriorsaldo);
	
	printf("  Pago actual:  ");
	scanf("%f", &clientes[i].pago);
	
	printf("  Fecha de pago (mm/dd/aa):  ");
	scanf("%d/%d/%d", &clientes[i].ultimopago.mes, &clientes[i].ultimopago.dia, &clientes[i].ultimopago.anio);
	
	return clientitos;
}

void escribirentrada(cliente clientes[], int i){
	int q;
	for(q=0;q<i;q++)
	clientes[q]=imprimirunregistro(i);
}



void imprimirunregistro(cliente l){
	int i;
	printf("\nNombre: %s", clientes[i].nombre);
	printf(" Número de cuenta: %d\n", clientes[i].num_cuenta);
	
	printf("Calle: %s\n", clientes[i].calle);
	printf("Ciudad: %s\n\n", clientes[i].ciudad);
	printf("Saldo anterior: %f", clientes[i].anteriorsaldo);
	printf("   Pago actual: %f", clientes[i].pago);
	printf("   Nuevo saldo: %f\n\n", clientes[i].nuevosaldo);
	printf ( "Estado de la cuenta: ");
	
	switch (clientes [i] . tipo_cuenta) {
		case 'A' :
		printf ("AL DIA\n\n");
		break;
		case 'R':
		printf("ATRASADA\n\n");
		break;
		case 'D':
		printf("DELINCUENTE\n\n");
		break;
	}
	return;
	}
	
void escribirsalida(cliente clientes[], int i){
	int q;
	for(q=0;q<i;q++)
	imprimirunregistro(clientes[i]);
}	
	
void saludo(){
	printf("GRACIAS POR SU PREFERENCIA");
	printf("PROGRAMA ECHO EFRAIN MAY MAYO");
	system("pause");
	system("cls");
	return;
}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void escribirentrada(int i);
void escribirsalida(int i);
int menu();
void saludo();

struct fecha{
	int mes;
	int dia;
	int anio;
};

struct cuenta{
	char nombre[80];
	char calle[80];
	char ciudad[80];
	int num_cuenta;
	int tipo_cuenta;
	
	float anteriorsaldo;
	float nuevosaldo;
	float pago;
	struct fecha ultimopago;
}cliente[100];

int menu(){
	int op;
		
	printf("\n1.REGISTROS DE CLIENTES");
	printf("\n2.IMPRIMIR REGISTROS");
	printf("\n0.salir");
	printf("\n\ningresar opcion: ");	
	scanf("%d", &op);
	return op;
}

main(){
	int i, n, op;
	
	printf("SISTEMA DE FACTURACION DE CLIENTES\n\n");
	printf("¿Cuantos clientes hay?  ");
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		escribirentrada(i);
		
		if(cliente[i].pago > 0)
		cliente[i].tipo_cuenta = (cliente[i].pago < 0.1 * cliente[i].anteriorsaldo) ?  'R'  :'A';
		else
			cliente[i].tipo_cuenta = (cliente[i].anteriorsaldo > 0) ? 'D' : 'A';
			
			cliente[i].nuevosaldo = cliente[i].anteriorsaldo - cliente[i].pago;							  
	

	for(i=0;i<n;++i){
		escribirsalida(i);
}
}
	
	do{
		op=menu();
		switch(op){
			case 1:
					for(i=0;i<n;i++){
					escribirentrada(i);
				}
				break;
				
				case 2:
						for(i=0;i<n;i++){
						escribirentrada(i);
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

void escribirentrada (int i){
	/*leer datos de entrada y actualizar el registro del cliente*/
	
	printf("nCliente n° %d\n", i+1);
	printf("  Nombre:  ");
	scanf(" %[^\n]", cliente[i].nombre);
	
	printf("  Calle:  ");
	scanf(" %[^\n]", cliente[i].ciudad);
	
	printf("  Ciudad:  ");
	scanf(" %[^\n]", cliente[i].ciudad);
	
	printf("  Numero de cuenta:  ");
	scanf("%d", &cliente[i].num_cuenta);
	
	printf("  Saldo anterior:  ");
	scanf("%f", &cliente[i].anteriorsaldo);
	
	printf("  Pago actual:  ");
	scanf("%f", &cliente[i].pago);
	
	printf("  Fecha de pago (mm/dd/aa):  ");
	scanf("%d/%d/%d", &cliente[i].ultimopago.mes, &cliente[i].ultimopago.dia, &cliente[i].ultimopago.anio);
	
	return;
}

void escribirsalida(int i){
	
	printf("\nNombre: %s", cliente[i].nombre);
	printf(" Número de cuenta: %d\n", cliente[i].num_cuenta);
	
	printf("Calle: %s\n", cliente[i].calle);
	printf("Ciudad: %s\n\n", cliente[i].ciudad);
	printf("Saldo anterior: %f", cliente[i].anteriorsaldo);
	printf("   Pago actual: %f", cliente[i].pago);
	printf("   Nuevo saldo: %f\n\n", cliente[i].nuevosaldo);
	printf ( "Estado de la cuenta: ");
	
	switch (cliente [i] . tipo_cuenta) {
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
	
void saludo(){
	printf("GRACIAS POR SU PREFERENCIA");
	printf("PROGRAMA ECHO EFRAIN MAY MAYO");
	system("pause");
	system("cls");
	return;
}

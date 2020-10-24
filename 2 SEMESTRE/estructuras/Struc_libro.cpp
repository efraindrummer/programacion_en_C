#include <stdio.h>
#include <stdlib.h>

void leerentrada(int i);
void escribirsalida(int i);

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

main(){
	int i, n;
	
	printf("SISTEMA DE FACTURACION DE CLIENTES\n\n");
	printf("¿Cuantos clientes hay?  ");
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		leerentrada(i);
		
		if(cliente[i].pago > 0)
		cliente[i].tipo_cuenta = (cliente[i].pago < 0.1 * cliente[i].anteriorsaldo) ?  'R'  :'A';
		else
			cliente[i].tipo_cuenta = (cliente[i].anteriorsaldo > 0) ? 'D' : 'A';
			
			cliente[i].nuevosaldo = cliente[i].anteriorsaldo - cliente[i].pago;							  
	

	for(i=0;i<n;++i){
		escribirsalida(i);
}
}
}


void leerentrada (int i){
	/*leer datos de entrada y actualizar el registro del cliente*/
	
	printf("nCliente n° %d\n", i+1);
	printf("  Nombre:  ");
	scanf(" %[^\n]", cliente[i].nombre);
	fflush(stdin);
	
	printf("  Calle:  ");
	fflush(stdin);
	scanf(" %[^\n]", cliente[i].ciudad);
	
	printf("  Ciudad:  ");
	fflush(stdin);
	scanf(" %[^\n]", cliente[i].ciudad);
	
	printf("  Numero de cuenta:  ");
	fflush(stdin);
	scanf("%d", &cliente[i].num_cuenta);
	
	printf("  Saldo anterior:  ");
	fflush(stdin);
	scanf("%f", &cliente[i].anteriorsaldo);
	
	printf("  Pago actual:  ");
	fflush(stdin);
	scanf("%f", &cliente[i].pago);
	
	printf("  Fecha de pago (mm/dd/aa):  ");
	fflush(stdin);
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


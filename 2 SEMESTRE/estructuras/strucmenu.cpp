#include<stdio.h>
#include<stdlib.h>

int menu();
void leerentrada(int i);
void escribirsalida(int i);

struct fecha  {
	int mes;
	int dia;
	int anio;
};

struct cuenta{
	char nombre[80];
	char calle[80];
	char ciudad[80];
	int num_cuenta;           /*(entero positivo)v */
	int tipo_cuenta;          /*A (Al dia ), R (atrasada) o D (delincuente)*/
	
	float anteriorsaldo;       /* cantidad no negativa*/
	float nuevosaldo;          /* cantidad no negativa*/
	float pago;                /* cantidad no negativa*/
	struct fecha ultimopago;      
	     			 
}cliente[100];/*mantener hasta 100 clientes*/
	
main (){
	
	int i, n, op;
	printf("SISTEMAS DE FACTURACION DE CLIENTES \n\n ");
	printf("¿cuantos clientes hay?");
	scanf("%d",&n);
	
	do{
		op=menu();
		
		switch(op){
			case 1: 
			for(i=0; i<n; i++){
				leerentrada(i);
		
		/* determinar e estado de la cuenta*/
		if (cliente[i].pago > 0){
		
			cliente[i].tipo_cuenta = 
				(cliente[i].pago < 0.1 * cliente[i].anteriorsaldo)?
				'R': 'A';
				}else{
				cliente[i].tipo_cuenta=(cliente[i].anteriorsaldo > 0)? 'D' : 'A';
			}
				/* AJUSTAR EL SALDO DE LA CUENTA*/
			cliente[i].nuevosaldo = cliente[i].anteriorsaldo - cliente[i].pago;
			}
			system("PAUSE");
			system("CLS");
			break;
			case 2:
				for(i=0; i<n; i++){
					escribirsalida(i);
				}
		}
	}while(op!=3);
}

int menu(){
	int op;
	printf("Ingrese la opcion: 1-3\n");
	printf("1. Registro de cuenta habiente: \n");
	printf("2. Imprimir datos de cliente \n");
	printf("3. Sair\n");
	scanf("%d",&op);
	return op;
}

void leerentrada(int i)

/* leer datos de entrada y actualizar el registro para cada cliente  */
	{
		printf("\n cliente n %d \n", i+1);
		printf(" Nombre:\n ");
		scanf(" %[^\n]",cliente[i].nombre);
		printf(" calle: \n");
		scanf(" %[^\n]",cliente[i].calle);
		printf(" ciudad: \n");
		scanf(" %[^\n]",cliente[i].ciudad);
		printf(" numero de cuenta : \n");
		scanf("%d",&cliente[i].num_cuenta);
		printf(" saldo anterior: \n");
		scanf("%f",&cliente[i].anteriorsaldo);
		printf(" pago actual: \n");
		scanf("%f",&cliente[i].pago);
		printf(" fecha de pago (mm/dd/aaaa): \n");
		scanf("%d/%d/%d", &cliente[i].ultimopago.mes,&cliente[i].ultimopago.dia,&cliente[i].ultimopago.anio);
		return;
	}
	
void escribirsalida(int i)
	/*escribir la informacion actual para cada cliente */
	{
		printf(" \nNombre : %s",cliente[i].nombre);
		printf(" numero de cuenta: %d\n", cliente[i].num_cuenta);
		printf("calle: %s\n", cliente[i].calle);
	printf("ciudad: %s\n\n", cliente[i].ciudad);
	printf("saldo anterior: %7.2f ", cliente[i].anteriorsaldo);
	printf("pago actual: %7.2f", cliente[i].pago);
	printf("nuevo saldo: %7.2f\n\n",cliente[i].nuevosaldo);
	printf("estado de la cuenta :");
	
	switch(cliente[i].tipo_cuenta){
		case 'A':
			printf(" AL DIA \n\n");
			break;
			case 'R':
				printf("ATRASADA \n\n");
				break;
				case 'D':
					printf("DELINCUENTE \n\n");
					break;
	}
}


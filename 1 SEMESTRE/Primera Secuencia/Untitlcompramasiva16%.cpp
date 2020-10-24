#include <stdio.h>
#include <stdlib.h>

main(){
	
	float c, f;
	
	printf("¿cual es el monto de la compra?: \n");
	scanf("%f" ,&c);
	
	f = (c* 0.16) + c;
	
	printf("precio final con iva incluido %0.2f" ,f);
	
}

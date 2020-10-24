#include <stdio.h>
#include <stdlib.h>

main(){
	
	float p, t, d;
	
	printf("cantidad de pesos:  ");
	scanf("%f" ,&p);
	
	printf("tipo de cambio:  ");
	scanf("%f" ,&t);
	
	d = p / t;
	
	printf("dolares equivalentes: %f" ,d);
	
}

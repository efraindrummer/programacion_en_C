//solicitar al usuario una medida expresada en cm y covertir a M

#include <stdio.h>
#include <stdlib.h>

main(){
	
	float c, m;
	
	printf("centimetros a convertir:   ");
	scanf("%f" ,&c);
	
	m = c / 100;
	
	printf("resultado de c:%f" ,m);
	
	

}

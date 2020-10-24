#include <stdio.h>
#include <stdlib.h>

main(){
	
	float celsius, farenheit;
	
	printf("ingresar temperatura:  ");
	scanf("%f" ,&celsius);
	
	farenheit= celsius * 1.8 + 32;
	
	printf("temperatira en farenheit:%0.2f" ,farenheit);
}

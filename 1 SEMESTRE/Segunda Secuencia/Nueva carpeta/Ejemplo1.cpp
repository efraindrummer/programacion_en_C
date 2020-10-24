#include <stdio.h>

main(){
	float x;
	
	printf ("Ingresa un numero: ");
	scanf ("%f",&x);

	if(x>0){
		printf("Positivo\n");
	}else{
		if(x<0){
			printf("Negativo\n");
		}else{
			printf ("Valor neutro");
		}
	}
}

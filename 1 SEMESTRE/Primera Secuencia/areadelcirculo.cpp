#include <stdio.h>
#include <stdlib.h>

main(){
	
	float r, a; //declaricion de 3 variantes 
	
	printf("ingresar radio  "); //segundo dato de entrada
	scanf("%f" ,&r); //lectura del segundo dato
	
	a = 3.1416 * r * r;
	
	printf("multiplicacion:  %f" ,a);
	
}

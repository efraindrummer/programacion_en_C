//leer 20 numeros negativos e imprimir su valor su valor absoluto. usar funcion abs
#include <stdio.h>
#include <math.h>
main(){
    float  n, r;

	for(int i=1;i<=20;i++){
		
		printf("\ningresar 20 numeros:  ");
		scanf("%f", &n);
		
		r=abs(n);
		
	    printf("el resultado es:%0.2f\n", r);	   
}
}

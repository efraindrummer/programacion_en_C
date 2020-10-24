#include <stdio.h>
#include <stdlib.h>

main(){
	int num,i,suma=0,cantidad;
	
    printf("\nA cuantos numeros quieres calcular su promedio: ");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++){
    	
    printf("Numero: ");
    scanf("%d",&cantidad);
    
    suma=suma+cantidad;
    }
    suma=suma/num;
    printf("Su promedio es: %d",suma);
}

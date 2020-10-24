#include <stdio.h>
#include <stdlib.h>

main(){
	
	int  suma = 0;
	
	for(int i = 10; i<=1000; i+=10){
	    printf("%d + ", i);
	    suma += i;
	
	}
	printf("\nel resultado es: %d" ,suma);
}

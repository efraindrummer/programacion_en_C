#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	float n, suma;
	
	printf("ingresar numero que deseamos ingresar:  ");
	scanf("%f", &n);
	
	for(int i=2;i<=n;i++){	
		suma += 1 / pow(4, i);
	}
	printf("el resultado de la potencia es:%f", suma);
}

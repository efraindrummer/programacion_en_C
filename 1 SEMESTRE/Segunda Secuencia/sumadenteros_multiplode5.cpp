//sumar todos los numeros pares, enteros positivos y el valor de n
#include <stdio.h>
#include <stdlib.h>

main(){
	
	int n, suma = 0;
	printf("ingresar limite del valor:  ");
	scanf("%d", &n);
	
	for(int i = 5; i<=n; i+=5){
		printf("%d + ", i);
	suma += i;
	
	}
		printf("\nel resultado es: %d" ,suma);
}

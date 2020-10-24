//pedir al usuario 2 numeros uno x, y el otro en y e intercambiar valores

#include <stdio.h>
#include <stdlib.h>

main(){
	
	int aux, x, y;
	
	printf("ingresar el valor de x:  ");
	scanf("%d", &x);
	
	printf("ingresar el valor de y:  ");
	scanf("%d", &y);
	
	printf("intercambio de valores:  ");
	
	aux = x;
	x = y;
	y = aux;
	
	printf("\n\n   Ahora, el valor de x es: %d", x);
    printf("\n\n   Ahora, el valor de y es: %d", y);
}

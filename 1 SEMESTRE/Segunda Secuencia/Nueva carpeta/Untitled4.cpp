//solicitar al usuario un numero entero y el numero va determinar si es par o impar

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numero;
	
	printf("introduzca numero entero:  ");
	scanf("%d", &numero);
	
	if(numero %2==0){
		printf( "\n   ES PAR" );
    
	}else
        printf( "\n   ES IMPAR" );
	
}

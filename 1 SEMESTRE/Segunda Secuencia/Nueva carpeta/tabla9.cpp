//ejercicios de ciclo
//hacer un ejercicio que imprima la tabla de multiplicar del //
#include <stdio.h>
#include <stdlib.h>

int main(){
	int tabla;
	printf("ingresar que tabla de multiplicar quieres ver:  ");
	scanf("%d" ,&tabla);
	
	for(int i = 1; i<=10; i++){	
		printf("%d x %d = %d\n" ,tabla, i ,tabla*i);
			
}
}

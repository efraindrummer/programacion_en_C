#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float  precio,ganancia;
	
	printf("ingresar articulo:  ");
	scanf("%f", &precio);
	
	ganancia = precio * 1.3;
	
	printf("el precio es: %0.2f", ganancia);
	
	system("pause");
	
	}

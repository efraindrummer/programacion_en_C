#include <stdio.h>
#include <stdlib.h>

int suma(int x, int y){
	return x+y;
}
main(){
	int a, b, r;
	
	printf("ingresar primer numero:  ");
	scanf("%d", &a);
	printf("ingresar segundo numero:  ");
	scanf("%d", &b);
	
	r=suma(a,b);
	
	printf("el resultado de la suma es: %d", r);
}

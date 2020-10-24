//dadas n calificacion calcular el promedio

#include <stdio.h>
#include <stdlib.h>

float promedio(int n){

	float c, num, suma;
	printf("ingresar numero de calificaciones:  ");
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++){
		printf("numero:  ");
		scanf("%d", &c);
		suma = suma + c;
		
	}
	suma = suma /n;

}

main(){
	int n;
	printf("el promedio es:%0.2f", suma);
		return suma;
}


//6.Almacenar 15 números en un vector e imprimirlos en orden inverso.

#include<stdio.h>

void lectura (int v[15]){
	printf("ingresar 15 numeros: \n");
	for(int i=0;i<15;i++){
		printf("%d = ", i+1);
		scanf("%d", &v[i]);	
	} 
}

void imprimir (int v[15]){
	printf("El resultado es: \n");
	for(int i=15;i>0;i--){
		printf("%d = ", i+1);
	    printf("%d\n", v[i]);		
	}
}

main(){
	int X[15];	
	lectura(X);
	imprimir(X);
}

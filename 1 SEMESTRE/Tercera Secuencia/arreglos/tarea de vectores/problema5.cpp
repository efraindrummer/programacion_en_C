//5.Llenar dos vectores con 10 números cada uno. 
//Sumar los valores de ambos vectores posición por posición almacenando el resultado en un tercer vector. 
//Imprimir el vector resultante.

#include <stdio.h>

void lectura1(int v[10]){
	printf("Ingresar 10 numeros: \n");
	for(int i=0;i<10;i++){
		printf("%d = ", i+1);
		scanf("%d", &v[i]);
	}
}
void suma(int v[10], int x[10]){
	for(int i=0;i<10;i++){
		x[i] = v[i]+v[i]; 
	}
}

void resultado(int v[10], int x[10]){
	for(int i=0;i<10;i++){
		printf("\n%d = %d", x[i], v[i]);
	}
}

main(){
	int a[10], x[10];
	
	lectura1(a);
	suma(a, x);
	resultado(a, x);
}

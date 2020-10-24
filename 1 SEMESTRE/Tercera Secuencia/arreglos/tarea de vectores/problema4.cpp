//Almacenar 30 números en un vector, imprimir cuantos son ceros,
//cuantos son negativos, cuantos positivos.*/

#include <stdio.h>

void almacenando(int v[30]){
	printf("ingresar 30 numeros: \n");
	
	for(int i=0;i<30;i++){
		printf("%d = ", i+1);
		scanf("%d", &v[i]);
	}
} 

void contarC(int v[30]){
	int cero=0;
	
	for(int i=0;i<30;i++){
	    if(v[i] == 0){
	    	cero++;;
		}
	}
	printf("\nlos numeros ceros son:%d", cero);
}

int contarNegativos(int v[30], int contarN){
	
	int negativo=0;
	
	for(int i=0;i<30;i++){
		if(v[i] < 0){
			negativo+=+1;
		}
	}
	return negativo;
}

int contarPositivos(int v[30], int contarP){
	
	int positivo=0;
	
	for(int i=0;i<30;i++){
		if(v[i] > 0){
			positivo+=+1;
		}
	}
	return positivo;
}

main(){
	int x[30];
	int p1, p2;
	
	almacenando(x);
	contarC(x);
	
	printf("\nlos numeros negativos son:%d", contarNegativos(x, p1));
	printf("\nlos numeros positivos son:%d", contarPositivos(x, p2));
}



//7.Llenar un vector de 100 elementos con los múltiplos de 5 e imprimir el vector resultante.

#include <stdio.h>

void multiplo(int v[100]){
	int suma=0;
	printf("multiplos:  ");
	for(int i=5;i<100;i+=5){
		printf("%d + ", i);
			suma+=v[i];
	}
	printf("\nel resultado es:%d", suma);
}

main(){
	int x[100];
	multiplo(x);
}

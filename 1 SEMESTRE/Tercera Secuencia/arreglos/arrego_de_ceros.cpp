//inicializar un arreglo de tamaño 10 con puros 0.
#include <stdio.h>
#include <conio.h>

main(){
	int arreglo[10];
	int r;
	
	for(int i=0;i<10;i++){
		r=arreglo[i]=0;
		printf("%d = %d\n", i, r);
	}
}

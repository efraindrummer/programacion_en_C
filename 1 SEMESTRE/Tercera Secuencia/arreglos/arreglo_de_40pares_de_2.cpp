//inicializar arreglos de tamaño 40, con numeors pares apartir del 2.
#include <stdio.h>
#include <conio.h>

main(){
	int arreglo[40];
	int n=1;
	
	for(int i=0;i<40;i++){
		arreglo[i]=n++;

		if(arreglo[i]%2==0){
			printf("%d\n", arreglo[i]);
		}
	}
}

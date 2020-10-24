//del ejercicio 2, agregar que se sumen todos los datos del arreglo.
#include <stdio.h>
#include <conio.h>
main(){
	int arreglo[40];
	int n=1, suma=0;
	
	for(int i=0;i<40;i++){
		arreglo[i]=n++;

		if(arreglo[i]%2==0){
			
			printf("%d\n", arreglo[i]);
			suma+=arreglo[i];
		}
    }
    printf("\nLa suma del arreglo es:%d", suma);
    getch();
    return 0;
}

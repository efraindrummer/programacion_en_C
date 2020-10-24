//obtener el resultado de la sig serie  matematica:
//(1/2)+(2/3)+(3/4)+...+(n/n+1) donde el valor n es proporcionado por el usuario

#include <stdio.h>
#include <stdlib.h>

main(){
	
	float n, suma;

	printf("\ningresar el valor final:  ");
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++){
		
		suma += (i/(i+1));
	}
	printf("el resultado es:%0.2d", suma);
}

//obtener el resultado de la sig serie matematica(2/3)+(2/4)+(2/5)+...+(2/n)
//donde n es un valor proporcionado por el usuario

#include <stdio.h>
#include <stdlib.h>

main(){
	float n, suma=0;
	
	printf("ingresar numero:  ");
	scanf("%f", &n);
	
	for(int i=3;i<=n;i++){
		
		suma += (2.0/(float)i);
	}
	printf("resultado: %0.2f", suma);	
	
}
	


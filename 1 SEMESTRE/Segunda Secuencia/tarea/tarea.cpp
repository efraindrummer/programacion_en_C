//obtener el resultado de la sig serie matematica (2/1)+(4/2)+(6/3)+...+(n*2/n)
//donde n es un vaor proporcionado por el usuario

#include <stdio.h>
#include <stdlib.h>
main(){
	float n, suma;
	
	printf("ingresar terminos:  ");
	scanf("%f", &n);
	
	for(i=1;i<=n;i++){
			
        suma += (i*2)/i;

	}
	printf("el resultado es:%f", suma);
}
    


//solicitar caracteres(1x1) hasta que el usuario ingrese un punto"."
//indicaar cuantos caracteres fueron ingresados
 
#include <stdio.h>
#include <stdlib.h>

main(){
	char c, i=0;

	do{
	   printf("\ningresar caracter:  ");
       scanf("%c", &c); 
       fflush(stdin);
		
	   i++;
				
	}while(c!='.');
	
	printf("indicar cuantos caracteres ingresamos:%d",i);

}

//contar vocales
#include <stdio.h>
#include <stdlib.h>
main(){
	char cadena, i=0;
	do{
		printf("\nIngresar Vocal:  ");
	    scanf("%c", &cadena);
	    fflush(stdin);
			if ((cadena=='a')||(cadena=='e')||(cadena=='i')||(cadena=='o')||(cadena=='u')||(cadena=='A')||(cadena=='E')||(cadena=='I')||(cadena=='O')||(cadena=='U')){
           	 i++;
		   }  
	}while(cadena!='.');
	printf("Indicar cuantas vocales ingresamos:%d", i);
}

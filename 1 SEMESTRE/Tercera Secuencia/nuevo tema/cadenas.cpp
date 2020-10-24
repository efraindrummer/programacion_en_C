#include <stdio.h>
#include <string.h>

main(){
	char nombre[15]="", apellido[25]="";
	
	printf("Nombre:  ");
	gets(nombre);
	printf("Apellido:  ");
	gets(apellido);
	
	if(strcmp (nombre,"maria")==0){
		printf("hola guapa");
	}else{
			printf("Saludos %s %s", nombre, apellido);
	}

}

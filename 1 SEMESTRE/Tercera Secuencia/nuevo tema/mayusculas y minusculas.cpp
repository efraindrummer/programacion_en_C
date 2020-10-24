//contar mayusculas y minusculas
#include <stdio.h>
#include <stdlib.h>

main(){
	char letra, minuscula=0,MAYUSCULA=0;
	do{
		printf("ingresar letras:  ");
		scanf("%c", &letra);
		fflush(stdin);
	
		if((letra>='a')&&(letra<='z')){
			minuscula++;
		}if((letra>='A')&&(letra<='Z')){
			MAYUSCULA++;
		}
	}while(letra!='.');
	printf("cuantas minusculas ingresamos:%d",minuscula);
	printf("cuantas mayusculas ingresamos:%d",MAYUSCULA);
}

	

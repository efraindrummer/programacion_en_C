//en una empresa se requiere calcular el salario semanal de cada uno de los N obreros
//que elaboran en ella el salario se obtiene de la siguiente forma: el obrero trabaja hasta 40 horas
// se le paga 20 pesos por cada hora. si trabaja mas de 40 horas se le paga 20 pesos por cad aun de las primeras 40 horas y 25 por cada hora restante

#include <stdio.h>
#include <math.h>

main(){
	
	float s, ht, nt;
	
	printf("ingresar numero de trabajdores:  ");
	scanf("%f", &nt);
	
	for(int i=1;i<=nt; i++){
		
		printf("ingresar horas trabajadas:  ");
	    scanf("%f", &ht);
	
	    if(ht=40){
		s = ht*20;
		
       	}else
	    s=(nt>40)=	
}

}


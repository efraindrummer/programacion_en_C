/*en una empresea se requiere calucular el salario semanal de cada uno
 los n obreros que laboran en ella el salrio se obtiene de la siguiente 
 manera si el obrero trabaja hasta 40 horas se le paga 20 pesos por cada
 hora si trabaja mas de 40 horas se le paga 20 pessos por cada una de las cuarenta horas 
y 25 por cada hora restante*/

#include <stdio.h>
#include <stdlib.h>

main(){
	int n, h;
	
	printf("ingrese cantidad de obreros: ");
	scanf("%d" ,&n);
	
	for(int i=1; i<=n; i++){
		printf("obrero %d\n\n",i);
		printf("ingrese cantidad de horas: ");
		scanf("%d" ,&h);
		
		if(h<=40){
			printf("su salario %d\n",h*20);
		}
		if(h>40){
			printf("su salario %d\n",(h-40)*25+800);
		}
	}
}



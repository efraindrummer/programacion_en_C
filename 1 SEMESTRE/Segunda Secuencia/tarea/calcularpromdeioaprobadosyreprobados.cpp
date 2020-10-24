//Dadas N calificaciones calcular el promedio de las notas aprobadas y reprobadas//
#include <stdio.h>
#include <stdlib.h>

int main(){
	int ap=0;
	float nota, aprobadas=0, reprobadas=0;
	
	for(int i=0;i>1;i++){
		printf("ingresar notas:  ");
		scanf("%d" ,&nota);
	if(nota>=60){
		aprobadas=aprobadas+nota;
		ap++;
    }
	else
	if(nota<=50){
	
	
    reprobadas=reprobadas+nota;
    }  
    printf("\nel promedio de las notas aprobadas es:", aprobadas/ap);
    printf("\nel promedio de notas reprobadas es:",reprobadas/ap);
}
}




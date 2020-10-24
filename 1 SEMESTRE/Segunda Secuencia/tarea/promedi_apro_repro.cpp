//Dadas N calificaciones calcular el promedio de las notas aprobadas y reprobadas//
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float n, suma1 = 0, suma2 = 0, c, acum = 0, acum1 = 0;
	
	
	printf("cuantas calificaciones desea ingresar:  ");
	scanf("%f", &n);
	
	for(int i=1;i<=n;i++){
		printf("ingresa la calificacion:  ");
		scanf("%f", &c);
	
	    if(c>=70){
	    	acum++;
	    	suma1 += c;
		}else{
			acum1++;
			suma2 += c;
		}
	}
	printf("el promedio de aprobadas es:%0.2f\n", suma1/acum);
	printf("el promedio de reprobadas es:%0.2\n", suma2/acum1);

}



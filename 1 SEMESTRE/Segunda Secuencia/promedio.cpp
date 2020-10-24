#include <stdio.h>
#include <stdlib.h>

main(){
	int reg;
	float cal1, cal2, cal3, cal4, promedio;
	
	printf("introduce numero de registro");
	scanf("%d" ,&reg);
	
	printf("ingresar calificacion 1  ");
	scanf("%f" ,&cal1);
    
    printf("ingresar calificacion 2  ");
	scanf("%f" ,&cal2);
	
	printf("ingresar calificacion 3  ");
	scanf("%f" ,&cal3);

	printf("ingresar calificacion 4  ");
	scanf("%f" ,&cal4);
	
	promedio= (cal1+cal2+cal3+cal4)/4;
	
	printf("\nregistro numero:%d" ,reg);
	printf("\n\nel promedio es %0.2f" ,promedio);

	
	

}

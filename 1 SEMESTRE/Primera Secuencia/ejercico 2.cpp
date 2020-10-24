#include <stdio.h>
#include <stdlib.h>

main(){
	int td1, td2 , td3;
	
	float  tiempo_de_la_semana;
	
	printf("ingresar tiempo de dia 1:  ");
	scanf("%d" ,&td1);
	
	printf("ingresar tiempo de dia 2:  ");
	scanf("%d" ,&td2);
	
	printf("ingresar tiempo de dia 3:  ");
	scanf("%d" ,&td3);
	
	tiempo_de_la_semana = (td1+td2+td3)/3;
	
	printf("el tiempo final es:%0.2f" ,tiempo_de_la_semana);
	
	system("pause");
	
}
    


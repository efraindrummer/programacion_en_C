#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float presupuesto;
	
	printf("ingresar presupuesto anual:  ");
	scanf("%f" ,&presupuesto);
	
	printf("presupuesto del area;  ");
	
	printf("ginecologia: %f" ,presupuesto*0.40);
	
	printf("traumatologia: %0.2" ,presupuesto*0.30);
	
	printf("pediatria: %0.2" ,presupuesto*0.30);
	
	system("PAUSE");
	
	
	
}

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float p1, p2, p3, cantidad_total, pp1, pp2, pp3;
	
	printf("ingresar inversion de la persona 1:  ");
	scanf("%d" ,&p1);
	
	printf("ingresar inversion de la persona 2:  ");
	scanf("%d" ,&p2);
	
	printf("ingresar inversion de la persona 3:  ");
	scanf("%d" ,&p3);
	
	cantidad_total = p1+p2+p3;
	
	pp1 = p1*100/cantidad_total;
	pp2 = p2*100/cantidad_total;
	pp3 = p3*100/cantidad_total;
	
	printf("porcentaje de la primera persona:%0.2f" ,pp1);
	printf("porcentaje de la segunda persona:%0.2f" ,pp2);
	printf("porcentaje de la tercera persona:%0.2f" ,pp3);
	
	system("pause");
	
}

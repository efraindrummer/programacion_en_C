#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float leer(int sueldo){
	float edad, s;
	printf("ingrese su  antiguedad: ");
	scanf("%f",&edad);
	printf("ingrese el sueldo base:");
	scanf("%f",&s);
	
	if(edad>=5 && edad<9){
		sueldo=s*0.05;
	}
	if(edad>=10 && edad<14){
		sueldo=s*0.08;
	}
	if(edad>=15 && edad<19){
		sueldo=s*0.10;
	}
	if(edad>=20 && edad<24){
		sueldo=s*0.12;
	}
	if(edad>=25){
		sueldo=s*0.15;
	}
	return sueldo;
}
main(){
	float sueldo;
	
	printf("el sueldo es:%0.2f",leer(sueldo));
}

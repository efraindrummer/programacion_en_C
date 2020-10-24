#include<stdio.h>
#include<stdlib.h>

main(){
	float edad,sueldo,s;
	
	printf("ingrese su  antiguedad: ");
	scanf("%f",&edad);
	printf("ingrese el sueldo base:");
	scanf("%f",&s);
	if(edad>=5 && edad<9){
		sueldo=s*0.05;
		printf("el sueldo es:%f",sueldo);
	}
	if(edad>=10 && edad<14){
		sueldo=s*0.08;
		printf("el sueldo base es:%f",sueldo);
	}
	if(edad>=15 && edad<19){
		sueldo=s*0.10;
		printf("el sueldo es:%f",sueldo);
	}
	if(edad>=20 && edad<24){
		sueldo=s*0.12;
		printf("el sueldo es:%f",sueldo);
	}
	if(edad>=25){
		sueldo=s*0.15;
		printf("el sueldo es:%f",sueldo);
	}
}

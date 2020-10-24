// en base al valor de 2 numeros enteros ingresados por el ususario determine 
//a)son iguales o no
//b)el primero es mayor que el segundo
//c)el segundo es mayor que el primero

#include <stdio.h>
#include <stdlib.h>

main(){
	int a, b;
	
	printf("ingresar primer numero:  ");
	scanf("%d", &a);
	
	printf("ingresar segundo numero:  ");
	scanf("%d", &b);
	
	if(a==b){
		printf("son iguales");
	}else{
		printf("son diferentes");
	}if(a>b){
			printf("el primero es mayor que el segundo");
		}else{
		
		printf("el segundo es mayor que el primero");
}
}







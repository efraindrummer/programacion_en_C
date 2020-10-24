#include <stdio.h>
#include <stdlib.h>

main(){
	int a, b, c;
	
	printf("ingresar primer valor:  ");
	scanf("%d",&a);
	printf("ingresar tercer valor:  ");
	scanf("%d",&b);
	printf("ingresar tercer valor:  ");
	scanf("%d",&c);
		
	if(a==b&&a==c) 
	{ 
	printf("\n El triangulo es equilatero"); 
	} 
	else if(a==b||a==c||b==c) 
	{ 
	printf("\n El triangulo es isosceles"); 
	} 
	else if(a!=b&&a!=b&&b!=c) 
	{ 
	printf("\n El triangulo es escaleno"); 
} 
}



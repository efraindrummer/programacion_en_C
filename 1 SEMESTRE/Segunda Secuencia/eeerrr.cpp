/*Hacer un programa que dado el valor de n, 
calcule la suma de la serie: 
(1/1)+(1/2)+(1/3)+...+(1/n) */

#include<stdio.h>
#include<conio.h>
main (){
int n;

	float i,r=0;
	printf("Ingrese un numero: ");
	scanf("%d",&n);
	
		for (i=1;i<=n;i++){
		r = 1 / i + r;
		i++;
        } 
        printf("El reusultado es: %f",r);
}

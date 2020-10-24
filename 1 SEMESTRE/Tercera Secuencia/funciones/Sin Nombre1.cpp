#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int lado(int l1){
	printf("ingresar primer valor:  ");
	scanf("%d",&l1);
	printf("ingresar tercer valor:  ");
	scanf("%d",&l2);
	printf("ingresar tercer valor:  ");
	scanf("%d",&l3);
	if((l1==l2)&&(l1==l3)){
}
return l1;
}
int lado(int l2){
	printf("ingresar primer valor:  ");
	scanf("%d",&l1);
	printf("ingresar tercer valor:  ");
	scanf("%d",&l2);
	printf("ingresar tercer valor:  ");
	scanf("%d",&l3);
	if((l1==l2)&&(l2!=l3)){
}
return l2;
}
int lado(int l3){
	printf("ingresar primer valor:  ");
	scanf("%d",&l1);
	printf("ingresar tercer valor:  ");
	scanf("%d",&l2);
	printf("ingresar tercer valor:  ");
	scanf("%d",&l3);
	if((l1!=l2)&&(l2!=l3)){
}
return l3;
}
main(){
	
	printf("equilatero", lado(l1));
	printf("isoceles", lado(l2));
	printf("escaleno", lado(l3));
}

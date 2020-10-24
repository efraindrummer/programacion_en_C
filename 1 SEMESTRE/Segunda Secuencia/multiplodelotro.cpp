//solicitar al usuario 2 numeros y verificar si alguno es multiplo del otro.

#include <stdio.h>

main(){
	
	int n1, n2;
	
	printf("ingresar primer numero:  ");
	scanf("%d", &n1);
	
	printf("ingresar segundo numero:  ");
	scanf("%d", &n2);
	
	if(n1 % n2 == 0){
		printf("el primero es multiplo del segundo:  ");
	}else{
		
		printf("el primero no es multiplo del segundo:  ");
	}
	if(n2 % n1 == 0){
		
		printf("el segundo es multiplo del primero:  ");		
	}else{
		
		printf("el segundo no es multiplo del primero:  ");
	}
	
	
}

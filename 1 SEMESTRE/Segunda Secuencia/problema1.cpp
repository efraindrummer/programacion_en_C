#include <stdio.h>
main(){
	float x;
	
	printf("ingresa un numero:  ");
	scanf("%f" ,&x);
	
	if(x>0){
        printf("pisitivo\n");
	}else{
		if(x<0){
			printf("negativo\n");
			
		}
	}
	
}

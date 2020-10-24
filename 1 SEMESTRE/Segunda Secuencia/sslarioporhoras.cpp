#include <stdio.h>

int main(){
	
	int ht, pago;
	
	printf("ingresar horas trabajadas:  ");
	scanf("%d", &ht);
	
	if (ht <= 40){
		
    pago= ht*25;
		
	}
	else{
		
	pago=1000+(ht-40)*50;
    }
	

    printf("total: %f" ,pago);
}


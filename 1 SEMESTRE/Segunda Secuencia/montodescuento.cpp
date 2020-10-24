#include <stdio.h>

int main(){
	
	float preciodelproducto, descuento, preciofinal;
	
	printf("ingresar valor de producto:  ");
	scanf("%f" ,&preciodelproducto);
	
	descuento = preciodelproducto * 0.20;
	preciofinal = preciodelproducto - descuento;
	
	printf("el precio final es:%.2f" ,preciofinal);
	
	
}

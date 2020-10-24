//1. Calcular el total que una persona debe pagar en una llantera, 
//si el precio de cada llanta es de $1800 si se compran menos de 5 llantas y de $1550 cada una si se compran 5 o mas.

#include <stdio.h>

int main (){
	
    int nll, llantas, total;
    
    printf("cuantas llantas se compraron: ");
    scanf("%d", & nll);
    
    if (nll < 5){
    	
                llantas=1800;            
                total= nll*1800;
                printf("por cada llanta pagas: %d \n", llantas);
                printf("el total de la compra es: %d", total);
                }
                
                else if ( nll >= 5 && nll >= 5){
                llantas=1550;            
                total= nll*1550;
                printf("por cada llanta pagas: %d \n", llantas);
                printf("el total de la compra es: %d \n", total);
                }
                
                
                }

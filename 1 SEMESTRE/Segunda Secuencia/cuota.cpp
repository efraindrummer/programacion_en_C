//3. Una compa��a de seguros esta abriendo un departamento de finanzas y estableci� un programa para captar clientes,
//que consiste en lo siguiente: Si el monto por el que se efect�a la fianza es menor que $50 000,
//la cuota a pagar ser� por el 3% del monto, y si el monto es mayor o igual a $50 000, 
//la cuota a pagar ser� el 2% del monto. La afianzadora desea determinar cual ser� la cuota que debe pagar un cliente.

#include <stdio.h>

int main (){
	
     float monto, cuotafinal;
     
     printf("de cuanto es el prestamo:");
     scanf("%f", &monto);
     
     if (monto < 500000){
               cuotafinal=( monto*.03)+ monto;
               printf("la cuota final a pagar es:%.2f", cuotafinal);
               }
               
               else if (monto >= 500000){
               cuotafinal=( monto*.02)+ monto;
               printf("la cuota final a pagar es:%.2f", cuotafinal);
               }
             
               }

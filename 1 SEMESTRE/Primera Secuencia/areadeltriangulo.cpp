#include <stdio.h>
#include <stdlib.h>

main(){
    float b, h, a; //declaracion de variable
    
    printf("ingresar base:  "); //solicitud del primer dato de entrada
    scanf("%f" ,&b); //lectura del primer dato
    
    printf("ingresar altura:  "); //solicitud del segundo dato
    scanf("%f" ,&h); //lectura del segundo dato
    
    a = b * h / 2;
    
    printf("division: %0.2f" ,a);
    

}


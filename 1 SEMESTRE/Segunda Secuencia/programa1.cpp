/* universidad autonoma del carmen
facultad de ciencias de la informacion

   porgramdor: EFRAIN MAY MAYO
   
definicion del problema:
programa de suma de dos numeros   
	
	  	    
*/   
 
//declarion de librerias 
#include <stdio.h>  //funciones de entrada y salida
#include <stdlib.h>  //funcion de system

main(){
    int x, y, r; //declarion de tres variables enteras
    
    printf("primer numero:  "); //solicitud del primer dato de entrada
    scanf("%d",&x); //lectura del primer dato
    
    printf("segundo numero:  "); //solicitud del segundo dato de entrada
    scanf("%d" ,&y); //lectura del segundo dato
    
    r = x + y;  //expresion aritmetica
    
    printf ("suma:%d" ,r);
}
    

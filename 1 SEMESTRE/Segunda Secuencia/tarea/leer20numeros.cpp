//leer 20 numeros

#include <stdio.h>
#include <stdlib.h>
 
main(){
 int positivo=0, negativo=0, neutro=0, n, i;
 
 for(int i=1; i<=20; i++){
  printf("%d. Ingrese un numero: ", i);
  scanf("%d", &n);
 
    if( n > 0 ){
    positivo++;
    }
 
    if( n < 0 ){
   negativo++;
    }
 
    if( n == 0 ){
    neutro++;
    }
    }
 
    printf("\n\nCantidad de positivos: %d", positivo);
    printf("\nCantidad de negativos: %d", negativo);
    printf("\nCantidad de neutros: %d\n", neutro);
}


#include <stdio.h>
#include <stdlib.h> 
int main(){
    int n, i;
    positivo=0;
    negativo=0;
    neutro=0;
    
 for(i=1; i<=20; i++){
  printf("Ingrese un numero: ", i);
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
 
 printf("\n\nCantidad de positivos: %f", positivo);
 printf("\nCantidad de negativos: %f", negativo);
 printf("\nCantidad de neutros: %f\n", neutro);

}

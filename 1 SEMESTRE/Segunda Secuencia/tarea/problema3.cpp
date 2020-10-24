#include <stdio.h>
#include <stdlib.h>

main(){
	 int b, e, p = 1;
	 
	 printf("ingresar la base:  ");
	 scanf("%d", &b);
	 
	 printf("ingresar el exponente:  ");
	 scanf("%d", &e);
	 
	 for(int i=1;i<=e;i++){
	 	
	 	 p*=b;
	 }
	 printf("el resultado es:%d", p);
}

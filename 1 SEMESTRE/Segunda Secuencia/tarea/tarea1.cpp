//1+4+7+10+..+n
#include <stdio.h>
#include <stdlib.h>
main(){
	
	int n, suma=0;
	
	printf("ingresar el valor:  ");
	scanf("%d", &n);
	
	for(int i=1;i<=n;i+=3){
		suma += i;
	}
	printf("el resultado es:%d", suma);
}

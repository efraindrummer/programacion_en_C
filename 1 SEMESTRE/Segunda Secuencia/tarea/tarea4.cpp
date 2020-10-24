#include <stdio.h>
#include <stdlib.h>
main(){
	
	int n,suma=0;
	
	printf("ingresar numero:  ");
	scanf("%d", &n);
	
	for(int i=1;i<=n;i+=8){
		
		suma += i;
	}
	printf("resultado:%d", suma);
}

// 7+11+15+19+...+n
#include <stdio.h>
#include <stdlib.h>
main(){
	
	int n,suma=0;
	
	printf("ingresar numero:  ");
	scanf("%d", &n);
	
	for(int i=7;i<=n;i+=4){
		
		suma += i;
	}
	printf("resultado:%d", suma);
}

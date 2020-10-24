#include <stdio.h>
#include <stdlib.h>

main(){
	int n, suma1=0, suma2=0;
	
	for(int i=0;i<5;i++){
		printf("\nnumeros:  ");
		scanf("%d", &n);
		
		if(n % 2 == 0){
			suma1 ++;
			
		}else if(n % 2 == 1){
			suma2 += 1;
		}
	}	printf("los pares son: %d", suma1);
		printf("\nlos impares son: %d", suma2);
}




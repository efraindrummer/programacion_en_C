//solicitar al usuario una lista de numeros localizar el mayor//

#include <stdio.h>
#include <stdlib.h>

main(){
	int cant, num, m=0;
	
	printf("ingresar numeros:  ");
	scanf("%d", &cant);
	
	for(int i=1;i<=cant;i++){
		
		printf("ingresar numero:  ");
		scanf("%d", &num);
		
		if(num>m){
		
		m=num;
    }
	}
	printf("el numero mayor es:%d ", m);
}
  

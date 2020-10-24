#include <stdio.h>
#include <math.h>

main(){
	
	for(int i=1;i<=200;i++){
		printf("pow(%d, 3)=%0.2f\n", i, pow(i, 3));
	}
}

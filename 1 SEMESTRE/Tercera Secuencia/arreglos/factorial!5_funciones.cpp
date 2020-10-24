#include <stdio.h>

long factorial(long n){	
	long f=1;	
	for(int i=1;i<=n;i++){	
		f*= i;
		printf("%d *", i);
	}
	return f;
}
main(){
	long n;
	printf("\nfactorial:  ");
	scanf("\n%d", &n);
	printf("\nel resultado es:%d", factorial(n));
}

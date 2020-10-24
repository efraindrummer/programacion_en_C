#include <stdio.h>
#include <conio.h>
main(){
	int a[40], s, n=2;
	
	for(int i=0; i<40; i++){
		a[i]=n;
		n+=2;
		printf("%d + ", i);
	}
	for(int i=0; i<40 ;i++){
		s+=a[i];
	}
	printf("\nEl resultado es:%d\n", s);
}

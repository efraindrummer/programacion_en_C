#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int par(){

int suma = 0;
for(int i=0; i<=100; i+=2){
	suma += i;
	
}return suma;
}
main(){
	printf("el resultado es:%d", par());
}

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char caracter;
	
	printf("ingresar un caracter:  ");
	scanf("%c", &caracter);
	
	if (caracter >=65 &&  caracter<=90){
	printf("mayusculas:  ", caracter);
		}
		else{
			if(caracter >=97 && caracter<=122){
				printf("minuscula:  ", caracter);
				
			}
			else{
				printf("calcualquier valor", caracter);
			}
		}
	}


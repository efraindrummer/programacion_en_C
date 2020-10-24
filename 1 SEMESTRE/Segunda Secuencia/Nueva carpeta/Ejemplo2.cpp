
#include <stdio.h>

main(){
	char c;
	
	printf ("Ingrese un caracter: ");
	scanf ("%c",&c);
	
	if((c>=65 && c<=90)||(c>=97 && c<=122)){
		switch(c){
			case 65:
			case 69:
			case 73:
			case 79:
			case 85:
			case 97:
			case 101:
			case 105:
			case 111:
			case 117:
				printf ("minuscula");
				break;
			default:
				printf ("mayuscula");
		}
	}
}

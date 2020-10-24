//contar consonantes

#include <stdio.h>
#include <stdlib.h>
main(){
	char cadena, i=0;
	do{
		printf("\nIngresar Consonantes:  ");
		scanf("%c", &cadena);
		fflush(stdin);
		if(
		(cadena=='b')||(cadena=='c')||(cadena=='d')||(cadena=='f')||(cadena=='g')||(cadena=='h')||(cadena=='j')||
		(cadena=='k')||(cadena=='l')||(cadena=='m')||(cadena=='n')||(cadena=='p')||(cadena=='q')||(cadena=='r')||
		(cadena=='s')||(cadena=='t')||(cadena=='v')||(cadena=='w')||(cadena=='y')||(cadena=='z')||(cadena=='B')||
		(cadena=='C')||(cadena=='D')||(cadena=='F')||(cadena=='G')||(cadena=='H')||(cadena=='J')||(cadena=='K')||
		(cadena=='L')||(cadena=='M')||(cadena=='N')||(cadena=='P')||(cadena=='Q')||(cadena=='R')||(cadena=='S')||
		(cadena=='T')||(cadena=='V')||(cadena=='W')||(cadena=='Y')||(cadena=='Z')){
			i++;
		}
	}while(cadena!='.');
	printf("indicar cuantas consonantes ingresamos:%d", i);
}

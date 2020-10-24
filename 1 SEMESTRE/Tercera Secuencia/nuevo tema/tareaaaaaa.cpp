//contar letras, digitos y caracteres especiales
#include <stdio.h>
#include <stdlib.h>

main(){
	char cadena, i=0;
    int letras, digitos, caracteres;
	do{
		printf("\nIngresar letras:  ");
		scanf("%c", &cadena);
		fflush(stdin);
		
		if ((cadena=='a')||(cadena=='b')||(cadena=='c')||(cadena=='d')||(cadena=='e')||(cadena=='f')||(cadena=='g')||(cadena=='h')||(cadena=='i')||(cadena=='j')||
			(cadena=='k')||(cadena=='l')||(cadena=='m')||(cadena=='n')||(cadena=='o')||(cadena=='p')||(cadena=='q')||(cadena=='r')||(cadena=='s')||(cadena=='t')||
			(cadena=='u')||(cadena=='v')||(cadena=='w')||(cadena=='y')||(cadena=='z')||(cadena=='A')||(cadena=='B')||(cadena=='C')||(cadena=='D')||(cadena=='E')||
			(cadena=='F')||(cadena=='G')||(cadena=='H')||(cadena=='I')||(cadena=='J')||(cadena=='K')||(cadena=='L')||(cadena=='M')||(cadena=='N')||(cadena=='O')||
			(cadena=='P')||(cadena=='Q')||(cadena=='R')||(cadena=='S')||(cadena=='T')||(cadena=='U')||(cadena=='V')||(cadena=='W')||(cadena=='Y')||(cadena=='Z'))
			{
				i++;
			}
			
			
		}while(cadena!='.');
		printf("indicar cuantas letras ingresamos:%d", i);
}

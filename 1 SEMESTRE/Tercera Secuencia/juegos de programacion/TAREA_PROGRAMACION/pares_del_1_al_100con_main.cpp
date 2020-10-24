//1. Escribir un programa que contenga una función que calcule y retorne la suma de los números pares del 1 al 100. El resultado se debe imprimir en el main.
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void color  (int c){  
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),c);
}
void gotoxy (int x, int y){   
	COORD coord;
	
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE),coord);
}
main(){
	int x;
	color(48);
	system("CLS");
	
    int i,sum=0;
    	gotoxy(30, 1);
    	printf("***********FUNCIONES DE LA SUMA DEL 1 AL 100**********");
    
	    gotoxy(30, 5);	
    for(i=0;i<=100;i=i+2){
    
		printf(" %d ",i);
        sum = sum +i;
    }
    gotoxy(30, 10);
    printf("%d ",sum);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//tipo de dato retornado y identificador
void color  (int c){  //parametros
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),c);
}
//indentificador
void gotoxy (int x, int y){   //parametros
	COORD coord;
	
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE),coord);
}

main(){
	int n;
	
	color(31);
	system("CLS");
	gotoxy(5, 10);
	printf("ingrese un numero:  ");
	
	color(31);
	gotoxy(26, 10);
	scanf("%d", &n);
	
printf("el resultado es:%d", n*4);
	
}

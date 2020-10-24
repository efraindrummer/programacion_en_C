//progrma que sume 2 numeros

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
	int n1, n2, r;
	
	color(2);
	system("CLS");
	gotoxy(1, 5);
	printf("ingresa primer numeo:  ");
	scanf("%d", &n1);
	printf("ingresar segundo numero:  ");
	scanf("%d", &n2);
	r=n1+n2;
	printf("el resultado es:%d", r);
	
}

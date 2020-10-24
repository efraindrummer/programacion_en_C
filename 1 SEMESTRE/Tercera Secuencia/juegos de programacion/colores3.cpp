#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//tipo de dato retornado y identificador
void color  (int c){  //parametros
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),c);
}
void gotoxy (int x, int y){   
	COORD coord;
	
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE),coord);
}
int suma(int x, int y){
	return x+y;
}
main(){
	int n1, n2;
	
	color(31);
	gotoxy(23, 1);
	system("CLS");
	printf("*****suma de 2 numeros*****");	
	
	color(2);
	gotoxy(3, 10);
	printf("numero 1:  ");
	
	color(31);
	gotoxy(17, 10);
	printf("numero 2:  ");
	
	color(30);
	gotoxy(17, 5);
	scanf("%d", &n1);
	
	color(30);
	gotoxy(17, 5);
	scanf("%d", &n2);
	
	color(31);
	gotoxy(27, 13);
	printf("resultado =");
	color(30);
	gotoxy(40, 13);
	printf("%d", suma(n1,n2));
	
	gotoxy(0, 20);
	color(31);	
	
}

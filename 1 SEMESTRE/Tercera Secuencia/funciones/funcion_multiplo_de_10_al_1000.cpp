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

int multi(int suma=0){
	
	for(int i=10;i<=100;i+=10){
		printf("%d + ", i);
		suma += i;
	}
	return suma;
}
main(){
	int suma;
	color(14);
	system("CLS");
	printf("el resultado es:%d", multi());
}

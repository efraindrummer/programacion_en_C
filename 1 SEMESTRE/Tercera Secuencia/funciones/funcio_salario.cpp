#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
float leer(int resultado){
	float edad, s, sueldo;
	color(15);
	system("CLS");
	gotoxy(30, 1);
	printf("**********SALARIO**********");
	gotoxy(30, 5);
	printf("ingrese su  antiguedad: ");
	scanf("%f",&edad);
	gotoxy(30, 10);
	printf("ingrese el sueldo base:");
	scanf("%f",&s);
	
	if(edad>=5 && edad<9){
		sueldo=s+(s*0.05);
	}
	if(edad>=10 && edad<14){
		sueldo=s+(s*0.08);
	}
	if(edad>=15 && edad<19){
		sueldo=s+(s*0.10);
	}
	if(edad>=20 && edad<24){
		sueldo=s+(s*0.12);
	}
	if(edad>=25){
		sueldo=s+(s*0.15);
	}
	return sueldo;
}
main(){
	float sueldo;
	printf("el sueldo es:%0.2f",leer(resultado));
}

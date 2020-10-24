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

float promedio(int n){
	float suma=0, cantidad;
	
	for(int i=1;i<=n;i++){
	    system("CLS");
	    gotoxy(30, 10);
		printf("numero:  ");
		scanf("%f", &cantidad);
		
		suma=suma+cantidad;
	}
	return suma/n;
}
main(){
	float n;
	color(14);
	system("CLS");
	gotoxy(30, 1);
	printf("**********CALCULAR PROMEDIO**********");
	gotoxy(30, 5);
	printf("Ingresar calificaciones acalcular:  ");
	scanf("%f", &n);
	gotoxy(30, 8);
	printf("el promedio es:%.2f", promedio(n));
}

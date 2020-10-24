//2. Escribir un programa que contenga una función que reciba un valor n y retorne la suma de la serie 1/2 + 1/3 + ...+1/n, donde n es proporcionado por el usuario. 
//La lectura de n y la salida del resultado se deben implementar en el main.
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
float sumaserie (float n){
	float suma = 0;
}
main(){
	int x;
	color(178);
	system("CLS");
		
	float n, suma=0;
	gotoxy(20, 1);
	printf("****************serie numerica****************");
	gotoxy(30, 5);
	printf("ingresar numero:  ");
	scanf("%f", &n);
	
	for(int i=2;i<=n;i++){
		
		suma += (1.0/(float)i);
	}

	color(15);
	gotoxy(30, 10);
	printf("resultado: %0.2f", suma);
}
void(suma){
	return;
	
}

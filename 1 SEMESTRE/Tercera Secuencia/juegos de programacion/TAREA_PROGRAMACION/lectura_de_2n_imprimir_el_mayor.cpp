//3. Escribir un programa que contenga una función que reciba dos números por parámetro y retorne el mayor de los dos. 
//Ambos valores son ingresados por el usuario. La lectura de los dos números y la impresión del mayor se deben implementar en el main.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

void color  (int);
void gotoxy (int, int);
int compara(int, int);

main(){
	int x;
	color(116);
	system("CLS");
		
	int num1, num2;
    gotoxy(15, 5);
    printf("**********imprimir dos numeros y imprimir el mayor***********");
    gotoxy(25, 10);
	printf( "Introduzca dos numeros: " );
	scanf( "%d %d", &num1, &num2 );
    gotoxy(30, 15);
	printf( "%i es mayor\n", compara( num1, num2 )); 
}

int compara( int a, int b ){
	if ( a>b ){
	    return a;
	}else{
	    return b;
	}
}

void color  (int c){  
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),c);
}

void gotoxy (int x, int y){   
	COORD coord;
	
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE),coord);
}

//Dadas N calificaciones calcular el promedio//
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void color (int c){
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),c);
}

void gotoxy (int x, int y){
	COORD coord;
	
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE),coord);
}
float prom(int num){
    
	float suma=0, cantidad;
    
	color(31);
	system("CLS");
	gotoxy(5, 10);
	
    for(int i=1;i<=num;i++){
	    printf("Numero: ");
	    scanf("%f",&cantidad);
	
	    suma = suma + cantidad;
    }
    return suma / num;
}
main(){ 
	float num;
    printf("\nA cuantos numeros quieres calcular su promedio: ");
    scanf("%f",&num);
	printf("Su promedio es: %0.2f",prom(num));
}

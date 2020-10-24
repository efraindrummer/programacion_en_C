#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
//suma, resta, multiplicacion, division, potencia, raiz cuadrada con menu

void color  (int c){  
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),c);
}
void gotoxy (int x, int y){   
	COORD coord;
	
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE),coord);
}

int menu(){
	int x;
	color (2);
	
	system("CLS");
	gotoxy (25, 8);
	printf("1. suma\n");
	gotoxy (25, 9);
	printf("2. resta\n");
	gotoxy (25, 10);
	printf("3. multiplicacion\n");
	gotoxy (25, 11);
	printf("4. division\n");
	gotoxy (25, 12);
	printf("5. potencia\n");
	gotoxy (25, 13);
	printf("6. raiz cuadrada\n");
	gotoxy (25, 14);
	printf("7. salir\n");
	gotoxy (25, 15);
	printf("opcion (1 - 7):  ");
	gotoxy (41, 15);
	scanf("%d", &x);
	return x;
}

float suma(){
	float a, b;
	system("CLS");
	gotoxy (25, 8);
	printf("primer numero:  ");
	scanf("%f", &a);
	gotoxy (25, 10);
	printf("segundo numero:  ");
	scanf("%f", &b);
	gotoxy (25, 13);
	return a+b;
}


float resta(){
	float a, b;
	system("CLS");
	gotoxy (25, 8);
	printf("primer numero:  ");
	scanf("%f", &a);
	gotoxy (25, 10);
	printf("segundo numero:  ");
	scanf("%f", &b);
	gotoxy (25, 13);
	return a-b;
}

float multiplicacion(){
float a, b;
	system("CLS");
	gotoxy (25, 8);
	printf("primer numero:  ");
	scanf("%f", &a);
	gotoxy (25, 10);
	printf("segundo numero:  ");
	scanf("%f", &b);
	gotoxy (25, 10);
	
	return a*b;
}

float division(){
	float a, b;
	system("CLS");
	gotoxy (25, 8);
	printf("primer numero:  ");
	scanf("%f", &a);
	gotoxy (25, 10);
	printf("segundo numero:  ");
	scanf("%f", &b);
	gotoxy (25, 13);
	
	return a/b;
}


float potencia(){
float  base, exp, p = 1;
	system("PAUSE");
	gotoxy (25, 8);
	printf("base:  ");
	scanf("%f", &base);
	gotoxy (25, 10);
	printf("exponente:  ");
	scanf("%f", &exp);
	
	
	for(int i=0;i<exp;i++){
		p *= base;
	}
	gotoxy (25, 13);
	return p;
}

float raiz(){
	float x;
	system("CLS");
	gotoxy (25, 8);
	printf("numero:  ");
	scanf("%f", &x);
	gotoxy (25, 13);
	
	return sqrt(x);
}

int main(){
	int op;
	
	do{
	
	    op = menu();
	    switch (op){
		    case 1:
		    gotoxy (25, 8);
			printf("suma = %.2f\n", suma()); 
		    system("PAUSE");
			break;
		    case 2: 
			gotoxy (25, 8);
			printf("resta = %.2f\n", resta()); 
		    system("PAUSE");
			break;
		    case 3:
			gotoxy (25, 8); 
			printf("multiplicacion = %.2f\n", multiplicacion);
			system("PAUSE"); 
			break;
		    case 4:
			gotoxy (25, 8); 
			printf("division = %.2f\n", division()); 
		    system("PAUSE");
			break;
		    case 5:
			gotoxy (25, 8); 
			printf("potencia = %.2f\n", potencia());
			system("PAUSE"); 
			break;
		    case 6: 
			gotoxy (25, 8);
			printf("raiz cuadrada = %.2f\n", raiz()); 
		    system("PAUSE");
			break;
	        }
	        
    }while (op = !7);
    
} 





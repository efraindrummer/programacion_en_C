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

int triangulos(int a, int b, int c){
	
	color(143);
	system("CLS");	
	gotoxy(30, 1);
	printf("**********QUE TIPO DE TRIANGULOS ES**********");
	gotoxy(30, 3);	
	printf("ingresar primer valor:  ");
	scanf("%d",&a);
	gotoxy(30, 5);
	printf("ingresar tercer valor:  ");
	scanf("%d",&b);
	gotoxy(30, 7);
	printf("ingresar tercer valor:  ");
	scanf("%d",&c);
	
	if(a==b&&a==c){ 
	gotoxy(30, 10);
	printf("\nequilatero"); 
	} 
	else if(a==b||a==c||b==c){ 
	gotoxy(30, 10);	
	printf("\nisosceles"); 
	} 
	else if(a!=b&&a!=b&&b!=c){
	gotoxy(30, 10); 
	printf("\nescaleno"); 
} 
	
return a, b, c;
}
main(){
	int a, b, c;
	
    printf("",triangulos(a, b, c));
}

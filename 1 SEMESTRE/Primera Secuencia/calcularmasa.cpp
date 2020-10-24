#include<iostream> 
#include<conio.h> 
#include<stdio.h> 
main() 
{ 
float p, v, t, m; 
// p = presión. 
// v = volumen. 
// t = temperatura. 
// m = masa. 
printf("Programa que permite calcular la masa de aire:"); 
printf("\n\nIngresa la presion\t\t"); 
scanf("%f",&p); 

printf("\n\nIngresa el volumen\t\t"); 
scanf("%f",&v); 

printf("\n\nIngresa la temperatura\t\t"); 
scanf("%f",&t); 

m=(p*v)/(0.37*(t+460)); 


printf("\n*****************"); 
printf("\n\nLa masa de aire es:\t\t%0.2f",v); 


getch(); 
} 


#include<stdio.h>
#include<conio.h>
#define porc 0.10 /*definimos a esta variable*/
int main ()
{
float sb,com,v1,v2,v3,tot_vta, tpag;

printf("Su salario base es:");
scanf("%f",&sb);
printf("Introduzca las tres Ventas\n"); /*aquí utilizamos el \n para dar un salto de linea*/
scanf("%f",&v1); /*introducimos las tres ventas*/
scanf("%f",&v2);
scanf("%f",&v3);
tot_vta=v1+v2+v3; /*calculamos el total de las ventas*/
com=tot_vta*porc; /*calculamos la comision*/
tpag=sb+com; /*el total a pagar seria de*/
printf("El total a pagar es:C$%.2f",tpag);
}

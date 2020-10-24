
#include <stdio.h>
#include <stdlib.h>

int main ()

{
int x , y , i , potencia;

i = 1;
potencia = 1;

printf ("Introduce la base\n"); 
scanf ("%d" , &x);
printf ("Introduce el exponente\n");
scanf ("%d" , &y);

while ( i <= y)

{
potencia = potencia * x;
i++;
}
printf ("%d" , potencia);

}

#include<stdio.h>
#include<conio.h>
 main ()
{
int c1,c2,c3,ef,tf;

float prom,ppar,pef,ptf,cf;

printf("Primer calificacion:");
scanf("%d",&c1);

printf("Segunda calificacion:");
scanf("%d",&c2);

printf("Tercera calificacion:");
scanf("%d",&c3);

printf("Introduzca la nota del examen final:");
scanf("%d",&ef);

printf("Introduzca la nota del trabajo:");
scanf("%d",&tf);

prom=(c1+c2+c3)/3;


ppar=prom*0.55;

pef=ef*0.30;

ptf=tf*0.15;

cf=ppar+pef+ptf;

printf("La calificacion Final del alumno es:%.2f",cf);
}

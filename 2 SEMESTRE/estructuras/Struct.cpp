#include <stdio.h>
/*Sergio Antonio Piza Ascencio
 Ing. en Computacion*/
 
struct empleado{
	char nombre [30];
	char sexo [12];
	float salario;	
};
void menu()
{		
	struct empleado emp[100];
	int e, nemp, pmay, pmen;
	float mayor=0.0, menor=9999.0;
	printf("Introduzca el numero de empleados: ");
	scanf("%d",&nemp);
	
	for(e=0; e<nemp; e++)
	{
		printf("Nombre [%d]: ",e+1);
		scanf("%s",emp[e].nombre);
		printf("Sexo [%d]: ",e+1);
		scanf("%s",emp[e].sexo);
		printf("Salario [%d]: ",e+1);
		scanf("%f",&emp[e].salario);
		
		if(emp[e].salario>mayor)
		{
			mayor=emp[e].salario;
			pmay=e;
		}
		if (emp[e].salario<menor)
		{
			menor=emp[e].salario;
			pmen=e;
		}
	 }
	 printf("%s es el trabajador con mayor salario ", emp[pmay].nombre);
	 printf("%s es el trabajador con menor salario ", emp[pmen].nombre);
}

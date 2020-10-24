/*1.Calcular el promedio de 10 valores almacenados en un vector.
Determinar además cuantos son mayores que el promedio,
imprimir el promedio, el número de datos mayores que el promedio.*/
 
#include <stdio.h>
#include <conio.h>

void lectura(int v[10]){
	
	printf("Ingrese 10 numeros: \n");
	for(int i=0;i<10;i++){
		printf("%d = ", i+1);
		scanf("%d", &v[i]);
	}	
} 

void mayor(int v[10]){
	int auxM=0, posM=-1;
	
	for(int i=0;i<10;i++){
		if(v[i] > auxM){
			auxM=v[i];
			posM=i;
		}
	}
}

int promedio(int v[10]){
	int suma=0;
	
	for(int i=0;i<10;i++){
		
		suma+=v[i];
	}
	return suma / 10;
}

int contarMayores(int v[10], int prom){
	int c=0;
	
	for(int i=0;i<10;i++){
		if(v[i] > prom){
			c++;
		}
	}
	return c;
}

main(){
	int x[10], p;
	
	lectura(x);
	mayor(x);
	p=promedio(x);
	
	printf("\nEL PROMEDIO ES:%d", p);
	printf("\nLOS MAYORES AL PROMEDIO SON:%d", contarMayores(x, p));
	
	getch();
	return 0;
}

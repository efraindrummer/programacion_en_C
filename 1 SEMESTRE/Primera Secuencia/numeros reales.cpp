#include <stdio.h>
#include <stdlib.h>

main(){
	int suma, multiplicacion;
	float na, nb, nc;
	
	printf("ingresar primer numero:  ");
	scanf("%d" ,&na);
	
	printf("ingresar segundo numero:  ");
	scanf("%d" ,&nb);
	
	printf("ingresar tercer numero:  ");
	scanf("%d" ,&nc);
	
	suma=(na+nb+nc);
	
	multiplicacion=(na*nb*nc);
	
	printf("resultado de suma:%0.2f" ,suma);
	printf("resultado de multiplicacion:%0.2f" ,multiplicacion);
}

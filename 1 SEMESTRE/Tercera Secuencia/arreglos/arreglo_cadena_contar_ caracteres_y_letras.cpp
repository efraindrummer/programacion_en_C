//leer una cadena de tamaño maximo 25, contar cuantos caracteres son letras.

#include <stdio.h>
#include <string.h>
main(){
	int longi=0;
	char l, c[25];
	printf("Ingresar cadena:  ");
	scanf("%s", &c);
	
	for(int i=0;i<strlen(c);i++){
	if(c[i]>='a'&&c[i]<='z'){
		l++;
	}
    printf("\nLa frase tiene:%d", l);
}
}

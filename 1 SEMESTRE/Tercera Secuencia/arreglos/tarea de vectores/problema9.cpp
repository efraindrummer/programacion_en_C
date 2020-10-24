//9.Leer una cadena de máximo 20 caracteres. El programa debe indicar cuantas vocales tiene la cadena.

#include <stdio.h>
#include <string.h>

void cadena(char v[20]){
	int contador=0;
	printf("ingresar cadena de 20 numeros: \n");
	for(int i=0;i<20;i++){
		scanf("%s", &v[i]);
		
		while(v[i]!='\0'){
			if ((v[i]=='a')||(v[i]=='e')||(v[i]=='i')||(v[i]=='o')||(v[i]=='u')|| 
                (v[i]=='A')||(v[i]=='E')||(v[i]=='I')||(v[i]=='O')||(v[i]=='U'))
               contador[i]++;
		}
	}
	printf("el numero de vocales son:%d", contador);
}

main(){
	char x[20];
	cadena(x);
}


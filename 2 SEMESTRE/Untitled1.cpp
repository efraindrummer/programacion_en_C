#include <stdio.h>
#define maxcol 20
#define maxfil 20

void leer (char a[][maxcol],int m, int n){
    for(int x=0; x<n; x++){
        printf("\n Introducir datos para la fila n: %2d\n",x+1);
        for(int y=0; y<m; y++)
        scanf("%s",&a[x][y]);
    }return;
}

void codificar(char a[][maxcol],char b[][maxcol],int m,int n){
	
	for(int x=0;x<n;x++){
		for(int y=0;y<m;y++)
		switch(a[x][y]){
		        case 'a': b[x][y]='z'; break;
				case 'b': b[x][y]='y'; break;
				case 'c': b[x][y]='x'; break;
				case 'd': b[x][y]='w'; break;
				case 'e': b[x][y]='v'; break;
				case 'f': b[x][y]='u'; break;
				case 'g': b[x][y]='t'; break;
				case 'h': b[x][y]='s'; break;
				case 'i': b[x][y]='r'; break;
				case 'j': b[x][y]='q'; break;
				case 'k': b[x][y]='p'; break;
				case 'l': b[x][y]='o'; break;
				case 'm': b[x][y]='n'; break;
				case 'ñ': b[x][y]='ñ'; break;
				case 'n': b[x][y]='m'; break;
				case 'o': b[x][y]='l'; break; 
				case 'p': b[x][y]='k'; break;
				case 'q': b[x][y]='j'; break;
				case 'r': b[x][y]='i'; break;
				case 's': b[x][y]='h'; break;
			    case 't': b[x][y]='g'; break;
			    case 'u': b[x][y]='f'; break;
			    case 'v': b[x][y]='e'; break;
				case 'w': b[x][y]='d'; break;
				case 'x': b[x][y]='c'; break;
				case 'y': b[x][y]='b'; break;
				case 'z': b[x][y]='a'; break;
		}
	}
}

void salida(char a[][maxcol],int m , int n){
    for(int x=0; x<n; x++){
        for(int y=0; y<m; y++)
		printf("%c ",a[x][y]);
        printf("\n");
    }
}

main(){
    char x[maxfil][maxcol], y[maxfil][maxcol];
    int n, m;
    
    printf("ingrese n filas\n");
    scanf("%d",&m);
    
    printf("ingrese n columnas\n");
    scanf("%d",&n);
    
    printf("ingrese datos a codificar\n");
    leer(x,n,m);
    
    printf("Matriz Original\n\n");
    salida(x,n,m);
	
	printf("\nCodificacion: ");
    codificar(x,y,n,m);
    
    printf("Matriz Encriptada\n");
    salida(y,n,m);
}


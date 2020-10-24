#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define maxf 20
#define maxc 20
void nombre(char n[maxf][maxc],int nv);
void ventas(int v[maxf][maxc], int nv, int nd);
void promediodia(int v[maxf][maxc],int p[],int nv, int nd);
int peorvendedor(int v[maxf][maxc],int nv, int nd);
int mejorvendedor(int v[maxf][maxc],int nv, int nd);
void proporvendedor(char n[maxf][maxc],int v[maxf][maxc],int p[],int nv, int nd);
int peordia(int v[maxf][maxc],int nv, int nd);
int mejordia(int v[maxf][maxc],int nv, int nd);
int total(int v[maxf][maxc],int nv,int nd);
void salida(char n[maxf][maxc],int v[maxf][maxc],int nv, int nd);

main(){
	int v[maxf][maxc], p[maxf];
	int indice, nv, mejorven, nd=7, t, pd, md;
	char n[maxf][maxc];
	
	printf("Cuantos vendedores: \n");
	for(int i=0;i<nv;i++){
		printf("%d = ", i+1);
		scanf("%d",&nv);
}
	nombre(n,nv);
	ventas(v,nv,nd);
	
	/*promediodia(v,p,nv,nd);
	for(int i=0; i<nv; i++){
		printf("\n%d",p[i]);
		printf("\n");
	}*/
	
	indice=peorvendedor(v,nv,nd);
	printf("el peor vendedor se llama %s\n\n",n[indice+1]);
	
	mejorven=mejorvendedor(v,nv,nd);
	printf("el mejor vendedor se llama %s\n",n[mejorven+1]);	
	
	proporvendedor(n,v,p,nv,nd);
	
	t=total(v,nv,nd);
	printf("\nTotal de ventas: %d\n\n",t);
	
	pd=peordia(v,nv,nd);
	printf("el peor dia es %d\n",pd+1);
	
	md=mejordia(v,nv,nd);
	printf("el mejor dia es %d\n\n",md+1);
	
	salida(n,v,nv,nd);
}
	
void nombre(char n[maxf][maxc],int nv){
	printf("Ingrese el nombre de vendedor: \n");
	for(int i=0; i<=nv; i++){
		printf("%d = ", i+1);		
		gets(n[i]);
	}
}
	
void ventas(int v[maxf][maxc],int nv, int nd){
	for(int i=0; i<nv; i++){
		printf("Ingrese las ventas: vendedor %d\n",i+1);
		for(int j=0; j<nd; j++)
		
#include<stdlib.h>

#define maxf 20
#define maxc 20

void nombre(char n[maxf][maxc],int nv);
void ventas(int v[maxf][maxc], int nv, int nd);
void promediodia(int v[maxf][maxc],int p[],int nv, int nd);
int peorvendedor(int v[maxf][maxc],int nv, int nd);
int mejorvendedor(int v[maxf][maxc],int nv, int nd);
void proporvendedor(char n[maxf][maxc],int v[maxf][maxc],int p[],int nv, int nd);
int peordia(int v[maxf][maxc],int nv, int nd);
int mejordia(int v[maxf][maxc],int nv, int nd);
int total(int v[maxf][maxc],int nv,int nd);
void salida(char n[maxf][maxc],int v[maxf][maxc],int nv, int nd);

main(){
	int v[maxf][maxc], p[maxf];
	int indice, nv, mejorven, nd=7, t, pd, md;
	char n[maxf][maxc];
	
	printf("Cuantos vendedores: \n");
	for(int i=0;i<nv;i++){
		printf("%d = ", i+1);
		scanf("%d",&nv);
}
	nombre(n,nv);
	ventas(v,nv,nd);
	
	/*promediodia(v,p,nv,nd);
	for(int i=0; i<nv; i++){
		printf("\n%d",p[i]);
		printf("\n");
	}*/
	
	indice=peorvendedor(v,nv,nd);
	printf("el peor vendedor se llama %s\n\n",n[indice+1]);
	
	mejorven=mejorvendedor(v,nv,nd);
	printf("el mejor vendedor se llama %s\n",n[mejorven+1]);	
	
	proporvendedor(n,v,p,nv,nd);
	
	t=total(v,nv,nd);
	printf("\nTotal de ventas: %d\n\n",t);
	
	pd=peordia(v,nv,nd);
	printf("el peor dia es %d\n",pd+1);
	
	md=mejordia(v,nv,nd);
	printf("el mejor dia es %d\n\n",md+1);
	
	salida(n,v,nv,nd);
}
	
void nombre(char n[maxf][maxc],int nv){
	printf("Ingrese el nombre de vendedor: \n");
	for(int i=0; i<=nv; i++){
		printf("&d = ", i+1);		
		gets(n[i]);
	}
}
	
void ventas(int v[maxf][maxc],int nv, int nd){
	for(int i=0; i<nv; i++){
		printf("Ingrese las ventas: vendedor %d\n",i+1);
		for(int j=0; j<nd; j++)
		
#include<stdlib.h>

#define maxf 20
#define maxc 20

void nombre(char n[maxf][maxc],int nv);
void ventas(int v[maxf][maxc], int nv, int nd);
void promediodia(int v[maxf][maxc],int p[],int nv, int nd);
int peorvendedor(int v[maxf][maxc],int nv, int nd);
int mejorvendedor(int v[maxf][maxc],int nv, int nd);
void proporvendedor(char n[maxf][maxc],int v[maxf][maxc],int p[],int nv, int nd);
int peordia(int v[maxf][maxc],int nv, int nd);
int mejordia(int v[maxf][maxc],int nv, int nd);
int total(int v[maxf][maxc],int nv,int nd);
void salida(char n[maxf][maxc],int v[maxf][maxc],int nv, int nd);

main(){
	int v[maxf][maxc], p[maxf];
	int indice, nv, mejorven, nd=7, t, pd, md;
	char n[maxf][maxc];
	
	printf("Cuantos vendedores: \n");
	for(int i=0;i<nv;i++){
		printf("%d = ", i+1);
		scanf("%d",&nv);
}
	nombre(n,nv);
	ventas(v,nv,nd);
	
	/*promediodia(v,p,nv,nd);
	for(int i=0; i<nv; i++){
		printf("\n%d",p[i]);
		printf("\n");
	}*/
	
	indice=peorvendedor(v,nv,nd);
	printf("el peor vendedor se llama %s\n\n",n[indice+1]);
	
	mejorven=mejorvendedor(v,nv,nd);
	printf("el mejor vendedor se llama %s\n",n[mejorven+1]);	
	
	proporvendedor(n,v,p,nv,nd);
	
	t=total(v,nv,nd);
	printf("\nTotal de ventas: %d\n\n",t);
	
	pd=peordia(v,nv,nd);
	printf("el peor dia es %d\n",pd+1);
	
	md=mejordia(v,nv,nd);
	printf("el mejor dia es %d\n\n",md+1);
	
	salida(n,v,nv,nd);
}
	
void nombre(char n[maxf][maxc],int nv){
	printf("Ingrese el nombre de vendedor: \n");
	for(int i=0; i<=nv; i++){
		printf("&d = ", i+1);		
		gets(n[i]);
	}
}
	
void ventas(int v[maxf][maxc],int nv, int nd){
	for(int i=0; i<nv; i++){
		printf("Ingrese las ventas: vendedor %d\n",i+1);
		for(int j=0; j<nd; j++)
		printf("%d = ", i+1);
		scanf("%d",&v[i][j]);
		printf("\n");
	}
}

void promediodia(int v[maxf][maxc],int p[],int nv, int nd){
	int suma=0;
	for(int j=0; j<nd; j++){
		suma=0;
		for(int i=0; i<nv; i++)
		suma+=v[i][j];
		p[j]=suma/nd;
	}
}

int peorvendedor(int v[maxf][maxc],int nv, int nd){
	int suma=0, indiceven, meta=2000, prom;
	for(int i=0; i<nv; i++){
		suma=0;
		for(int j=0; j<nd; j++)
		suma+=v[i][j];
		prom=suma/nd;
		
		if(prom<meta){
			indiceven=i;
			meta=prom;
		}
	}return indiceven;
}

int mejorvendedor(int v[maxf][maxc],int nv, int nd){
	int suma=0, mejorven, meta=100, prom;
	for(int i=0; i<nv; i++){
		suma=0;
		for(int j=0; j<nd; j++)
		suma+=v[i][j];
		
		if(suma>meta){
			mejorven=i;
			meta=suma;
		}
	}return mejorven;
}
		scanf("%d",&v[i][j]);
		printf("\n");
	}
}

void promediodia(int v[maxf][maxc],int p[],int nv, int nd){
	int suma=0;
	for(int j=0; j<nd; j++){
		suma=0;
		for(int i=0; i<nv; i++)
		suma+=v[i][j];
		p[j]=suma/nd;
	}
}

int peorvendedor(int v[maxf][maxc],int nv, int nd){
	int suma=0, indiceven, meta=2000, prom;
	for(int i=0; i<nv; i++){
		suma=0;
		for(int j=0; j<nd; j++)
		suma+=v[i][j];
		prom=suma/nd;
		
		if(prom<meta){
			indiceven=i;
			meta=prom;
		}
	}return indiceven;
}

int mejorvendedor(int v[maxf][maxc],int nv, int nd){
	int suma=0, mejorven, meta=100, prom;
	for(int i=0; i<nv; i++){
		suma=0;
		for(int j=0; j<nd; j++)
		suma+=v[i][j];
		
		if(suma>meta){
			mejorven=i;
			meta=suma;
		}
	}return mejorven;
}
		scanf("%d",&v[i][j]);
		printf("\n");
	}
}

void promediodia(int v[maxf][maxc],int p[],int nv, int nd){
	int suma=0;
	for(int j=0; j<nd; j++){
		suma=0;
		for(int i=0; i<nv; i++)
		suma+=v[i][j];
		p[j]=suma/nd;
	}
}

int peorvendedor(int v[maxf][maxc],int nv, int nd){
	int suma=0, indiceven, meta=2000, prom;
	for(int i=0; i<nv; i++){
		suma=0;
		for(int j=0; j<nd; j++)
		suma+=v[i][j];
		prom=suma/nd;
		
		if(prom<meta){
			indiceven=i;
			meta=prom;
		}
	}return indiceven;
}

int mejorvendedor(int v[maxf][maxc],int nv, int nd){
	int suma=0, mejorven, meta=100, prom;
	for(int i=0; i<nv; i++){
		suma=0;
		for(int j=0; j<nd; j++)
		suma+=v[i][j];
		
		if(suma>meta){
			mejorven=i;
			meta=suma;
		}
	}return mejorven;
}

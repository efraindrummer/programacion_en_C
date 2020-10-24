#include<stdio.h>
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
	for(int i=0;i<nv;i++)
		scanf("%d",&nv);

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

void proporvendedor(char n[maxf][maxc],int v[maxf][maxc],int p[],int nv, int nd){
	int suma=0, vendedor;
	for(int i=0; i<nv; i++){
		suma=0;
		for(int j=0; j<nd; j++)
		suma+=v[i][j];
		p[i]=suma/nd;
		printf("\nNombre vendedor: %s , promedio vendido %d\n",n[i],p[i]);
	}
}

int total(int v[maxf][maxc],int nv, int nd){
	int suma=0,y;
	for(int i=0; i<nv; i++){
		for(int j=0; j<nd; j++)
		suma+=v[i][j];
	}return suma;
}

int peordia(int v[maxf][maxc],int nv, int nd){
	int i,j,suma=0, peordia, meta=10;
	for(j=0; j<nd; j++){
		suma=0;
		for(i=0; i<nv; i++)
		suma+=v[i][j];
		
		if(suma<meta){
			peordia=j;
			meta=suma;
		}
	}return peordia;
}

int mejordia(int v[maxf][maxc],int nv, int nd){
	int i,j,suma=0, mejordia, meta=20;
	for(j=0; j<nd; j++){
		suma=0;
		for(i=0; i<nv; i++)
		suma+=v[i][j];
		
		if(suma>meta){
			mejordia=j;
			meta=suma;
		}
	}return mejordia;
}

void salida(char n[maxf][maxc],int v[maxf][maxc],int nv, int nd){
	int i, j;
	for(i=0; i<nv; i++){
		for(j=0; j<nd; j++)
		printf("%4d",v[i][j]);
	    printf("\n");
	}
}

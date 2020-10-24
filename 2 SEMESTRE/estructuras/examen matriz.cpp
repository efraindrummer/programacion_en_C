#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int mat[3][3]={1,2,3 , 4,5,6 , 7,8,9};
int f,c,e,op, val=1;
void nula( int mat[3][3]);
void identidad(int mat[3][3]);
void escalar(int mat[3][3]);
void superior(int mat[3][3]);
void inferior(int mat[3][3]);
void traspuesta(int mat[3][3]);
int main()
{
	 printf(" 1: matris nula\n");
     printf(" 2: matris nula\n");
     printf(" 3: matris nula\n");
     printf(" 4: matris nula\n");
     printf(" 5: matris nula\n");
     printf(" 6: matris nula\n");
     printf("QUE TIPO DE MASTRISTE DESEA VISUALIZAR\n");
     scanf("%i ", &op);
     switch(op)
     {
     	case 1: 
		 {	
		      void nula( int mat[3][3]);
			break;
		 }
		 case 2:{
		 	
			break;
		 }
		 case 3:{
		 	
			break;
		 }
		 case 4:{
		 	
			break;
		 }
		 case 5:{
		 	
			break;
		 }
		case 6:{
			
			break;
		}
	 }  
 }
void  nula (int mat[3][3])
 {

for (f=0; f<3; f++)
{
	for(c=0; c<3; c++)
	{
		printf("%i ", mat[f][c]);	
	}
} printf("\n\n");
   
}
void identidad(int mat[3][3])
{
	for (f=0; f<3; f++)
	{
		for (c=0; c<3; c++)
		{
			if(f == c)
			{
				mat[f] [c] = 1;
			}
			else
			{
				mat[f] [c] = 0;
			}
			printf("%i ", mat[f] [c]);
		}
		printf("\n");
	}
}
void escalar( int mat[3][3] )
{
	printf("Ingrese el valor escalar: ");
	scanf("%i", & e);
	
	for (f=0; f<3; f++)
	{
		for (c=0; c<3; c++)
		{
			if(f == c)
			{
				mat[f] [c] = e;
			}
			else
			{
				mat[f] [c] = 0;
			}
			printf("%i ", mat[f] [c]);
		}
		printf("\n");
	}
}
void superior(int mat[3][3])
{
	
	for (f=0; f<3; f++)
	{
		for (c=0; c<3; c++)
		{
			if (f > c)
			{
				mat[f] [c] = 0;
			}
			else
			{
				mat[f] [c] = val++;
			}
			printf("%i ", mat[f] [c]);
		}
		printf("\n");
	}
}
void inferior(int mat[3][3])
{
	int m [3] [3], f, c, val = 1;
	
	for (f=0; f<3; f++)
	{
		for (c=0; c<3; c++)
		{
			if (f < c)
			{
				mat[f] [c] = 0;
			}
			else
			{
				mat[f] [c] = val++;
			}
			printf("%i ", m [f] [c]);
		}
		printf("\n");
	}
}
void traspuesta(int mat[3][3])
{
	for (f=0; f<3; f++)
	{
		for (c=0; c<3; c++)
		{
			printf("%i ", mat[c] [f]);
		}
		printf("\n");
	}
}


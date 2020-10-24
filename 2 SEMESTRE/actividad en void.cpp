#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void altas (void);
void bajas (void);
void consultas  (void);
void modificaciones (void);
void impresion (void);
	int m2[3][4],f,c,vb,ve,vm,op;
int main (void)
{
	do
	{
		printf("\n\n1: ALTAS\n");
		printf("\n\n2: BAJAS\n");
		printf("\n\n3: CONSULTAS\n");
		printf("\n\n4: MODIFICACIONES\n");
		printf("\n\n5: IMPRESION\n");
		printf("\n\n6: SALIR\n");
		printf("\n\nPIDA UNA OPCION:");
		scanf("%i", & op);
		switch(op)
		{
			case 1: altas(); break;
			case 2: bajas(); break;
			case 3: consultas(); break;
			case 4: modificaciones(); break;
			case 5: impresion (); break;
			default : printf("\n\n\n\n\n\n\n\t\t****************************************HASTA PRONTO**************************************\n");
		} 			
	} 
	while (op!=6);
	getch();
	return(0);
}
void altas (void)
{

	for(f=0; f<3; f++){	
	for (c=0; c<4; c++)
	{
		printf(" DAR VALOR A [%i][%i] \n", f+1,c+1);
		scanf(" %i", & m2[f][c]);
	}
	printf("\n\n");
}
   getch();
}
void bajas (void)
{
	   printf("\n DA EL  VALOR A ELIMINAR\n");
		scanf("%i", & ve);
		for(f=0; f<3; f++){
	    for (c=0; c<4; c++)
	    {
	    	if(ve==m2[f][c])
	    	   m2[f][c]=0;}
	    }
	 getch();
}
void consultas (void)
{

		printf("QUE VALOR DESEA BUSCAR\n");
		scanf("%i", & vb);
		for(f=0; f<3; f++)
		{
	        for (c=0; c<4; c++)
	        {
	    	  if(vb==m2[f][c])
		     	{
	    	    printf("VALOR ENCONTRADO");
		     	}
			}
	    }
       getch();
}

void modificaciones (void)
{

	 printf(" DA EL  VALOR A MODIFICAR\n");
		scanf("%i", & vm);
		for(f=0; f<3; f++){
	    for (c=0; c<4; c++)
	    {
	    	if(vm==m2[f][c])
	    	{
	    	printf("DA NUEVO VALOR \n");
		    scanf("%i", & m2[f][c]);}
	    
		}
		
    }
     getch();

}
void impresion (void)
{
		for(f=0; f<3; f++)
		{
	    for (c=0; c<4; c++)
	    {
	    printf("%i ",m2[f][c]);
		}	
		printf("\n"); 
    }
    printf("\n");
    getch();
}


//solicitar al usuario un numero del 1 al 12 
//el programa debe imprimir el mes que corresponde al numero que ingreso el usuario

#include <stdio.h>

int  main(){
	
	int n;
	
	printf("ingrese un  numero:  ");
    scanf("%d" ,&n);
    
    if (n>=1 && n<=12){
    	 switch(n){
    	 	case 1:
    	 	printf("enero");
    	 	break;
    	 	case 2:
    	 	printf("febrero");
    	 	break;
    	 	case 3:
    	 	printf("marzo");
    	 	break;
    	 	case 4:
    	 	printf("abril");
    	 	break;
    	 	case 5:
    	 	printf("mayo");
    	 	break;
    	 	case 6:
    	 	printf("junio");
    	 	break;
    	 	case 7:
    	 	printf("julio");
    	 	break;
    	 	case 8:
    	 	printf("agosto");
    	 	break;
    	 	case 9:
    	 	printf("septiembre");
    	 	break;
    	 	case 10:
    	 	printf("octubre");
    	 	break;
    	 	case 11:
    	 	printf("noviembre");
    	 	break;
    	 	case 12:
    	 	printf("diciembre");
    	 	break;
    	 	default:
    	 	
		 
		 
		 
		 	printf("mes");
		 }
    	 
	}
	
	
}

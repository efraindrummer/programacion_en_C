#include <stdio.h>
main (){
     float unidades, total;
     printf("cuantas llantas deseas comprar:");
     scanf("%d", & unidades);
     if (unidades<=5){
                  total=unidades*1800;
                  printf("el precio es:%df", total);
                  }
                  else if(unidades >5){
                                     total=unidades*1550;
                                     printf("el precio es:%f", total);
                                     }
                                     
                                     }

#include <stdio.h>
int main()
{
    int h,m,s;
    
   printf("Ingresa hora\n");
   scanf("%d",&h);
   
   printf("Ingresa minuto\n");
   scanf("%d",&m);
   
   printf("Ingresa segundo\n");
   scanf("%d",&s);
   
    if(h < 24 && m < 60 && s < 60){
          if(s < 59 && s >= 0){
          	
          printf("%dh %dm %ds",h,m,(s+1));
          
        }else{
        if(s==59){
          	
        if(m==59){
        
        if(h==23){
        
		printf("00h 00m 00s");
        }else{
            printf("%dh 00m 00s",(h+1));
        }
        }else{
            printf("%dh %dm 00s",h,(m+1));
        }
        }
        }
      }else{
          printf("Fuera de Rango");
      }
      }

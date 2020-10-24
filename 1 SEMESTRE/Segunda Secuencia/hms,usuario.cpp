//solicitar al usuario 3 numeros enteros, hora, minutos y segundos independientes uno del otro, a esta hroa le vamos a sumar 1 segundo.
#include <stdio.h>
main(){
	int h, m, s, th, tm, ts;
	
	
	printf("ingresar hora:  ");
	scanf("%d", &h);
	
	printf("ingresar minutos:  ");
	scanf("%d", &m);
	
	printf("ingresar segundos:  ");
	scanf("%d", &s);
	
	s = s+1;
	m = (m*60)+s/60;
	if(s == 60){
		ts = 0;
	}else{
		ts = s;	
	}if(m==60){
		tm=0;
	}else{
		tm=m;
		th=(h*60)+m/60;
	}if(th==24){
		th=0;
		
	}else{
		printf("el tiempo mas 1 segundo es:%d:%d:%d", h, m , s);
	}
}

	

	

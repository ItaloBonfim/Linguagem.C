#include <stdio.h>
#include <stdlib.h>
//16/05/2017


int main(){

float intervalo;

//printf("digite o um valor:\n");
scanf("%f",&intervalo);


    if(intervalo>=0.0000 && intervalo<=25.0000)
     	printf("Intervalo [0,25]\n");
     
	    else if(intervalo>=25.0001 && intervalo<=50.0000)
		   printf("Intervalo (25,50]\n");
      		
		    else if(intervalo>=50.0001 && intervalo<=75.0000)
			   printf("Intervalo (50,75]\n");
		      
			    else if(intervalo>=75.0001 && intervalo<=100.0000)
				     printf("Intervalo (75,100]\n");

    else
    printf("Fora de intervalo\n");
    
    return 0;
}

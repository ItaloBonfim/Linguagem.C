#include <stdio.h>
#include <stdlib.h>


int main (){
	int caso,i,valor,aux=0,j;
	
	printf("digite o valor da quantidade de casos:\n");
	scanf("%d",&caso);
	
	if(caso>0 && caso <=100){
	
	for(i=1;i<=caso;i++){
		printf("Digite o Valor:\n");
	      scanf("%d",&valor);
	      system("cls");
        
			aux=0;
	
	     for(j=2;j<valor;j++){
		     if(valor%j==0){
		         aux++;}
        	} 
                 if(aux==0){
	             	printf("%d eh primo\n",valor);
               }     else{
	                	printf("%d nao eh primo\n",valor);
	                    }
	}
	
	}
	return 0;
}


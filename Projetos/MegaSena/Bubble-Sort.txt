#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#define tam 5


int bubble (int vet[]){
	int i,j,temp, aux=0, v_total=0;
	   
	   for(i=0;i<tam;i++){
	   	for(j=0;j<(tam-1);j++){  
	     if(vet[j]>vet[j+1]){          
	   	  	   temp=vet[j];
	   	  	   vet[j]=vet[j+1];
	   	  	   vet[j+1]=temp;
	   	  	    aux++;
	   	  	   			 }
	   	  	   v_total++;			 
							}
	   } 
	    srand(time(NULL));
	   for(i=0;i<tam;i++){
	   	 printf("\nVetor[%d]= %d\n",i,vet[i]);
	   }
}


int main(){
	int x,y, vetor[tam];
	   
	   srand(time(NULL));
	   for(x=0;x<tam;x++){
	   	   vetor[x]= rand()%100;
	   	  printf("\nVetor[%d]= %d\n",x,vetor[x]);
	   }
	   
	   printf("--------------------------------------Numeros Ordenados------------------------------------------------------------");
	   

	   bubble(vetor); 
	   
	   system("pause");
	   return 0;
	
}

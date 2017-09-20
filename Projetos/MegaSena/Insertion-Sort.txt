#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#define tam 50


int ordenar(int vet[]){
	int i,j,temp;
	
	   for(i=1;i<tam;i++){
	   	    temp=vet[i];
	   	    j=i-1;

	      while((j>=0) && (temp<vet[j])){
	      	 vet[j+1]=vet[j];
	      	    j--;
		  }
	vet[j+1]=temp;	   
}
	   
	   for(i=0;i<tam;i++){
	   	 printf("\tNumero[%02d]= %02d\t",i,vet[i]);
	   }
}


int main(){
	int x,y, vetor[tam];
	   
	   for(x=0;x<tam;x++){
	   	 vetor[x]= rand()%100;
	   	  printf("\tNumero[%02d]= %02d\t",x,vetor[x]);
	   }
	   
	   printf("--------------------------------------Numeros Ordenados------------------------------------------------------------");
	   
	   ordenar(vetor);
	   
	   system("pause");
	   return 0;
	
}

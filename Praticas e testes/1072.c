#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int X=0,Y=0,Z=0,j=0, aux=0 ,vet[10000],i=0,aux2=0;
	
	scanf("%d",&X);
	
	for(i=1;i<=X;i++){
		scanf("%d", &vet[i]);
	}
	i=0;
	
	while(aux2<X){
		if(vet[aux2]>=10 && vet[aux2]<=20){
			Z++;
		}
		else{
			j++;	
		}
		aux++;
	}
	
	printf("%d in", Z);
	printf("%d out",j);
	
	
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
# define TAM 2
int main(){
	
	int A=0,B=0,C=0,i,valores[TAM],j=0;
	
	for(i=0;i<=TAM;i++){
		scanf("%d",&valores[i]);}
		
		j= valores[0];
		for(i=0; i<TAM;i++){
			if(valores[i] > j){
				j = valores[i];
			}
		}
		
printf("J = %d", j);
		
	




	system("pause");
	return 0;
}

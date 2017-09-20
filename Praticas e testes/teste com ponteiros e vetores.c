#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <conio.h> 




int gloX,gloZ,gloY;

int selecao_v(int vet[]);
int selection(int x[], int y ,int z, int i);



int main (void){
	setlocale(LC_ALL, "Portuguese");
	
	int vet[10],*X,Y,Z,I;
	int *ponteiro = vet;
	
    selecao_v(vet);
    
  	printf("ponteiro %d \n", *ponteiro);
    
 

	
	system("pause");
	return 0;
	
	}
	
int selecao_v(int v[]){
	
	printf("\t\t você esta na função seleção_V \n\n");
	system("pause");
	
	int x;
	srand(time(NULL));
	
	for (x=0; x<10; x++){
		v[x] = rand()%100;
		printf("v[%d] = %.2d\n", x, v[x]);
		
//	return v[x]; com esse return podemos retornar apenas um numero na hora de rodar;
	 }
	
	 //selection(v[x]);
	
	
	

  }
  
  
  int selection(int v[], int y ,int z, int i){
  	printf("\t\t você esta na função selection \n\n");
  	
  	
  }
	
	
 	
  
	
	


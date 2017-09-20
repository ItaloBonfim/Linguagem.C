#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double valores, QtoValores=0,media;
	int count,i;
	
//	printf("digite 6 valores:\n");
	for (i = 1 ; i<=6; i++ ){
	scanf("%lf", &valores);	
	
		if(valores > 0.0){
			count++;
			QtoValores=QtoValores + valores;
		}
		
	}
	
	media = QtoValores/(double)count;
	printf("%d valores positivos\n", count);
	printf("%.1lf",media);
	
	
	
//	system("pause");
	return 0;
}

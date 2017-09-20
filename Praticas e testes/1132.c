#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int X,Y,i,aux, COUNT=0;
	
	scanf("%d %d", &X,&Y);
	
	if(X>Y){
	aux = Y;
	Y = X;
	X = aux;
	}
	
	for(i=X;i<=Y;i++){
		if(i%13 !=0){
			COUNT+=i;
		}	
	}

	printf("%d\n",COUNT);
	
system("pause");
return 0;
}

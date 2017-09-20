#include<stdio.h>
#include<stdlib.h>


int main(){
	int X,Y,caso,i;
	printf("qunatas comparações voce ira fazer: \n");
    scanf("%d",&caso);
    if(caso>0 && caso<=10000){
	
	for(i=1;i<=caso;i++){
		scanf("%d", &X);
	
		if(X%2==0 && X>0){
			printf("EVEN POSITIVE\n");
		}
			else if(X%2==1 && X>0){
			printf("ODD POSITIVE\n");
	    	}
	    	else if(X%2==0 && X<0){
	    		printf("EVEN NEGATIVE\n");
			}
			else if(X%2!=0 && X<0){
				printf("ODD NEGATIVE\n");
			}
			else if(X==0){
				printf("NULL\n");
			}
	}
}
		
	return 0;		
	}
	 



#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x,i;
	
	while(scanf("%d", &x) && x!=0){
		printf("1");
		for(i=2;i<=x;i++){
			printf(" %d", i);
		}
		printf("\n");
	}
	return 0;
}

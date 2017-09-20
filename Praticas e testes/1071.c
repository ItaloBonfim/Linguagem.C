#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x,y,count=0,i;
	
	printf("digite 2 valores:\n");
	scanf("%d %d", &x, &y);
	
	if(x>y){
	for(i=x-1; i>y;i--){
		if(i%2 == 1 || i%2 == -1){
			
			count = count + i;
         }

		}
		printf("%d\n",count);
    }
		else if(x<y){
			for(i=x+1; i<y; i++){
				if(i%2==1 || i%2 == -1){
				count = count + i;}
			}
			printf("%d\n",count);	
		}
		else if(x == y){
			printf("%d\n",count);
		}

//	printf("%d\n",count);
	system("pause");
	return 0;
}

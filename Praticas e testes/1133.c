#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int X,Y,i;
	
//	printf("Digite dois valores: \n");
	scanf("%d %d", &X,&Y);
	
	if(X<Y){
//	system("cls");
		for(i=X;i<Y;i++){
			
			if(i!=X &&  i%5==2 || i!=X && i%5==3) 
			
			printf("%d\n",i);
			
		}
		
    }else if(X>Y){
    //	system("cls");
    	for(i=Y;i<X;i++){
    		if(i!=Y &&  i%5==2 || i!=Y && i%5==3) 
	
		printf("%d\n",i);
     	}
 
    }
    
	system("pause");
	return 0;
}

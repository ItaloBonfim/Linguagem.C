#include<stdio.h>
#include<stdlib.h>

int main(){
  int Xy1,pos=0,neg=0,par=0,imp=0;
  int VR;
  
   for(Xy1=0;Xy1<=4;Xy1++){
  	scanf("%d",&VR);
  	
    if(VR > 0){
  		pos = pos + 1;	
	  }
	  if(VR < 0){
	  	neg = neg + 1 ;
	  }
	    if(VR%2==0){
	    	par = par +	1;
		}
	    else{
	    	imp++;
		}
  	
  }	
  	printf("%d valor(es) par(es)\n", par);
  	printf("%d valor(es) impar(es)\n", imp);
  	printf("%d valor(es) positivo(s)\n", pos);
  	printf("%d valor(es) negativo(s)\n", neg);

	return 0;
}

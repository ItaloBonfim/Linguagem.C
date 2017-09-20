#include<stdio.h>
#include <stdlib.h>
#include <math.h>

//A é a unica variavel em que o valor não pode ser igual a zero as demais sim(

int main (){

float A,B,C, RA1,RA2,DELTA;

scanf("%f %f %f", &A, &B, &C);

	DELTA=(pow(B,2)-(4*A*C));
   if(A==0){
   printf("Impossivel calcular\n");}
   
   else{
    if(DELTA>=0){
   	RA1 = (-B+ (sqrt(DELTA)))/(2*A);
	RA2 = (-B- (sqrt(DELTA)))/(2*A);
	printf("%.5f\n", RA1);
	printf("%.5f\n", RA2);}
}
system("pause");
return 0;	
}

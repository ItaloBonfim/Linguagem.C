#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	double RA1,RA2;
	double B,A,C,Cdelta;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	
	Cdelta = B*B - 4*A*C;
	RA1 = (-B+ sqrt(Cdelta))/(2*A);
	RA2 = (-B- sqrt(Cdelta))/(2*A);
	
	if(Cdelta == 0 && A == 0) {
	
	printf("Impossivel calcular\n");
}
	else{
	printf("R1 %.5lf \n",RA1);
	printf("R2 %.5lf \n",RA2);
}
	
	
	
	
	
	system("pause");
	return 0;
}

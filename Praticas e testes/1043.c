#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double A,B,C,perimetro,area;
	
	scanf("%lf %lf %lf", &A,&B,&C);
	
	perimetro = A+B+C;
	area = ((A+B)* C)/ 2;
	
//	printf("perimetro %.1f \n  area %.1f", perimetro, area);
	  
   if ( (B - C < A && B + C > A ) && (A - C < B && A + C > B ) && (A - B < C && A + B > C ) ){
		printf("Perimetro = %.1lf\n", perimetro);
		}
	
	else{
		printf("Area = %.1lf\n", area);
	}
	
	 //system("pause");
	 return 0;
	
}

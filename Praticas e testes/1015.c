#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	double X1, Y1, result;
	double X2, Y2;
	
	scanf("%lf %lf", &X1, &Y1);
	scanf("%lf %lf", &X2, &Y2);
		
	result = sqrt(pow((X2-X1),2) + pow((Y2-Y1),2));
		
	printf("%.4lf\n",result );
	
	system("pause");
	return 0;
}

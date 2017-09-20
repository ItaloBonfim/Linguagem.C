#include <stdio.h>
#include <stdlib.h>

int main(){
	
int valorX,cedulas[7]={100, 50, 20, 10, 5, 2, 1};
int aux100, aux50, aux20, aux10, aux5, aux2, aux1;

scanf("%d", &valorX);

aux100 = valorX/cedulas[0];
valorX = valorX - aux100 * 100;

aux50 = valorX/cedulas[1];
valorX = valorX - aux50 * 50;

aux20 = valorX/cedulas[2];
valorX = valorX - aux20 * 20;

aux10 = valorX/cedulas[3];
valorX = valorX - aux10 * 10;

aux5 = valorX/cedulas[4];
valorX = valorX - aux5 * 5;

aux2 = valorX/cedulas[5];
valorX = valorX - aux2 * 2;




printf("%d\n",aux100);
printf("%d\n",aux50);
printf("%d\n",aux20);
printf("%d\n",aux10);
printf("%d\n",aux5);






	
system("pause");
return 0;

}

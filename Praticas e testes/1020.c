#include <stdio.h>
#include <stdlib.h>

int main(){
	int X,Ano,Mes,Dias;
	
	//printf("digite o valor da idade\n");
	scanf("%d",&X);
	
	/* 1 Ano = 365
	   1 Mês = 30
	   Dias são = 365
	   */
	
	Ano = X/365;
	Mes = X%365/30;
	Dias= X%365%30;
	
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",Ano,Mes,Dias);
	
	system("pause");
	return 0;
}

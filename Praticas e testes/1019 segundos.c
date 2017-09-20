#include <stdio.h>
#include <stdlib.h>

int main (){
	int N, hora,minuto,segundo;
	printf("digite o valor das horas;\n");
	scanf("%d", &N);
	
	/*1 hora = 60 minutos
      1 minuto = 60 segundos
      1 hora = 3600 segundos (60 x 60)*/
      
      hora = N/3600;
      minuto = (N%3600)/60;
      segundo = (N%3600)%60;
      
      printf("%d:%d:%d", hora,minuto,segundo);
      
	
	
	system("pause");
	return 0;
}

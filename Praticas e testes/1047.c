#include <stdio.h>
#include <stdlib.h>

int main(){
	int H_inicial, H_final, HR,MR, M_inicial, M_final;
	
	printf("Digite o valor da Hora inicial e final:\n");
	scanf("%d %d", &H_inicial, &H_final);
	
	printf("Digite o Mim inicial e Min final:\n");
	scanf("%d %d", &M_inicial,&M_final);
	
	HR = (H_inicial+H_final)/24;
	
	printf("%d",HR);
	
	
	
	
	system("pause");
	return 0;
}

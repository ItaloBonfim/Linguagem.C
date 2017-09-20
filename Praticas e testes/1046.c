#include <stdio.h>
#include <stdlib.h>

int main(){
	// Leia a hora inicial e a hora final de um jogo; H_inicial e H_final
	//calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro:
	// tendo uma duração mínima de 1 hora e tendo uma duração maxima de 24 horas; total = 24
	int H_inicial, H_final,total=24;

	
	//printf("digite o valor da H inicial e H final:\n");
	scanf("%d %d", &H_inicial, &H_final);
	
	if(H_inicial<H_final){
		printf("O JOGO DUROU %d HORA(S)\n",H_final - H_inicial);
			
		}
		else if (H_inicial >H_final){
			printf("O JOGO DUROU %d HORA(S)\n",24- H_inicial + H_final);
		}
		else if(H_inicial == H_inicial){
			printf("O JOGO DUROU %d HORA(S)\n", total);	
		}
			return 0;
	}
	

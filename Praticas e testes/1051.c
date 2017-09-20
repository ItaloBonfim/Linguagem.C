#include <stdio.h>
#include <stdlib.h>

/*
se o salário for R$ 3002.00, a taxa que incide é de 8% apenas sobre R$ 1000.00, pois a faixa de salário que fica de R$ 0.00 até R$ 2000.00 é isenta de Imposto de
Renda. No exemplo fornecido (abaixo), a taxa é de 8% sobre R$ 1000.00 + 18% sobre R$ 2.00, o que resulta em R$ 80.36 no total.
O valor deve ser impresso com duas casas decimais.
*/

int main(){
	
	float salario, aux;
	
	//printf("Digite o valor do salario:\n");
	scanf("%f", &salario);
	
	if(salario >=0 && salario <= 2000.00){
		printf("Isento\n");}
		
		else if(salario >= 2000.01 && salario <= 3000.00){
			aux = (salario - 2000.00)*0.08;
			printf("R$ %.2f\n", aux);}
			
			else if(salario > 3000.01 && salario <= 4500.00){
				aux = 0.18*(salario-3000) + (0.08*1000);
				
				printf("R$ %.2f\n", aux);}
				
				else if(salario >=4500.01){
					aux = 0.28*(salario-4500) + (0.08*1000) + (0.18*1500);
					
					printf("R$ %.2f\n", aux);
				}
			
		
	system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float salario, nSalario;
	printf("Digite um salario: \n");
	scanf("%f", &salario);
	
	if(salario>=0 && salario <=400.00){

	nSalario = salario*0.15;
	printf("Novo salario: %.2f\n", nSalario + salario);
	printf("Reajuste ganho: %.2f\n",nSalario);
	printf("Em percentual: %g %%\n",0.15*100);
     }
     else if(salario>=400.01 && salario<=800.00){
	nSalario = salario*0.12;
	
	printf("Novo salario: %.2f\n", nSalario + salario);
	printf("Reajuste ganho: %.2f\n",nSalario);
	printf("Em percentual: %g %%\n",0.12*100);
	 }
	 else if(salario>=800.01 && salario<=1200.00){
	nSalario = salario*0.1;
	
	printf("Novo salario: %.2f\n", nSalario + salario);
	printf("Reajuste ganho: %.2f\n",nSalario);
	printf("Em percentual: %g %%\n",0.1*100);
	 }
	 else if(salario>=1200.01 && salario <=2000.00){
	nSalario = salario*0.07;
	
	printf("Novo salario: %.2f\n", nSalario + salario);
	printf("Reajuste ganho: %.2f\n",nSalario);
	printf("Em percentual: %g %%\n",0.07*100);
	 }
	 
	 else if(salario>=2000.01){
 	nSalario = salario*0.04;
 	
	printf("Novo salario: %.2f\n", nSalario + salario);
	printf("Reajuste ganho: %.2f\n",nSalario);
	printf("Em percentual: %g %%\n",0.04*100);
    }
	
	
	return 0;
}

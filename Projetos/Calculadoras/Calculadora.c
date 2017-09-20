#include<stdio.h>
#include<stdlib.h>
//calculadora utizando estruturas e ponteiros
//italo Bonfim nascimento de Souza
//Ra:2216108517
//2°semestre de Sistemas de Informaçao.

void valor_inicial(float *x);
void somar_adicao(float *x);
void subtrair_valor(float *x);
void multiplica_valor(float *x);
void dividir_valor(float *x);
  

int main(){
float total=0;
int esc;

valor_inicial(&total);


while(esc !=05){
Menu_de_escolha();	
scanf("%i",&esc);
switch(esc){
	case 1:
	somar_adicao(&total);
	break;
	
	case 2:
	subtrair_valor(&total);
	break;
	
	case 3:
	multiplica_valor(&total);
	break;
	
	case 4:
	dividir_valor(&total);
	break;
	
	case 5:
		printf("vlw falou \n");
		break;
		
		default:
		mensegem_de_erro();
		break;
		
}



}




system("pause");
return 0;
}
	
void valor_inicial(float *x){
	float Usu_esc;
	printf("Digite um valor:\n");
	scanf("%f",&Usu_esc);
	*x=Usu_esc;
	system("pause");	
}

void Menu_de_escolha(void){	
printf("\t\t Menu de operacao \n");
printf("\t\t1-adicao \n");
printf("\t\t2-subtracao \n");
printf("\t\t3-multiplicao \n");
printf("\t\t4-divisao \n");
printf("\t\t5-sair \n");

printf("faca uma escolha:\n");

}
	
void somar_adicao(float *x){
	float Uso_esc;
	printf("Digite o valor a ser somado:\n");
	scanf("%f",&Uso_esc);
	*x=*x+Uso_esc;
	printf("resultado:\n %.1f \n",*x);
	system("pause");
	system("cls");

}
	
void subtrair_valor(float *x){
	float Uso_esc;
	printf("digite o valor a ser subtraido:\n");
	scanf("%f",&Uso_esc);
	*x=(*x-Uso_esc);
	printf("resultado:\n %.1f \n",*x);
	system("pause");
	system("cls");

}
	
void multiplica_valor(float *x){
        float Uso_esc;
	printf("Digite o valor a multiplicar: \n");
	scanf("%f",&Uso_esc);
	*x=(*x*Uso_esc);
	printf("resultado: %.1f \n",*x);
	system("pause");
	system("cls");

}

void dividir_valor(float *x){
	float Uso_esc;
	printf("Digite o valor a dividir: \n");
	scanf("%f",&Uso_esc);
	*x=*x / Uso_esc;
	printf("resultado: \n %.3f \n",*x);
	system("pause");
	system("cls");

	
	
}
	
void mensegem_de_erro(void){
	printf("\tValor incorreto,favor digite novamente.\n\n");
	system("pause");
	system("cls");
	}

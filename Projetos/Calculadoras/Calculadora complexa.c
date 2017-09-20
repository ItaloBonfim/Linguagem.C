#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int *x,*y,*z;

void menu (void);

void soma(int *x);
void subtracao(int *x);
void multiplicacao(double *y);
void divisao(double *y);
void C_area(double *y);
void matrizes(void);
void vetores(void);
void estrelas (void);
void limpar(void);


int main (void){
	int opcao=0,total=0,vet,mat; // opcao controla o while e o switch case atraves do scanf 
	double mtc_dv; // multiplicação e divisão 
	setlocale(LC_ALL, "portuguese");

	printf(" \tBem Vindo ao Mundo da Programação!!\n");

	system("pause");
	system("cls");
	
	while(opcao !=8){
	
	menu();
	scanf("%d",&opcao);


	switch (opcao){
	 case 1:
	 	soma(&total);
	 	break;
	 	case 2:
	 		subtracao(&total);
	 		break;
	 		case 3:
	 			multiplicacao(&mtc_dv);
	 			break;
	 				case 4:
	 					divisao(&mtc_dv);
	 					break;
	 					case 5:
	 						C_area(&mtc_dv);
	 						break;
	 						case 6:
	 							matrizes();
	 							break;
	 							case 7:
	 								vetores();
	 								break;
	 								case 8:
	 									printf("\n");
	 									printf("\tFim do programa\n\n");
	 									break;
	 									case 9:
	 										limpar();
	 										break;

	 	
	 	
	 }
	
}
	
	system("pause");
	return 0;
}

 void menu (void){
setlocale(LC_ALL, "portuguese");

printf("\t***Menu***\n\n");
printf("\tescolha qual operação deseja realizar\n\n");
printf("\toperacão de soma\n");
printf("\toperacão de subtração\n");
printf("\toperacão de multiplicacão\n");
printf("\toperação de divisão \n\n");
printf("\tcalcurar area\n");
printf("\tmatrizes\n");
printf("\tvetores\n\n");
printf("\t sair do programa\n");
printf("\t limpar \n\n");
printf("Qual opção?\n\n");

//system("cls");
}
void soma (int *x){
}
void subtracao (int *x){
}
void multiplicacao(double *y){
}
void divisao (double *y){
}
void C_area(double *y){
}
void matrizes(void){
}
void vetores(void){
}
void estrelas(void){
	int L,C,qto;
	
	scanf("%d", &qto);
	
	switch(qto){
	//	case 1:
			
	}
	
	
}
void limpar(void){
	char resposta[3];
	
	setlocale(LC_ALL, "portuguese");
	
	
	printf("Deseja mesmo limpar a tela? \n");
	printf("sim \n");
	printf("não \n\n");
	
	scanf("%s",&resposta);
	
	
	system("pause");

}


#include <stdio.h>
#include <stdlib.h>


int *x,*z;
float *y;
void menu (void);
void soma (int *x);
void subtracao(int *x);
void multiplicacao(float *y);
void divisao (float *y);



int main (void){
	printf("\tBem Vindo\n");
	system("pause");
	printf("\tVamos Comecar\n");
	system("cls");
int total=0,opcao=0;
float P_divisao_multiplicacao;
//menu();


while(opcao !=5){
	menu();	
	scanf("%i",&opcao);
	system("cls");
	
	switch (opcao){
		
	case 1:
	    soma (&total);
	    break;
	    case 2:
	    	subtracao(&total);
	    	break;
	    	case 3:
	    		multiplicacao(&P_divisao_multiplicacao);
	    		break;
	    		case 4:
	    			divisao(&P_divisao_multiplicacao);
	    			break;
	    				case 5:
	    				system("cls");
	    				printf("thanks for usain my survices \n");
	    				break;
	    				
					
					
					default:
	    				printf("\tValor de opcao incorreto\n");
	    				system("pause");
						system("cls");

	
	}
     }
     
    system("Pause");
	return 0;
      }


void menu (void){
	printf("\t Menu de Operacoes \n");
	printf("1-adicao(+)\n");
	printf("2-subtracao(-)\n");
	printf("3-multiplicacao(*)\n");
	printf("4-divisao(/)\n\n");
	printf("presione 5 para sair do programa \n ");
	
	printf("faca uma escolha \n");
}


void soma (int *x){
	int Nu1,Nu2,r;
	printf("Digite dois Valores \n");
	scanf("%i %i",&Nu1,&Nu2);
	r=Nu1+Nu2;
	
	printf("%i\n",r);
	
}
void subtracao(int *x){
	int Nu1,Nu2,r;
	printf("Digite dois Valores \n");
	scanf("%i %i",&Nu1,&Nu2);
	r=Nu1-Nu2;
	
	printf("%i\n",r);
	
}
void multiplicacao(float *y){
	float Nu1,Nu2,r;
	printf("Digite dois Valores \n");
	scanf("%f %f",&Nu1,&Nu2);
	r=Nu1*Nu2;
	
	printf("%.3f\n",r);
	
	
	
}
void divisao (float *y){
	float Nu1,Nu2,r;
	printf("Digite dois Valores \n");
	scanf("%f %f",&Nu1,&Nu2);
	r=Nu1/Nu2;
	
	printf("%.3f\n",r);
	
}



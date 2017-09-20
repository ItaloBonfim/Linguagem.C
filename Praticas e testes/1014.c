#include <stdio.h>
#include <stdlib.h>

//programa para senhas com numeros uri 1014

int main(){
	int senha=2002,X;
	
	while(X!=senha){
		
		scanf("%d",&X);
		
		if(senha==X){
			printf("Acesso Permitido\n");
			}
			else{
				printf("Senha Invalida\n");
		}
	}	
system("pause");
return 0;
}

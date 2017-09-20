/* Italo Bonfim Nascimento de Souza 2216108517
    Italo Lima 2216109648
    Lucas Santos de Souza 2216105510
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linhas 50
#define colunas 6
#define max 60

int i,j; //usar apenas para loopings do SorteioPrincipal

int PreencherMatriz();
int OrganizarLinhas(int SorteioPrincipal[linhas][colunas]);
int busca[60]; // usado para realizar a busca de numeros repetidos

int main(){

int MegaSena[6][10];
char Pergunta[4];



do{
        system("cls");

        printf("\t\t\t\t Mega Sena \n\n");

         for(i=0;i<6;i++){
            for(j=0;j<10;j++){
                MegaSena[i][j] = i * 10 + j+1;

                printf("\t%.2d  ",MegaSena[i][j]);
            }
            printf("\n\n");
         }

 puts("Deseja Continuar?\nDigite (sim) para continuar ou (sair) para fechar o Programa");
gets(Pergunta);

if(strcmp(Pergunta,"sim")==0){
	   PreencherMatriz();
	     busca_repete();
              }
       else if (strcmp(Pergunta,"sair")==0){
          puts("ate o Proximo jogo");
              }
           else
             puts("Digite Sua resposta corretamente");
               getch("\n");


}while(strcmp(Pergunta,"sair"));
}


 int PreencherMatriz(){
 int pg;
 int SorteioPrincipal[linhas][colunas];
 int count=1,x=0;

	   srand(time(NULL));

	   //gerar o Sorteio
	   for(i=0;i<linhas;i++){
	   	for(j=0;j<colunas;j++){
	   		SorteioPrincipal[i][j] = 1 + rand()%max;
             }
         }



//remover repetiçoes de cada linha do sorteio, por em quanto consigo apenas zerar os numeros repetidos

          for(i=0;i<linhas;i++){
            for(j=0;j<colunas;j++){
                for(x=j+1;x<colunas;x++){
                   if(SorteioPrincipal[i][j] == SorteioPrincipal[i][x]){
                        SorteioPrincipal[i][x] = 1 + rand()%max;
                        i = 0;
                        j = 0;
                        x = 0;

                  }
                }
              }
            }


         count=1;
         for(i=0;i<linhas;i++){
         	for(j=0;j<colunas;j++){
         			pg=SorteioPrincipal[i][j]; //CONTAR NUMEROS REPETIDOS
                     busca[pg]+=1;
			 }
		 }

             OrganizarLinhas(SorteioPrincipal); //chamar a função para organizar as linhas

}


int OrganizarLinhas(int SorteioPrincipal[linhas][colunas]){

        int MatrizAux[linhas][colunas];
        int x,temp=0;

       //igualando o SorteioPrincipal com uma matriz auxiliar para facilitar a ordenção...
        for(i=0;i<linhas;i++){
        	for(j=0;j<colunas;j++){
        		MatrizAux[i][j] = SorteioPrincipal[i][j];
			}
		}


//ordenando as linhas da matriz de forma crescente...

      for(i=0;i<linhas;i++){
          for(j=colunas-1;j>=0;j--){
             for(x=j-1;x>=0;x--){

                if(MatrizAux[i][j] < MatrizAux[i][x]){
                   temp = MatrizAux[i][j];
                     MatrizAux[i][j] = MatrizAux[i][x];
                        MatrizAux[i][x] = temp;
              }
           }
         }
      }


      //printar a matriz ordenada
      int count=1;
      for(i=0;i<linhas;i++){
      	printf("%.2d Sorteio: ",count++);
      	for(j=0;j<colunas;j++){
      		SorteioPrincipal[i][j] = MatrizAux[i][j];
      		printf("%.2d ", SorteioPrincipal[i][j]);
		  }
		  printf("\n");
	  }
	  system("pause");
}

int busca_repete(){


	 printf("\n");
	printf("Numeros Repetidos\n");
	for(j=1;j<=max;j++){
		printf("Numeros %.2d = %.2d vezes\n",j,busca[j]);

	}
}

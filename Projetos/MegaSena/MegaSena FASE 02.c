// Versão principal da Mega Sena


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int ShowMatriz();
int UpdateMatriz();
int check(); //função para checagem do vetor;

int MegaSena[6][10], Numero[6];
int i,j; //loopings;

int main(){

    setlocale(LC_ALL, "portuguese");

int x,count=1;

     ShowMatriz();

     for(x=0;x<6;x++){
        printf("Digite o valor %d: ", count++);
        scanf("%d", &Numero[x]);

       // check();
        UpdateMatriz();
     }

     printf("\n\nOs mumeros digitados forão: ");
        for(x=0;x<6;x++){
            printf("\t%.2d  ", Numero[x]);
        }

        printf("\n\n");


getch("\n");
return 0;
}

int ShowMatriz(){

     for(i=0;i<6;i++){
        for(j=0;j<10;j++){
            MegaSena[i][j] = i * 10 + j+1;

            printf("\t%.2d  ", MegaSena[i][j]);
        }
        printf("\n\n");
     }


system("pause");//pode ser removido;
}

int UpdateMatriz(){

int x;

     for(i=0;i<6;i++){
        for(j=0;j<10;j++){
            for(x=0;x<6;x++){

                if(MegaSena[i][j] == Numero[x]){
                    MegaSena[i][j] = 0;
                }
            }
        }
     }

     system("cls");


      for(i=0;i<6;i++){
        for(j=0;j<10;j++){
           printf("\t%.2d  ", MegaSena[i][j]);
        }
        printf("\n\n");
      }

}

int check(){


}


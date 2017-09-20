#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int Preenche();


int MegaSena[6][10],Dig[6];
int i,j;


int main(){

    int x;

       Preenche();
       FuncaoPrincipal();

       system("cls");

       for(i=0;i<6;i++){
          for(j=0;j<10;j++){
            printf(" \t%.2d ", MegaSena[i][j]);
            }
       printf("\n");
       }

       for(x=0;x<6;x++){
           printf("%.2d ", Dig[x]);
       }
}

int FuncaoPrincipal(){

  int x,y;

              for(i=0;i<6;i++){
                for(j=0;j<10;j++){
                    printf(" \t%.2d", MegaSena[i][j]);
              }
            printf("\n");
           }

              for(x=0;x<6;x++){
                scanf("%d", &Dig[x]);
              }

        for(i=0;i<6;i++){
          for(j=0;j<10;j++){
             for(x=0;x<6;x++){

                if(MegaSena[i][j] == Dig[x]){
                    MegaSena[i][j] = 0;
               }
             }
           }
         }

}


int Preenche(){

      for(i=0;i<6;i++){
         for(j=0;j<10;j++){
             MegaSena[i][j] = i * 10 + j+1;
          }
      }
}

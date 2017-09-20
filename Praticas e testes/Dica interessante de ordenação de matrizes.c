#include <stdio.h>
#include <stdlib.h>
#define max 100
main()
{
      long int M, N, var1, var2, i, j, matriz[max][max], matriz_aux[max][max];;
      char opcao;
      /*As variáveis var1, var2 sao usadas nos laços e em artificios de troca*/
   
   /*Artificio para repetir o programa.*/       
   while(opcao!='x')
   {   
      /*Cabecalho do programa*/               
      printf("       %c----------------------------------------------------------------%c\n",218,191);
      printf("       | Programa que l%c valores inteiros de uma matriz, e ordena esses |\n",136);
      printf("       | elementos primeiro pelas linhas e depois pelas colunas.        |\n");
      printf("       %c----------------------------------------------------------------%c\n\n",192,217);
      
      /*Menu de opcoes*/ 
      printf("                                  %c--------%c\n",201,187);
      printf("                                  |  MENU  |\n");
      printf("                             %c----%c--------%c----%c\n",218,200,188,191);
      printf("                             |      (L)er       |\n");
      printf("                             |------------------|\n");
      printf("                             |    (O)rdenar     |\n");       
      printf("                             |------------------|\n");
      printf("                             |      Fechar   (x)|\n");       
      printf("                             %c------------------%c\n",192,217);
      
      /*Lendo a opcao do menu*/   
      printf("\n\n    Escolha uma opcao: ");
      scanf("%c", &opcao);

      /*Menu de opcoes*/
      switch(opcao)
      {   
        case 'L':
        case 'l':
     
           /*Lendo o numero de linhas da matriz.*/
           N=0;
           while(N<=0){
              printf("\nDigite o numero de linhas da matriz: ");
              scanf("%d",&N);
              if(N<=0)
                 printf(" \a\nOpcao invalida.\n");
           }

           /*Lendo o numero de colunas da matriz.*/
           M=0;
           while(M<=0){
              printf("\nDigite o numero de colunas da matriz: ");
              scanf("%d",&M);
              if(M<=0)
                 printf(" \a\nOpcao invalida.\n");
           }

           /*Lendo todos os elementos da matriz.*/
           for(i=0; i<N; i++){
              printf("\nDigite os numeros da %d linha: \n", i+1);
              for(j=0; j<M; j++)
                 scanf("%d", &matriz[i][j]);
           }
           
           /*Igualando os elementos de uma matriz a outra para facilitar o processo 
           de ordenanao posteriormente.*/
           for(i=0; i<N; i++){
              for(j=0; j<M; j++)
                 matriz_aux[i][j]= matriz[i][j];
           }
        printf("\nConcluido.\nPressione qualquer tecla para continuar...");
        getch();
        system("cls");
        break; 
        
        case 'O':
        case 'o':     
           
           /*Ordenando os elementos da matriz pelas linhas.*/
           for(i=0; i<N; i++){
              for(j= M-1; j>=0; j--){
                 for(var1= j-1; var1>=0; var1--){
                    if(matriz[i][j]< matriz[i][var1]){
                       var2= matriz[i][j];
                       matriz[i][j]= matriz[i][var1];
                       matriz[i][var1]=var2;
                    }
                 }
              }
           }   
           
           /*Imprimindo a matriz.*/   
           printf("\nMatriz ordenada pelas linhas a partir da original.");
           for(i=0; i<N; i++){
               printf("\n\nLinha %d:\n", i+1);
               for(j=0; j<M; j++)
                   printf("%d ", matriz[i][j]);
           }
           
           /*Ordenando os elementos da matriz pelas colunas.*/
              for(j=M-1; j>=0; j--){
                 for(i= N-1; i>=0; i--){
                     for(var1= i-1; var1>=0; var1--){
                         if(matriz_aux[i][j]< matriz_aux[var1][j]){
                            var2= matriz_aux[i][j];
                            matriz_aux[i][j]= matriz_aux[var1][j];
                            matriz_aux[var1][j]=var2;
                         }
                     }
                 }
              }
            printf("\n");     
           
           /*Imprimindo a matriz.*/   
           printf("\nMatriz ordenada pelas colunas a partir da original.\n");
           for(j=0; j<M; j++){
               printf("\ncoluna %d:\n", j+1);
                  for(i=0; i<N; i++)
                     printf("%d\n", matriz_aux[i][j]);
            }
            printf("\nConcluido.\nPressione qualquer tecla para continuar...");
            
        getch();
        system("cls");
        break;    
        
        case 'X':
        case 'x':
           /*Artificio para fechar o programa*/
           opcao='x';

        default:
           system("cls");  
      }     
   }
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main (){
setlocale(LC_ALL,"portuguese");

int controle;

         while(controle != 5){
             puts("");

         puts("\t\t\t1 - Regras do jogo");
         puts("\t\t\t2 - Jogar");
         puts("\t\t\t3 - Sortear numeros");
         puts("\t\t\t4 - Opções de jogo");
         puts("\t\t\t5 - Sair do Jogo");

        puts("\nDigite o numero correspondente a função que deseja acessar:");
         scanf("%d", &controle);

         if(controle > 6 || controle < 1){
            puts("numero invalido");
         }


            switch(controle){

        case 1:
            puts("As regras da MegaSena são: ");
            system("cls");

            //confererir as regras de MegaSena



            break;

               case 2:
                   puts("\t Boa Sorte!!\n ");
                   getch("\n");
                   system("cls");

                   //aqui entra o for do update da matriz juntamente com o restante do jogo

                   break;

                    case 3:
                        puts("Deseja Fazer o sorteio?");
                        getch("\n");
                        system("cls");

                        break;

                        //fazer a pergunta para o usuario de forma que a resposta seja sim ou não

                        case 4:
                            puts("Opções de jogo");
                            system("cls");

                            break;

                            //fazer o menu de opçoes de jogo

                              case 5:
                                  system("cls");
                                  puts("Obrigado por jogar e até a proxima! ");

                                  break;

            }
         }

}

#include <stdio.h>
#include <stdlib.h>


int main(){

int valor ,troco, cem , cinquenta , vinte , dez , cinco , dois , um;
 scanf("%d",&valor);
  troco = valor;

   cem = troco / 100;
    troco = troco - (cem *100);

 
   cinquenta = troco / 50;
 troco = troco - (cinquenta * 50);

  vinte = troco / 20;
   troco = troco - (vinte * 20);

    dez = troco /10;
	 troco = troco -(dez * 10);
	 
 cinco = troco / 5;
  troco = troco - (cinco * 5);

   dois = troco / 2;
    troco = troco - (dois * 2); 


printf("%d\n",valor);
 printf("%d nota(s) de 100\n", cem);
printf("%d nota(s) de 50\n",cinquenta);
 printf("%d nota(s) de 20\n", vinte);
  printf("%d nota(s) de 10\n", dez); 
  printf("%d nota(s) de 5\n", cinco);
printf("%d nota(s) de 2\n", dois); 
printf("%d nota(s) de 1\n", troco);
return 0;
}



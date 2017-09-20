#include <stdio.h>
#include <stdlib.h>

int main()
  {
      int N=0,a=0,b=0;
      int X[1000];
      int i=0;
      scanf("%d", &N);
      for (i=0; i<N; i++)
      {
        scanf("%d", &X[i]);
      }
      i=0;
      while(i < N)
      {
        if (X[i]>=10 && X[i]<=20)
          {
            a++;}
            else
              {
                  b++;
              }
          i++;}

      printf("%d in\n", a);
      printf("%d out\n", b);
      return 0;
  }

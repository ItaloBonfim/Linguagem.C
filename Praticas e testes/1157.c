#include <stdio.h>
#include <stdlib.h>

void Matriz(int n)
{
    int temp, nInicio, l, c;

        if (n == 1)
        {
            printf("%d\n", n);
        }
        else
        {
            nInicio = 1;
            temp = nInicio;
            for (l = 0; l < n; l++)
            {
                for (c = 0; c < n; c++)
                {
                    printf("%d", temp);
                    temp *= 2;
                    if (c < n)
                        printf(" ");
                }
                nInicio *= 2;
                temp = nInicio;
                printf("\n");
            }
        }
}

int main()
{
    int n = 1;
    while (n != 0)
    {
        scanf("%d", &n);
        Matriz(n);
        printf("\n");
    }

    return 0;
}

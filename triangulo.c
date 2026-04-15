#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    if (argc != 2)
    {
        printf("Você precisa digitar um número inteiro positivo.\n");
        return 1;
    }

    int n = atoi(argv[1]);

    if (n <= 0)
    {
        printf("Você precisa digitar um número inteiro positivo.\n");
        return 1;
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("Criado por Pietra Oliveira Narciso Santos");
}
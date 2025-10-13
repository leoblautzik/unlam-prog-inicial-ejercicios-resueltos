#include <stdbool.h>
#include <stdio.h>

bool es_primo(int);
int main()
{
    int num, i, contador = 0;
    printf("Ingrese primos menores que cual: ");
    scanf("%d", &num);
    for (i = 2; i < num; i++)
    {
        if (es_primo(i))
        {
            printf("%d, ", i);
            contador++;
        }
        if (contador % 10 == 0 && contador != 0)
        {
            printf("\n");
            contador = 0;
        }
    }

    return 0;
}

bool es_primo(int x)
{
    int i = 2;
    while (x % i != 0 && i < x)
    {
        i++;
    }
    return i == x;
}

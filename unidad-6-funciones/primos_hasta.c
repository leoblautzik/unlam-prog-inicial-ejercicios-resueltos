#include <stdio.h>

#include <stdbool.h>

bool es_primo(int);
int main()
{
    int n, i;
    printf("Ingrese primos menores que cual: ");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (es_primo(i))
        {
            printf("%d", i);
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

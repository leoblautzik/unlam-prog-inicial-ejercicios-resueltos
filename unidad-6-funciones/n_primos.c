#include <stdbool.h>
#include <stdio.h>

bool es_primo(int);
int main()
{
    int num, i = 2, contador = 0;
    printf("Ingrese la cantidad de numeros primos: ");
    scanf("%d", &num);
    while (contador < num)
    {
        if (es_primo(i))
        {
            printf("%d\n", i);
            contador++;
        }
        i++;
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

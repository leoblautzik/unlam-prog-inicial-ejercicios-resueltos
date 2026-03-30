#include <stdbool.h>
#include <stdio.h>

int es_el_doble(int);
bool es_primo(int);

int main()
{
    int n;
    printf("Ingrese un entero: ");
    scanf("%d", &n);

    printf("El doble del entero ingresado es: %d\n", es_el_doble(n));
    if (es_primo(n))
    {
        printf("Es primo");
    }
    else
    {
        printf("No es primo");
    }

    return 0;
}

int es_el_doble(int x)
{
    return x * 2;
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

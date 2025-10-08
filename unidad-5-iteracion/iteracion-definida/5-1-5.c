#include <stdio.h>

/**
 * Confeccionar un programa para calcular la suma de los primeros N números naturales.
 * El valor de N lo solicita por teclado el programa.
 */
int suma(int n)
{
    int s = 0;
    if (n == 0)
        s = 0;
    else
        s = n + suma(n - 1);
    return s;
}

int main()
{
    int i, sumatoria = 0, n;
    printf("Ingrese hasta que numero natural quiere sumar: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sumatoria += i;
    }

    printf("La sumatoria de los primeros %d naturales es: %d\n", n, sumatoria);
    printf("La sumatoria de los primeros %d naturales es: %d\n", n, n * (n + 1) / 2);
    printf("La sumatoria de los primeros %d naturales es: %d\n", n, suma(n));

    return 0;
}

#include <stdio.h>

/**
 * Confeccionar un programa para calcular la suma de los primeros N números naturales.
 * El valor de N lo solicita por teclado el programa.
 */

int main()
{
    int i, suma = 0, n;
    printf("Ingrese hasta que numero natural quiere sumar: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        suma += i;
    }

    printf("La sumatoria de los primeros %d naturales es: %d", n, suma);

    return 0;
}

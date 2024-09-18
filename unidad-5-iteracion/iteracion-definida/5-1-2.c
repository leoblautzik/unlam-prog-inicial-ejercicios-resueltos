#include <stdio.h>

/**
 * Confeccionar un programa para calcular el valor de la siguiente suma:
 * 100 + 95 + 90 + ... + 50.
 */
int main()
{
    int i;
    int suma = 0;

    for (i = 100; i >= 50; i -= 5)
    {
        suma += i;
        printf("%d\n", suma);
    }

    return 0;
}

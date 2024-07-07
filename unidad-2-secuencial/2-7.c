/*
 * Se ingresa un número entero de 3 cifras.
 * Descomponerlo en unidad, decena y centena.
 */

#include <stdio.h>

int main()
{
    int n, u, d, c;

    printf("Ingrese un entero de tres cifras: ");
    scanf("%d", &n);

    u = n % 10;
    c = n / 100;
    d = (n / 10) % 10;

    printf("Unidad: %d, Decena: %d, Centena: %d\n", u, d, c);

    return 0;
}

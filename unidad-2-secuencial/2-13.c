/*Confeccionar un programa que solicite el ingreso de un número entero positivo
 * de 4 cifras y pueda calcular e informar la suma de sus dígitos
 * hasta llegar a una sola cifra. Ej:2561 → 5.
 */

#include <stdio.h>

int main()
{
    int numero, sumacifras, u, d, c, um;
    printf("Ingrese un entero positivo de 4 cifras: ");
    scanf("%d", &numero);

    u = numero / 1 % 10;
    d = numero / 10 % 10;
    c = numero / 100 % 10;
    um = numero / 1000 % 10;

    sumacifras = u + d + c + um;

    numero = sumacifras;
    u = numero / 1 % 10;
    d = numero / 10 % 10;

    sumacifras = u + d;

    printf("La suma de las cifras es: %d\n", sumacifras);

    return 0;
}

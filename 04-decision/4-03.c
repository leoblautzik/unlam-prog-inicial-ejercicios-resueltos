/*
 * Confeccionar un programa que pueda determinar de 3 números enteros
 * que se ingresan si alguno de ellos es igual a la suma de los otros dos.
 *
 */

#include <stdio.h>

int main()
{
    int n1, n2, n3;

    printf("Ingrese el primer número: ");
    scanf("%d", &n1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &n2);
    printf("Ingrese el tercer número: ");
    scanf("%d", &n3);

    if (n1 == (n2 + n3))
    {
        printf("El primer numero es igual a la suma de los otros dos");
    }
    else if (n2 == (n1 + n3))
    {
        printf("El segundo numero es igual a la suma de los otros dos");
    }
    else if (n3 == (n1 + n2))
    {
        printf("El tercer numero es igual a la suma de los otros dos");
    }
    else
    {
        printf("Ningún número es igual a la suma de los otros dos");
    }
    printf("\n");

    return 0;
}

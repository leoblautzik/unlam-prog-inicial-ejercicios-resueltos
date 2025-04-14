/*
 * Se ingresan 3 números enteros. Informarlos en orden creciente.
 */

#include <stdio.h>

int main()
{
    int n1, n2, n3, menor, medio, mayor;

    printf("Ingrese el primer número: ");
    scanf("%d", &n1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &n2);
    printf("Ingrese el tercer número: ");
    scanf("%d", &n3);

    menor = n1;

    if (n2 < menor)
    {
        medio = menor;
        menor = n2;
    }
    else
    {
        medio = n2;
    }

    if (n3 < menor)
    {
        mayor = medio;
        medio = menor;
        menor = n3;
    }
    else if (n3 < medio)
    {
        mayor = medio;
        medio = n3;
    }
    else
    {
        mayor = n3;
    }

    printf("Menor: %d, Medio: %d, Mayor: %d\n", menor, medio, mayor);

    return 0;
}

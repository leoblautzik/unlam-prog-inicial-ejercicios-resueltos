/*
 * Se ingresan 3 números distintos. Determinar el mayor.
 */

#include <stdio.h>

int main()
{
    int n1, n2, n3, mayor;

    printf("Ingrese el primer número: ");
    scanf("%d", &n1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &n2);
    printf("Ingrese el tercer número: ");
    scanf("%d", &n3);

    mayor = n1;
    if (n2 > mayor)
    {
        mayor = n2;
    }
    if (n3 > mayor)
    {
        mayor = n3;
    }

    printf("El mayor es: %d\n", mayor);

    return 0;
}

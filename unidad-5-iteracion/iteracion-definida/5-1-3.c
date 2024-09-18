#include <stdio.h>

/**
 * Se ingresan 50 números enteros.
 * Determinar el promedio de los números pares.
 */
int main()
{
    int i, n;
    int suma = 0;
    float promedio;

    for (i = 0; i < 5; i++)
    {
        printf("Ingrese un valor entero: ");
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            suma += n;
        }
    }
    printf("El promedio de los enteros pares ingresados es: %0.2f", (float)suma / 5);
}

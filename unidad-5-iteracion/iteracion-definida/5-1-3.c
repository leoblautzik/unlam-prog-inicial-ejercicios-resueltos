#include <stdio.h>

/**
 * Se ingresan 50 números enteros.
 * Determinar el promedio de los números pares.
 */
int main()
{
    int i, n;
    int suma = 0, contadorDePares = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Ingrese un valor entero: ");
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            suma += n;
            contadorDePares++;
        }
    }
    if (contadorDePares > 0)
    {
        printf("El promedio de los enteros pares ingresados es: %0.2f", (float)suma / contadorDePares);
    }
    else
    {
        printf("No se ingresaron valores pares");
    }
    if (i > 10)
    {
        printf("Hola");
    }
    return 0;
}

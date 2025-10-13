#include <stdio.h>

#define TAM 5

int sonIguales(int[], int[], int);
void mostrar(int[], int);

int main()
{
    printf("\nDos arreglos de 5 elementos, todos distintos\n");
    int v1[] = {1, 3, 5, 7, 9};
    int v2[] = {2, 4, 6, 8, 10};
    mostrar(v1, TAM);
    mostrar(v2, TAM);

    if (sonIguales(v1, v2, TAM))
    {
        printf("Son iguales\n");
    }
    else
    {
        printf("Son distintos\n");
    }

    printf("\nDos arreglos de 5 elementos, todos iguales, salvo el primero\n");
    int v3[] = {1, 3, 5, 7, 9};
    int v4[] = {-1, 3, 5, 7, 9};
    mostrar(v3, TAM);
    mostrar(v4, TAM);

    if (sonIguales(v3, v4, TAM))
    {
        printf("Son iguales\n");
    }
    else
    {
        printf("Son distintos\n");
    }

    printf("\nDos arreglos de 5 elementos, todos iguales, salvo el ultimo\n");
    int v5[] = {1, 3, 5, 7, 9};
    int v6[] = {-1, 3, 5, 7, 9};
    mostrar(v5, TAM);
    mostrar(v6, TAM);

    if (sonIguales(v5, v6, TAM))
    {
        printf("Son iguales\n");
    }
    else
    {
        printf("Son distintos\n");
    }

    printf("\nDos arreglos de 5 elementos, todos iguales\n");
    int v7[] = {1, 3, 5, 7, 9};
    int v8[] = {1, 3, 5, 7, 9};
    mostrar(v5, TAM);
    mostrar(v8, TAM);

    if (sonIguales(v7, v8, TAM))
    {
        printf("Son iguales\n");
    }
    else
    {
        printf("Son distintos\n");
    }
}

/** Muestra el contenido del arreglo vec que se pasa por parámetro.
 * 'tam' es el tamaño del arreglo vec.
 */
void mostrar(int vec[], int tam)
{
    int i;
    printf("El contenido del arreglo es: ");
    for (i = 0; i < tam; i++)
    {
        printf("%d ", vec[i]);
    }
    printf("\n");
}

/** Devuelve 1 si cada elemento de a es igual al de b en la misma posición.
 * Devuelve 0 si alguno es diferente;
 */
int sonIguales(int a[], int b[], int tam)
{
    int iguales = 1;
    int i = 0;

    while (i < tam && iguales)
    {
        if (a[i] != b[i])
        {
            iguales = 0;
        }
        i++;
    }

    return iguales;
}

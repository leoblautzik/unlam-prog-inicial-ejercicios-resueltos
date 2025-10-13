#include <stdio.h>

#define TAM 5

void intercalar(int[], int[], int[], int);
void mostrar(int[], int);

int main()
{
    int v1[] = {1, 3, 5, 7, 9};
    int v2[] = {2, 4, 6, 8, 10};
    int juntados[2 * TAM];

    intercalar(v1, v2, juntados, TAM);
    mostrar(juntados, 2 * TAM);
}

/** Muestra el contenido del arreglo vec que se pasa por parámetro.
 * 'tam' es el tamaño del arreglo vec.
 */
void mostrar(int vec[], int tam)
{
    int i;
    printf("El contenido del arreglo es:\n");
    for (i = 0; i < tam; i++)
    {
        printf("%d ", vec[i]);
    }
    printf("\n");
}

/** Coloca en el vector c todos los elementos de a y luego todos los elementos de b.
 * El parámetro tam es el tamaño de a y de b, mientras que el tamaño de c será del doble que el de a o b.
 */
void intercalar(int a[], int b[], int c[], int tam)
{
    int i, k = 0;
    for (i = 0; i < tam; i++)
    {
        c[k] = a[i];
        k++;
        c[k] = b[i];
        k++;
    }
}

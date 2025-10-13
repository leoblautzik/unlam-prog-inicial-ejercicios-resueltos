#include <stdio.h>

#define TAM 5

void juntar(int[], int[], int[], int);
void mostrar(int[], int);

int main()
{
    int v1[] = {1, 2, 3, 4, 5};
    int v2[] = {6, 7, 8, 9, 10};
    int juntados[10];

    juntar(v1, v2, juntados, 5);
    mostrar(juntados, 10);
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
void juntar(int a[], int b[], int c[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        c[i] = a[i];
        c[i + tam] = b[i];
    }
}

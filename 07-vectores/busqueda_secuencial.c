#include <stdio.h>

int busqueda_secuencial(int, int[], int);

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("El elemento 8 esta en la posicion: %d\n",
           busqueda_secuencial(8, a, 9));

    printf("El elemento 11 esta en la posicion: %d\n",
           busqueda_secuencial(11, a, 9));
    return 0;
}

int busqueda_secuencial(int dato, int v[], int ce)
{
    int i = 0, p;
    while (v[i] != dato && i < ce)
    {
        i++;
    }
    if (i == ce)
        p = -1;
    else
        p = i;
    return p;
}

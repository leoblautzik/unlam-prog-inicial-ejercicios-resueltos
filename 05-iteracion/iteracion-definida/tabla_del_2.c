#include <stdio.h>
// Imprimir la tabla de multiplicar del 2 desde el 1 al 12
int main()
{
    int t, i;

    for (t = 2; t <= 12; t++)
    {
        printf("\nTabla del %d\n", t);
        for (i = 1; i <= 12; i++)
        {
            printf("%d x %d = %d\n", t, i, t * i);
        }
    }
    return 0;
}

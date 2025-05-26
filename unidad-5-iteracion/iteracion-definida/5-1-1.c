#include <stdio.h>
/**
 * Mostrar por pantalla los números pares comprendidos entre 100 y 500.
 */
int main()
{
    int i = 0;

    for (i = 100; i <= 500; i += 2)
    {
        printf("%d\n", i);
    }
}

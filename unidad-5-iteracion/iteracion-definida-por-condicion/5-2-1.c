/**
 * Confeccionar un programa que calcule e informe los valores de las potencias de 2 cuyo resultado sean
menores que 600. (1 2 4 8 16 …)
*
*/

#include <stdio.h>

int main()
{
    int c = 0;
    int i, j;
    int potencia = 1;
    while (potencia < 600)
    {
        printf("%d\n", potencia);
        potencia *= 2;
    }

    return 0;
}

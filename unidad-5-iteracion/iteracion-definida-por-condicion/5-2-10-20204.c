#include <stdio.h>

int main()
{
    int temperatura, max, min, posmax, posmin, primero, contador = 1;

    printf("Ingrese un valor de temperatura");
    scanf("%d", &temperatura);
    primero = 1;
    while (temperatura != -50)
    {
        if (primero == 1)
        {
            max = temperatura;
            min = temperatura;
            posmax = contador;
            posmin = contador;
            primero = 0;
        }
        else
        {
            if (temperatura > max)
            {
                max = temperatura;
                posmax = contador;
            }
            else if (temperatura < min)
            {
                min = temperatura;
                posmin = contador;
            }
        }
        contador++;
        printf("Ingrese un valor de temperatura");
        scanf("%d", &temperatura);
    }
}

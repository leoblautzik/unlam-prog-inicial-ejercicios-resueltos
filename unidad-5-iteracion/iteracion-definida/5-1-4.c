#include <ctype.h>
#include <stdio.h>

/**
 * Se ingresan 100 letras. Determinar la cantidad de vocales ingresadas.
 */

int main()
{
    char letra;
    int i, cuentavocales = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Ingrese una letra: ");
        scanf("%c", &letra);
        letra = toupper(letra);
        if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
        {
            cuentavocales++;
        }
        getchar();
    }
    printf("La cantidad de vocales ingresadas es: %d", cuentavocales);

    return 0;
}

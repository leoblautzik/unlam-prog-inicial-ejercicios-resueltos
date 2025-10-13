#include <ctype.h>
#include <stdio.h>

int main()
{
    int a = (int)'A';
    char seccion;
    int v[8] = {0};
    printf("Ingrese la seccion: de A a H  ");
    getchar();
    scanf("%c", &seccion);
    seccion = toupper(seccion);

    printf("Ingrese n valor  ");
    scanf("%d", &v[(int)seccion - a]);

    printf("Dato: %d", v[(int)seccion - a]);
    return 0;
}

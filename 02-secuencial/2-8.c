/*
 * Se ingresa un número entero que representa una fecha con formato (ddmmaa).
 * Se pide transformarlo a un número con formato (aammdd).
 */

#include <stdio.h>

int main()
{
    int fecha, dia, mes, anio;

    printf("Ingrese una fecha con formato \"ddmmaa\": ");
    scanf("%d", &fecha);

    dia = fecha / 10000;
    anio = fecha % 100;
    mes = fecha / 100 % 100;

    fecha = anio * 10000 + mes * 100 + dia;

    printf("La fecha en formato \"aammdd\" es: %d\n", fecha);

    return 0;
}

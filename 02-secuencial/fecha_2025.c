#include<stdio.h>

int main()
{
    int fecha, dia, mes, anio, nueva_fecha;
    printf("Ingrese una fecha en formato ddmmaa: ");
    scanf("%d", &fecha);
    dia = fecha / 10000;
    mes = fecha / 100 % 100;
    anio = fecha % 100;
    nueva_fecha = anio * 10000 + mes * 100 + dia;
    printf("La fecha invertida es: %d\n", nueva_fecha);

    return 0;
}

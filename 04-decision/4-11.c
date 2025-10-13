/*
 * Escribir un programa que solicite el año y el número de mes
 * y nos informe cuantos días tiene dicho mes.
 * Debemos considerar que el año puede ser bisiesto.
 * Un año es bisiesto cuando es divisible por 4 y no por 100
 * o el año es divisible por 400.
 */

#include <stdio.h>

int main()
{
    int dias, mes, anio;
    printf("Ingrese el año: ");
    scanf("%d", &anio);
    printf("Ingrese el mes: ");
    scanf("%d", &mes);

    if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        dias = 30;
    }
    else if (mes == 2)
    {
        if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0)
        {
            dias = 29;
        }
        else
        {
            dias = 28;
        }
    }
    else
    {
        dias = 31;
    }
    printf("El mes tiene %d días\n", dias);

    return 0;
}

/*
 * Ingresar el valor de la hora y la cantidad de horas trabajadas por un empleado.
 * Calcular su sueldo tomando en cuenta que recibe un premio de
 * $500 si trabajo más de 50 horas y, además,
 * si trabajó más de 150 horas se le otorgan $1000 adicionales.
 */

#include <stdio.h>

int main()
{
    float valor_hora;
    int horas_trabajadas;
    float sueldo;

    printf("Ingrese el valor hora: ");
    scanf("%f", &valor_hora);
    printf("Ingrese la cantidad de horas trabajadas: ");
    scanf("%d", &horas_trabajadas);

    sueldo = horas_trabajadas * valor_hora;

    if (horas_trabajadas > 50)
    {
        sueldo += 500;
        if (horas_trabajadas > 150)
        {
            sueldo += 1000;
        }
    }

    printf("El sueldo es de: %8.2f\n", sueldo);

    return 0;
}

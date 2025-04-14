#include <stdio.h>

int main(void)
{
    float valorHora;
    int horasTrabajadas;
    float sueldo;

    printf("Ingrese el valor de la hora: ");
    scanf("%f", &valorHora);

    printf("Ingrese la cantidad de horas trabajadas: ");
    scanf("%d", &horasTrabajadas);

    sueldo = valorHora * horasTrabajadas;

    if (horasTrabajadas > 50)
    {
        sueldo += sueldo * 0.20f; // 20% extra
    }

    if (horasTrabajadas > 150)
    {
        sueldo += sueldo * 0.10f; // 10% adicional
    }

    printf("El sueldo final es: %.2f\n", sueldo);

    return 0;
}

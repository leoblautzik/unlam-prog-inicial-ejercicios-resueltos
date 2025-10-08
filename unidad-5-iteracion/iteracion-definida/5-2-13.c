#include <stdio.h>
#include <stdlib.h>
// Una empresa les paga a sus 10 empleados con base en las horas trabajadas en la semana
// Para esto, se registra el código del empleado (entero) y las horas trabajadas en
// la semana. Al comienzo de la carga, se ingresa por única vez el valor en pesos de la
// hora.
// Determinar:
// a) El sueldo semanal de cada empleado, informando código y sueldo.
// b) El código del empleado que más sueldo cobró en la semana.
// c) El porcentaje de empleados que trabajaron menos de 20 horas en la semana.
// d) El promedio de dinero pagado en sueldos a los empleados durante la
// semana.
//
int main()
{
    int i, codigo, horas_trabajadas, codigo_sue_max, cont_20hs = 0;
    float valor_hora, sueldo_semanal, sue_max, total_sue = 0;

    printf("Ingrese el valor hora: \n");
    scanf("%f", &valor_hora);

    for (i = 1; i <= 3; i++)
    {
        printf("\nIngrese el codigo del empleado:  ");
        scanf("%d", &codigo);
        printf("\nIngrese las horas trabajadas: ");
        scanf("%d", &horas_trabajadas);
        sueldo_semanal = horas_trabajadas * valor_hora;
        total_sue += sueldo_semanal;
        printf("Codigo: %d\t - Sueldo:  %.2f", codigo, sueldo_semanal);
        if (i == 1 || sueldo_semanal > sue_max)
        {
            sue_max = sueldo_semanal;
            codigo_sue_max = codigo;
        }
        if (horas_trabajadas < 20)
        {
            cont_20hs++;
        }
    }
    printf("\nEl empleado que mas sueldo cobro: %d con %.2f", codigo_sue_max, sue_max);
    printf("\nEl porc de empleados con menos de 20 hs. es: %.2f", (float)cont_20hs / 3 * 100);
    printf("\nEl promedio de sueldos semanal es: %.2f", total_sue / 3);
    system("pause");
    return 0;
}

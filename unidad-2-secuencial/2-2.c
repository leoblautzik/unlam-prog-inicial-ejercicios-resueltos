/*
 * Se ingresan las notas de dos evaluaciones de un alumno. Determinar la nota promedio.
 */
#include <stdio.h>

int main()
{
    int nota1, nota2;
    float promedio;
    printf("Ingrese la nota 1: ");
    scanf("%d", &nota1);
    printf("Ingrese la nota 2: ");
    scanf("%d", &nota2);
    promedio = (float)(nota1 + nota2) / 2;
    printf("La nota promedio es: %5.2f\n", promedio);

    return 0;
}

#include <stdio.h>

// Prototipos
int validar_entre(int minimo, int maximo);
int validar_nota();

int main()
{
    int dni;
    int nota1, nota2;
    int suma_notas_promocionados = 0;
    int contador_promocionados = 0;

    printf("Ingrese el DNI del alumno (valor negativo para finalizar): ");
    scanf("%d", &dni);

    while (dni >= 0)
    {
        printf("Alumno con DNI: %d\n", dni);

        // Validar las notas usando la función validar_nota
        nota1 = validar_nota();
        nota2 = validar_nota();

        printf("El alumno con DNI: %d, obtuvo las notas: %d y %d ", dni, nota1, nota2);

        if (nota1 >= 7 && nota2 >= 7)
        {
            printf("[PROMOCIONA]\n");
            suma_notas_promocionados += nota1 + nota2;
            contador_promocionados++;
        }
        else if (nota1 >= 4 && nota2 >= 4)
        {
            printf("[RINDE EXAMEN FINAL]\n");
        }
        else
        {
            printf("[REPROBO LA MATERIA]\n");
        }

        printf("\nIngrese el DNI del siguiente alumno (valor negativo para finalizar): ");
        scanf("%d", &dni);
    }

    if (contador_promocionados > 0)
    {
        double promedio = (double)suma_notas_promocionados / (2 * contador_promocionados);
        printf("\nNota promedio de alumnos promocionados: %.2f\n", promedio);
    }
    else
    {
        printf("\nNo hubo alumnos que promocionaron.\n");
    }

    return 0;
}

// Implementación de funciones
int validar_entre(int minimo, int maximo)
{
    int valor;
    printf("Ingrese un valor (entre %d y %d): ", minimo, maximo);
    scanf("%d", &valor);

    while (valor < minimo || valor > maximo)
    {
        printf("Valor inválido. Intente nuevamente.\n");
        printf("Ingrese un valor (entre %d y %d): ", minimo, maximo);
        scanf("%d", &valor);
    }

    return valor;
}

int validar_nota()
{
    return validar_entre(1, 10);
}

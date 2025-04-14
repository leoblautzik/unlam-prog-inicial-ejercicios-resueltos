/*
Confeccionar un programa que pueda determinar el importe a pagar por una
prestación médica según su código.
Los importes se cobran según la siguiente tabla:
Código Importe
A 7000
D 14000
F 21000
M 35000
T 45000
Se debe ingresar el número de historia del paciente y el código de la
prestación. Se debe emitir
un ticket con el número de la historia, el código y el importe a pagar.
*/
#include <stdio.h>

int main()
{
    int historia;
    char codigo;
    int importe = 0;

    printf("Ingrese el número de historia del paciente: ");
    scanf("%d", &historia);

    printf("Ingrese el código de la prestación (A, D, F, M, T): ");
    scanf(" %c",
          &codigo); // Espacio antes de %c para evitar problemas con el buffer

    switch (codigo)
    {
    case 'A':
        importe = 7000;
        break;
    case 'D':
        importe = 14000;
        break;
    case 'F':
        importe = 21000;
        break;
    case 'M':
        importe = 35000;
        break;
    case 'T':
        importe = 45000;
        break;
    default:
        printf("Código de prestación inválido.\n");
        return 1;
    }

    printf("\n--- TICKET DE PRESTACIÓN ---\n");
    printf("Historia clínica: %d\n", historia);
    printf("Código de prestación: %c\n", codigo);
    printf("Importe a pagar: $%d.00\n", importe);

    return 0;
}

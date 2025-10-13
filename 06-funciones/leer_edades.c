#include <stdio.h>

int leer_y_validar(int, int);
int main()
{
    printf("Ingrese su edad(entre 12 y 100 años): ");
    printf("\n%d", leer_y_validar(12, 100));
    printf("\nIngrese la nota: ");
    printf("Su nota es: %d", leer_y_validar(0, 10));

    return 0;
}

int leer_y_validar(int desde, int hasta)
{
    int edad;
    scanf("%d", &edad);
    while (edad < desde || edad > hasta)
    {
        printf("Fuera de rango, intente otra vez: ");
        scanf("%d", &edad);
    }
    return edad;
}

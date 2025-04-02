#include <stdio.h>

int main()
{
    float precio_original, precio_final;
    int aplica_descuento;

    // Pedir datos al usuario
    printf("Ingrese el precio original del artículo: ");
    scanf("%f", &precio_original);

    printf("¿Aplica descuento del 20%%? (0 para no, 1 para sí): ");
    scanf("%d", &aplica_descuento);

    // Calcular precio final sin usar if-else
    precio_final = precio_original * (1 - 0.20 * aplica_descuento);

    // Mostrar resultado
    printf("El precio final del artículo es: %.2f\n", precio_final);

    return 0;
}

/*
 * Una farmacia vende algunos artículos sin descuento y a otros con descuento del 20%.
 * Confeccionar un programa que recibiendo el precio original y un código
 * que indica si es o no con descuento, informe el precio final
 * (0 no aplica el descuento y 1 aplica el descuento).
 */

#include <stdio.h>

int main()
{
    int con_descuento;
    float precio;

    printf("Ingrese en precio del artículo: ");
    scanf("%f", &precio);

    printf("Aplica descuento del 20%% [1 si, 0 no]: ");
    scanf("%d", &con_descuento);

    precio -= precio * 0.2 * con_descuento;

    printf("Precio final: %6.2f\n", precio);

    return 0;
}

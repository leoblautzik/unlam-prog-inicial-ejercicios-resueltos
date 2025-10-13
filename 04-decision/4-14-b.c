/*La farmacia Sindical efectúa descuentos a sus afiliados según el importe de la compra con la siguiente
escala:
a. menor de $55 el descuento es del 4.5%
b. entre $55 y $100 el descuento es del 8%
c. más de $100 el descuento es del 10.5%
Confeccionar un programa que reciba un importe e informe: el descuento y el precio neto a cobrar, con
mensajes aclaratorios.
*/
#include <stdio.h>

int main()
{

    float importe, descuento;
    printf("Ingrese el importe: ");
    scanf("%f", &importe);

    if (importe < 55)
    {
        descuento = importe * 4.5 / 100;
    }
    else if (importe <= 100)
    {
        descuento = importe * 8 / 100;
    }
    else
    {
        descuento = importe * 10.5 / 100;
    }

    printf("Importe: %6.2f \nDescuento: %6.2f \nImporte a abonar: %6.2f \n", importe, descuento, importe - descuento);

    return 0;
}

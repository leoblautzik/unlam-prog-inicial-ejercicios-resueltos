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

    float importe;
    printf("Ingrese el importe: ");
    scanf("%f", &importe);
    printf("Importe: %6.2f\n", importe);

    if (importe < 55)
    {
        printf("Descuento: %8.3f\n", importe * 0.045);
        printf("Neto: %6.2f\n", importe * 0.955);
    }
    else if (importe <= 100)
    {
        printf("Descuento: %8.2f\n", importe * 0.080);
        printf("Neto: %8.2f\n", importe * 0.920);
    }
    else
    {
        printf("Descuento: %2.4f\n", importe * 0.105);
        printf("Neto: %.2f\n", importe * 0.895);
    }

    return 0;
}

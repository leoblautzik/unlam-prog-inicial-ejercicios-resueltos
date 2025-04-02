#include <stdio.h>

int main()
{
    float importe, total_ventas = 0, descuento, neto;
    int contador_ventas = 0;
    // lectura antes de entrar al while
    printf("Ingrese importe: ");
    scanf("%f", &importe);
    while (importe > 0)
    {
        total_ventas += importe;
        contador_ventas++;

        if (importe < 50)
        {
            descuento = importe * 0.035;
        }
        else if (importe < 150)
        {
            descuento = importe * 0.1;
        }
        else if (importe < 300)
        {
            descuento = importe * 0.2;
        }
        else
        {
            descuento = importe * 0.25;
        }
        neto = importe - descuento;

        printf("Importe de la venta: %8.2f\n", importe);
        printf("Descuento efectuado: %8.2f\n", descuento);
        printf("Neto a abonar: %8.2f\n", neto);

        // lectura antes de salir del while
        printf("Ingrese importe: ");
        scanf("%f", &importe);
    }
    if (contador_ventas > 0)
    {
        printf("Promedio de ventas: %8.2f\n", total_ventas / contador_ventas);
    }
    else
    {
        printf("Sin ventas\n");
    }
}

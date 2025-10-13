#include <stdio.h>

int main()
{
    int cantidad, cantidad_original, cant_paquetes;
    float importe;

    printf("Ingrese la cantidad de cuadernos A4 a comprar: ");
    scanf("%d", &cantidad);

    importe = 0;
    cantidad_original = cantidad;

    if (cantidad >= 30)
    {
        cant_paquetes = cantidad / 30;
        importe += cant_paquetes * 100000;
        cantidad = cantidad % 30;
    }

    if (cantidad >= 10)
    {
        cant_paquetes = cantidad / 10;
        importe += cant_paquetes * 40000;
        cantidad = cantidad % 10;
    }

    importe += cantidad * 5000;

    if (cantidad_original > 50)
    {
        importe *= 0.9;
    }

    printf("IMPORTE A PAGAR: $ %.2f\n", importe);

    return 0;
}

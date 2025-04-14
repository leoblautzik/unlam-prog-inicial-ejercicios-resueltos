/*
* Un negocio vende distintos artículos identificados por un código, según se
muestra: • código 1; 10; 100: 1000 pesos la unidad. • código 2; 22; 222: 700
pesos la unidad. La caja de 10 unidades vale 6500 pesos. • código 3; 33: 300
pesos la unidad. Si la compra es por más de 10 unidades se hace un descuento del
10% sobre el total de la compra. • código 4; 44: 100 peso la unidad.
Confeccionar un programa que ingrese como dato el código de un artículo y la
cantidad a comprar y se informe el importe de la compra, con las siguientes
leyendas: ARTÍCULO xxxxx CANTIDAD xxxx IMPORTE A PAGAR $ xxxx.xx
*/
#include <stdio.h>

int main()
{
    int codigo, cantidad;
    float precio_unitario = 0, importe = 0;

    printf("Ingrese el código del artículo: ");
    scanf("%d", &codigo);

    printf("Ingrese la cantidad a comprar: ");
    scanf("%d", &cantidad);

    switch (codigo)
    {
    case 1:
    case 10:
    case 100:
        precio_unitario = 1000;
        importe = precio_unitario * cantidad;
        break;

    case 2:
    case 22:
    case 222:
        importe = (float)cantidad / 10 * 6500 + cantidad % 10 * 700;
        break;

    case 3:
    case 33:
    case 300:
        precio_unitario = 300;
        importe = precio_unitario * cantidad;
        if (cantidad > 10)
        {
            importe *= 0.9; // 10% de descuento
        }
        break;

    case 4:
    case 44:
        precio_unitario = 100;
        importe = precio_unitario * cantidad;
        break;

    default:
        printf("Código inválido.\n");
        return 1;
    }

    printf("ARTICULO %d  CANTIDAD %d  IMPORTE A PAGAR $ %.2f\n", codigo, cantidad, importe);

    return 0;
}

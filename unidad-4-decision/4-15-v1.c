/*
Un negocio de artículos de computación vende DVDs según la siguiente escala de precios:
• sueltos, entre 1 y 9 a $15 c/u.
• la caja de 10 cuesta $120.
• la caja de 50 cuesta $500.
Si la compra excede las 100 unidades se efectúa un descuento del 10%.
NOTA: se aceptan compras entre 1 y 500 DVDs.
Se pide que se ingrese una cantidad de DVDs que se quiere comprar y calcule e informe el importe a pagar.
*/

#include <stdio.h>

int main()
{
    int dvds, cajas_de_10, cajas_de_50, unidades;
    float importe;

    printf("Ingrese cuantos dvds desea: ");
    scanf("%d", &dvds);

    if (dvds < 1 || dvds > 500)
    {
        printf("Compra no admitida");
    }
    else
    {
        cajas_de_50 = dvds / 50;
        cajas_de_10 = dvds % 50 / 10;
        unidades = dvds % 50 % 10;
        importe = cajas_de_50 * 500 + cajas_de_10 * 120 + unidades * 15;
        if (dvds > 100)
        {
            importe = importe * 0.9;
        }
        printf("Importe a abonar : %.2f", importe);
    }

    return 0;
}

/**
 * Un fabricante de repuestos para tractores ha descubierto que ciertos artículos
 * identificados por los números de catálogo 12121 al 18081;
 * 30012 al 45565 y 67000 al 68000 son defectuosos.
 * Se desea confeccionar un programa al que informándole
 * el número de catálogo indique si el artículo es o no defectuoso.
 * Los artículos del catálogo van desde el 1200 al 90000.
 * Si se ingresa otro número informar “FUERA DE CATALOGO”.
 *
 **/

#include <stdio.h>

int main()
{

    int num_catalogo;
    printf("Ingrese el número de articulo: ");
    scanf("%d", &num_catalogo);

    if (num_catalogo >= 1200 && num_catalogo <= 90000)
    {
        if ((num_catalogo > 12121 && num_catalogo < 18081) || (num_catalogo >= 30012 && num_catalogo <= 45565) ||
            (num_catalogo >= 67000 && num_catalogo <= 68000))
            printf("PRODUCTO DEFECTUOSO\n");
        else
        {
            printf("PRODUCTO NO DEFECTUOSO\n");
        }
    }
    else
    {
        printf("FUERA DE CATALOGO\n");
    }
}

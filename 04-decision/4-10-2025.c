#include <ctype.h>
#include <stdio.h>
#define ANIO_ACTUAL 2025

int main()
{
    int cod_cli, cod_publi, anio, proy_dia;
    float importe, total = 0;
    char fp;
    printf("Codigo cliente: ");
    scanf("%d", &cod_cli);
    printf("Codigo publicidad: ");
    scanf("%d", &cod_publi);
    printf("Año: ");
    scanf("%d", &anio);
    printf("Importe: ");
    scanf("%f", &importe);
    getchar();
    printf("Forma de pago: ");
    scanf("%c", &fp);
    printf("Proy al día: ");
    scanf("%d", &proy_dia);

    // importe = importe * proy_dia;

    if (anio == ANIO_ACTUAL && tolower(fp) == 'c')
    {
        importe *= 1.4;
    }
    else
    {
        if (anio >= ANIO_ACTUAL - 2)
        {
            importe *= 1.2;
        }
        else
        {
            if (ANIO_ACTUAL - anio > 2 && tolower(fp) == 'e')
            {
                importe *= 0.9;
            }
        }
    }

    if (proy_dia >= 20)
    {
        importe *= 0.85;
    }

    printf("Cliente: %d, Publicidad: %d, Importe a cobrar: %.2f", cod_cli, cod_publi, importe);

    return 0;
}

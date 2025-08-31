#include <stdio.h>

int esFechaValida(int, int, int);
int leerYvalidar(int, int);

int main()
{
    int dia, mes, anio, fv;
    dia = 1;
    mes = 3;
    printf("Ingrese el anio:  ");
    anio = leerYvalidar(1900, 2030);

    fv = esFechaValida(dia, mes, anio);
    if (fv)
    {
        printf("Es valida");
    }
    else
    {
        printf("No es valida");
    }

    return 0;
}

int esFechaValida(int d, int m, int a)
{
    return 1;
}

int leerYvalidar(int desde, int hasta)
{
    int dato;
    int flag = 0;
    do
    {
        if (flag)
        {
            printf("\nDebe estar entre %d y %d, intente nuevamente", desde, hasta);
        }
        scanf("%d", &dato);
        flag = 1;

    } while (dato < desde || dato > hasta);

    return dato;
}

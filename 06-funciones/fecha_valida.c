#include <stdbool.h>
#include <stdio.h>

bool esFechaValida(int, int, int);
int leer_validar(int, int);
bool es_bisiesto(int);
bool esta_dentro_del_rango(int, int, int);

int main()
{
    printf(" 1 -> %d\n", esFechaValida(5, 5, 1990));
    printf(" 1 -> %d\n", esFechaValida(29, 2, 2024));
    printf(" 1 -> %d\n", !esFechaValida(31, 4, 2024));
    printf(" 1 -> %d\n", !esFechaValida(28, 13, 2024));
    printf(" 1 -> %d\n", !esFechaValida(29, 2, 1999));
    printf(" 1 -> %d\n", esFechaValida(29, 2, 2000));
    printf(" 1 -> %d\n", esFechaValida(29, 2, 2024));
    printf(" 1 -> %d\n", esFechaValida(29, 2, 2024));
    printf(" 1 -> %d\n", !esFechaValida(31, 11, 2024));
    printf(" 1 -> %d\n", !esFechaValida(31, 06, 2020));

    return 0;
}
bool esFechaValida(int d, int m, int a)
{
    bool valido = false;
    bool mes_valido = esta_dentro_del_rango(m, 1, 12);
    bool dia_valido = esta_dentro_del_rango(d, 1, 31);
    bool anio_valido = esta_dentro_del_rango(a, 1900, 2100);

    if (mes_valido && dia_valido && anio_valido)

    {
        if (m == 2)
        {
            // Febrero
            if (d <= 28 + es_bisiesto(a))
                valido = true;
        }
        else if (m == 4 || m == 6 || m == 9 || m == 11)
        {
            // Meses de 30 días
            if (d <= 30)
                valido = true;
        }
        else
        {
            // Meses de 31 días
            valido = true;
        }
    }

    return valido;
}

// bool esFechaValida(int d, int m, int a)
// {
//     bool de_30 = ((m == 4 || m == 6 || m == 9 || m == 11) && d <= 30);
//     bool febrero = m == 2 && (es_bisiesto(a) && d <= 29) || (!es_bisiesto(a) && d <= 28);
//     return dia_valido && mes_valido && && anio_valido && (de_30 || febrero);
// }

bool es_bisiesto(int anio)
{
    return ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0));
}

bool esta_dentro_del_rango(int x, int a, int b)
{
    return x >= a && x <= b;
}

int leer_validar(int desde, int hasta)
{
    int dato;
    int flag = 0;
    printf("Ingrese un valor entre %d y %d: ", desde, hasta);
    scanf("%d", &dato);
    while (!esta_dentro_del_rango(dato, desde, hasta))
    {
        printf("\nDebe estar entre %d y %d, intente nuevamente", desde, hasta);
        scanf("%d", &dato);
    }

    return dato;
}

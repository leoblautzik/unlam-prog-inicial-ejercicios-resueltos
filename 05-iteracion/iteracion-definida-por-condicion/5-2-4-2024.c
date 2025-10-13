#include <ctype.h>
#include <stdio.h>

int main()
{
    char cod_op;
    float ventas_tarjeta = 0, ventas_cheque = 0, ventas_efectivo = 0, importe_operacion;
    // Leer y validar el código de importe_operacion
    printf("Ingrese código de operación: ");
    scanf("%c", &cod_op);
    cod_op = toupper(cod_op);
    getchar();
    while (!(cod_op == 'F' || cod_op == 'C' || cod_op == 'T' || cod_op == 'E'))
    {
        printf("El código ingresado es incorrecto: \n");
        printf("Intente nuevamente: ");
        scanf("%c", &cod_op);
        cod_op = toupper(cod_op);
        getchar();
    }

    while (cod_op != 'F')
    {
        printf("Ingrese el importe de la venta: ");
        scanf("%f", &importe_operacion);
        getchar();

        switch (cod_op)
        {
        case 'T':
            ventas_tarjeta += (importe_operacion * 1.12);
            break;
        case 'C':
            ventas_cheque += (importe_operacion * 1.2);
            break;
        case 'E':
            ventas_efectivo += (importe_operacion * 0.9);
            break;
        }
        // Leer y validar el código de importe_operacion
        printf("Ingrese código de operación: ");
        scanf("%c", &cod_op);
        cod_op = toupper(cod_op);
        while (!(cod_op == 'F' || cod_op == 'C' || cod_op == 'T' || cod_op == 'E'))
        {
            printf("El código ingresado es incorrecto: \n");
            printf("Intente nuevamente: ");
            getchar();
            scanf("%c", &cod_op);
            cod_op = toupper(cod_op);
        }
    }

    printf("-------------------------------\n");
    printf("Efectivo en Caja: %8.2f\n", ventas_efectivo);
    printf("Ventas con Tarjeta de Crédito: %8.2f\n", ventas_tarjeta);
    printf("Ventas con cheque: %8.2f\n", ventas_cheque);
    printf("Total de Venta: %8.2f\n", ventas_efectivo + ventas_cheque + ventas_tarjeta);
    printf("Importe del IVA : %8.2f\n", (ventas_efectivo + ventas_cheque + ventas_tarjeta) * 0.21);
}

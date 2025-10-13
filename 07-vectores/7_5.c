#include <stdio.h>

int leer_y_validar(int, int, int);
void listar_productos(int[], int);

int main()
{

    int productos[10] = {0};
    int codigo, cantidad;

    printf("Ingrese codigo de producto: ");
    codigo = leer_y_validar(1, 10, 0);

    while (codigo != 0)
    {
        printf("Ingrese la cantidad: ");
        do
        {
            scanf("%d", &cantidad);
        } while (cantidad <= 0);
        productos[codigo - 1] += cantidad;

        printf("Ingrese codigo de producto: ");
        codigo = leer_y_validar(1, 10, 0);
    }

    listar_productos(productos, 10);

    return 0;
}

void listar_productos(int p[], int tam)
{
    int i = 0;
    printf("Cod_Pro\tCantidad\n");
    for (i = 0; i < tam; i++)
    {
        printf("%d\t%d\n", i + 1, p[i]);
    }
}

int leer_y_validar(int ini, int fin, int cf)
{
    int valor;
    int flag = 0;
    do
    {
        if (flag == 0)
        {
            scanf("%d", &valor);
            flag = 1;
        }
        else
        {
            printf("Valor incorrecto. Debe estar entre %d y %d o ser la condicion de fin: %d\n", ini, fin, cf);
            getchar();
            scanf("%d", &valor);
        }
    } while ((valor < ini || valor > fin) && valor != cf);

    return valor;
}

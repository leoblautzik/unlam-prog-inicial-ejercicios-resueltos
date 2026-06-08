/*Una empresa de venta de artículos de limpieza trabaja con como máximo 300
artículos diferentes.  Al comenzar el programa se ingresa el estado del stock
hasta el momento.  De cada artículo se ingresa los siguientes datos: • Código de
artículo (entero, mayor a cero). • Número de depósito donde se encuentra el
artículo (entero, entre 1 y 20). • Stock (entero, entre 0 y 2000). • Punto de
reposición (entero, entre 500 y 1000). La carga finaliza con un código de
articulo igual a cero. Luego se procesan los movimientos del mes en el stock:
egresos (resta al stock) e ingresos (suma al stock).  Por cada movimiento se
ingresa: • Código del artículo • Código del movimiento (carácter, ‘I’: ingreso a
stock - suma; ‘E’: egreso de stock - resta) • Cantidad ingresada / egresada
(entero, mayor a cero) Si el artículo no existe en la primera carga y además el
código de movimiento es ‘I’, si hay lugar en al vector cargado en la primera
parte, agregarlo al final con número de depósito 100 y con punto de reposición
0, para ser evaluado por otro sistema más tarde.  La carga de movimientos
finaliza con un código de artículo igual a cero. Se pide informar lo siguiente:
a. El detalle de la cantidad de artículos en stock (todos), informando código y
existencia.
b. El porcentaje de artículos que hayan quedado con el stock igual a cero.
c. Los códigos de artículos que hayan quedado con stock por debajo del punto de
reposición.  No tener en cuenta los códigos nuevos agregados al final.
d. Cuántos depósitos tuvieron movimientos de egreso durante el mes, sin tener en
cuenta el depósito 100.
e. Informar un listado con los códigos de artículos que no existían en la lista
original, y fueron agregados (si existe alguno, sino mostrar la leyenda “NO HAY
ARTÍCULOS NUEVOS”). NOTA: Se permite que el stock pueda quedar negativo, de
artículos vendidos pero pendiente de ingreso al stock.*/

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int IngrEnteroMayorIgualA(int);
int BusquedaSec(int[], int, int);
int IngrEnteroRango(int, int);
char IngrCaracterVal(char, char);
void MostrarVecPar(int[], int[], int);
int ContarIgualA(int[], int, int);

int main()
{
    int vCod[300], vDep[300], vStock[300], vPuntoRep[300], cant = 0;
    int cant2, vDeposito[20] = {0}, cod, cantidad, i, pos;
    char mov;

    /* ════════════════════════════════════
       PARTE 1 – Carga inicial

     * ════════════════════════════════════ */

    printf("\n=== CARGA INICIAL DE STOCK ===\n");
    printf(
        "\nIngrese el Codigo de articulo mayor a cero (0 para finalizar): \t");
    cod = IngrEnteroMayorIgualA(0);
    while (BusquedaSec(vCod, cant, cod) != -1)
    {
        printf("\nDato duplicado.  Vuelva a ingresar: \t");
        cod = IngrEnteroMayorIgualA(0);
    }

    while (cod != 0 && cant < 300)
    {
        vCod[cant] = cod;
        printf("\nIngrese el numero de Deposito entre 1 y 20: \t");
        vDep[cant] = IngrEnteroRango(1, 20);
        printf("\nIngrese el Stock entre 0 y 2000): \t");
        vStock[cant] = IngrEnteroRango(0, 2000);
        printf("\nIngrese el Punto de reposicion entre 500 y 1000: \t");
        vPuntoRep[cant] = IngrEnteroRango(500, 1000);
        cant++;

        printf("\nIngrese el Codigo de articulo mayor a cero (0 para "
               "finalizar): \t");
        cod = IngrEnteroMayorIgualA(0);
        while (BusquedaSec(vCod, cant, cod) != -1)
        {
            printf("\nDato duplicado.  Vuelva a ingresar: \t");
            cod = IngrEnteroMayorIgualA(0);
        }
    }

    cant2 = cant;

    /* ════════════════════════════════════
       PARTE 2 – Movimientos del
     * mes
       ════════════════════════════════════
     */
    printf("\n=== MOVIMIENTOS DEL MES ===\n");
    printf("Codigo de articulo mayor a cero (0 para finalizar): \t");

    cod = IngrEnteroMayorIgualA(0);
    while (cod != 0)
    {
        printf("\nIngrese el movimiento - I: ingreso / E: egreso: \t");
        mov = IngrCaracterVal('I', 'E');
        printf("\nIngrese la cantidad - mayor a cero\t: ");
        cantidad = IngrEnteroMayorIgualA(1);

        pos = BusquedaSec(vCod, cant, cod);

        if (pos == -1)
        {
            if (mov == 'I')
            {
                if (cant < 300)
                {
                    vCod[cant] = cod;
                    vDep[cant] = 100;
                    vStock[cant] = cantidad;
                    vPuntoRep[cant] = 0;
                    cant++;
                    printf(
                        "\nArticulo %d agregado como nuevo (deposito 100).\n",
                        cod);
                }
                else
                    printf(
                        "\nVector lleno, no se pudo agregar el articulo %d.\n",
                        cod);
            }
            else
                printf("\nArticulo %d no encontrado. Egreso ignorado.\n", cod);
        }
        else

            if (mov == 'I')
            vStock[pos] += cantidad;
        else
        {
            vStock[pos] -= cantidad;
            vDeposito[vDep[pos] - 1] = 1;
        }

        printf("\nIngrese la cantidad - mayor a cero\t: ");
        cantidad = IngrEnteroMayorIgualA(1);
    }

    /* ════════════════════════════════════
       INFORMES

     * ════════════════════════════════════ */
    if (cant > 0)
    {

        printf("\n\n========================================\n");
        printf("            I N F O R M E S\n");
        printf("========================================\n");

        /* a. Detalle de todos los artículos */
        printf("\nDETALLE DE STOCK\n");
        printf("\nCODIGO\tEXISTENCIA\n");
        MostrarVecPar(vCod, vStock, cant);

        /* b. Porcentaje con stock == 0 */
        printf("\nPorcentaje con stock igual a cero: %.2f\n",
               (float)ContarIgualA(vStock, cant, 0) / cant * 100);

        /* c. Stock por debajo del punto de reposición (solo originales) */
        printf("\nARTICULOS CON STOCK BAJO EL PUNTO DE REPOSICION\n");

        for (i = 0; i < cant2; i++)

            if (vStock[i] < vPuntoRep[i])
                printf("   Codigo: %d  (stock: %d  punto rep.: %d)\n", vCod[i],
                       vStock[i], vPuntoRep[i]);

        /* d. Depósitos con egresos (sin dep. 100) */
        printf("\nCantidad de depositos con movimientos de egreso: ",
               ContarIgualA(vDeposito, 20, 1));

        /* e. Artículos nuevos */
        printf("\nARTICULOS NUEVOS AGREGADOS\n");
        if (cant2 < cant)
        {
            for (i = cant2; i < cant; i++)
                printf("\n%5d", vCod[i]);
        }
        else
            printf("   NO HAY ARTICULOS NUEVOS\n");
    }
    else
        printf("\nNo se ingresaron codigos de articulos...");

    printf("\n========================================\n");
    return 0;
}
////////////////////FUNCIONES////////////////////////////
int IngrEnteroMayorIgualA(int lim)
{
    int dato;

    scanf("%d", &dato);
    while (dato < lim)
    {
        printf("\nERROR - El dato ingresado debe ser mayor a %d - Vuelva a "
               "ingresar: \t",
               lim);
        scanf("%d", &dato);
    }
    return dato;
}
////////////////////////////////////////////////////////
int IngrEnteroRango(int linf, int lsup)
{
    int dato;
    bool Ok = true;

    do
    {
        if (Ok)
        {
            scanf("%d", &dato);
            Ok = false;
        }
        else
        {
            printf("\nERROR - El valor tiene que estar entre %d y %d - Vuelva "
                   "a ingresar: \t",
                   linf, lsup);
            Ok = true;
        }
    } while (dato < linf || dato > lsup);

    return dato;
}
//////////////////////////////////////////////////////
char IngrCaracterVal(char letra1, char letra2)
{
    char dato;

    getchar();
    scanf("%c", &dato);
    dato = toupper(dato);
    while (dato != letra1 && dato != letra2)
    {
        printf(
            "\nERROR - El dato tiene que ser %c o %c.  Vuelva a ingresar: \n",
            letra1, letra2);
        getchar();
        scanf("%c", &dato);
        dato = toupper(dato);
    }

    return dato;
}
//////////////////////////////////////////////////////
int BusquedaSec(int V[], int ce, int dato)
{
    int i = 0, p;

    while (i < ce && V[i] != dato)
        i++;

    if (i == ce)
        p = -1;
    else
        p = i;

    return p;
}
/////////////////////////////////////////////////////
void MostrarVecPar(int V1[], int V2[], int ce)
{
    int i;

    for (i = 0; i < ce; i++)
        printf("\n%d\t%d", V1[i], V2[i]);
}
/////////////////////////////////////////////////////
int ContarIgualA(int V[], int ce, int dato)
{
    int i, c = 0;

    for (i = 0; i < ce; i++)
        if (V[i] == dato)
            c++;

    return c;
}

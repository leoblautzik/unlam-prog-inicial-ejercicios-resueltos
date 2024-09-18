/**
 * 5.2.8 Confeccionar un programa que me permita calcular y mostrar una cantidad de números primos
 * que se solicita por la pantalla. Los números se calculan a partir del 2.
 * Ejemplo: Si ingreso 6, genero los números: 2 – 3 - 5 - 7 - 11 - 13.
 * El algoritmo para el cálculo de si un número es primo o no, debe estar optimizado para que
 * si encuentra un divisor no seguir buscando ya que se sabe que no es primo.
 */

#include <stdio.h>
// int esPrimo(int);
int main()
{
    int contador = 0;
    int cant_pri;
    int i = 2;
    int n = 2;
    int es_primo = 1;
    int flag = 0;
    do
    {
        if (flag)
        {
            printf("La cantidad debe ser mayor o igual a 1\n");
        }
        printf("Ingrese la cantidad de nros. primos: ");
        scanf("%d", &cant_pri);
        flag = 1;
    } while (cant_pri <= 0);

    while (contador < cant_pri)
    {
        i = 2;
        es_primo = 1;
        while (es_primo && i <= n / 2)
        {
            if (n % i == 0)
            {
                es_primo = 0;
            }
            i++;
        }
        if (es_primo)
        {
            printf("%d\n", n);
            contador++;
        }
        n++;
    }

    return 0;
}

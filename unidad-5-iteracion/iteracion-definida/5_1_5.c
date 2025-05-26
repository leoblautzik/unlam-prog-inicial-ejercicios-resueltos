#include <stdio.h>

int main()
{
    int i, n, x, suma_mul_3 = 0, cant_mul_5 = 0, suma_orden_par = 0;
    printf("Ingrese lacantidad de numeros a procesar: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Ingrese el %d° numero: ", i);
        scanf("%d", &x);
        if (x % 3 == 0)
            suma_mul_3 += x;
        if (x % 5 == 0)
            cant_mul_5++;
        if (i % 2 == 0)
            suma_orden_par += x;
    }

    printf("Sumatoria multiplos de 3: %d\n", suma_mul_3);
    printf("Cantidad multiplos de 5: %d\n", cant_mul_5);
    printf("Sumatoria de los num ingresados en orden par: %d\n", suma_orden_par);
    return 0;
}

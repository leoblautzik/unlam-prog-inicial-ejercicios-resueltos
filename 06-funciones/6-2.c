#include <stdio.h>

int leer_y_validar(int, int);
int esta_entre(int, int, int);
int es_par(int);

int main()
{
    int contador_a = 0, contador_b = 0, contador_c = 0, acum_c = 0;
    int num;
    num = leer_y_validar(99, 2000);
    while (num != 99)
    {
        if (esta_entre(num, 100, 500))
        {
            contador_a++;
        }
        if (esta_entre(num, 500, 1200) && es_par(num))
        {
            contador_b++;
        }
        if (esta_entre(num, 1200, 2000))
        {
            contador_c++;
            acum_c += num;
        }
        num = leer_y_validar(99, 2000);
    }
    printf("Entre 100 y 500 hay: %d \n", contador_a);
    printf("\nPares entre 500 y 1200: %d", contador_b);
    if (contador_c > 0)
        printf("\nPromedio entre 1200 y 2000: %.2f\n", (float)acum_c / contador_c);
}

int esta_entre(int n, int desde, int hasta)
{
    return (n >= desde && n <= hasta);
}

int leer_y_validar(int desde, int hasta)
{
    int dato;
    printf("Ingrese un valor entre %d y %d, %d para salir: ", desde, hasta, desde);
    scanf("%d", &dato);
    while (!esta_entre(dato, desde, hasta))
    {
        printf("Valor incorrecto, intente nuevamente: ");
        scanf("%d", &dato);
    }
    return dato;
}

int es_par(int num)
{
    return num % 2 == 0;
}

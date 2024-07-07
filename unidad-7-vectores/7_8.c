#include <stdio.h>
#define TAM 5

int cargar_tiempos(float[], int);
int auto_t_min(float[], int);
int auto_t_max(float[], int);
float tiempo_promedio(float[], int);
int autos_por_encima_del_promedio(float[], float, int);
void listar_autos_que_no_participaron(float[], int);
int autoValidado();
float tiempoValidado();
void mostrarTiempos(float tiempos[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%8.4f ", tiempos[i]);
    }
    printf("\n");
}

int main()
{
    float tiempos[TAM] = {0.0};
    float t_promedio;
    int participantes;

    participantes = cargar_tiempos(tiempos, TAM);
    mostrarTiempos(tiempos, TAM);
    if (participantes > 0)
    {
        printf("El mejor clasificado fue: %d\n", auto_t_min(tiempos, TAM));
        printf("El peor clasificado fue: %d\n", auto_t_max(tiempos, TAM));
        t_promedio = tiempo_promedio(tiempos, TAM);
        if (t_promedio > 0)
        {
            printf("Hubo %d autos que superaron el tiempo promedio de %5.2f seg.\n",
                   autos_por_encima_del_promedio(tiempos, t_promedio, TAM), t_promedio);
        }
    }

    listar_autos_que_no_participaron(tiempos, TAM);

    return 0;
}

int cargar_tiempos(float tiempos[], int tam)
{
    int i = 0, nro_auto, cant;

    nro_auto = autoValidado();
    while (nro_auto > 0)
    {
        cant++;
        tiempos[nro_auto - 1] = tiempoValidado();
        nro_auto = autoValidado();
    }
    return cant;
}

int auto_t_min(float tiempos[], int tam)
{
    int i = 0, flag = 0, auto_min;
    float tmin;
    for (i = 0; i < tam; i++)
    {
        if (tiempos[i] != 0)
        {
            if (flag == 0 || tiempos[i] < tmin)
            {
                tmin = tiempos[i];
                auto_min = i;
                flag = 1;
            }
        }
    }
    return auto_min + 1;
}

int auto_t_max(float tiempos[], int tam)
{
    float tmax;
    int auto_max;
    for (int i = 0; i < tam; i++)
    {
        if (i == 0 || tiempos[i] > tmax)
        {
            tmax = tiempos[i];
            auto_max = i;
        }
    }

    return auto_max + 1;
}

float tiempo_promedio(float tiempos[], int tam)
{
    float suma = 0.00;
    int contador = 0;
    float promedio = -1;
    int i;
    for (i = 0; i < tam; i++)
    {
        if (tiempos[i] > 0)
        {
            suma += tiempos[i];
            contador++;
        }
    }
    if (contador > 0)
    {
        promedio = suma / contador;
    }
    return promedio;
}

int autos_por_encima_del_promedio(float tiempos[], float tp, int tam)
{
    int cant = 0, i;
    for (i = 0; i < tam; i++)
    {
        if (tiempos[i] > tp)
        {
            cant++;
        }
    }

    return cant;
}

void listar_autos_que_no_participaron(float tiempos[], int tam)
{
    int i;
    printf("Autos que no participaron: \n");
    for (i = 0; i < tam; i++)
    {
        if (tiempos[i] == 0)
        {
            printf("%d\n", i + 1);
        }
    }
}

int autoValidado()
{
    int autito;
    do
    {
        printf("Ingrese el nro de auto (entre 1 y %d): ", TAM);
        scanf("%d", &autito);
        // printf("\n");
    } while (!((autito >= 1 && autito <= TAM) || autito < 0));

    return autito;
}

float tiempoValidado()
{
    float t;
    do
    {
        printf("Ingrese el tiempo de clasificacion (mayor que 0): ");
        scanf("%f", &t);
        printf("\n");
    } while (t <= 0);

    return t;
}

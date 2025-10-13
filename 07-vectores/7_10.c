#include <stdio.h>
#define TAM 5

int leer_y_validar(int li, int ls);
int carga_alumnos(int[], int[], int[], float[], int);
float asistencia_valida();
int promociona(int, int);
int reprueba(int, int);
int aprueba(int, int);
int ausente(int, int);

int main()
{
    int ca;
    int dni[TAM];
    int p1[TAM];
    int p2[TAM];
    float asistencia[TAM];

    ca = carga_alumnos(dni, p1, p2, asistencia, TAM);

    for (int i = 0; i < ca; i++)
    {
        printf("%d\t%d\t%d\t%5.2f\t", dni[i], p1[i], p2[i], asistencia[i]);
        if (promociona(p1[i], p2[i]))
        {
            printf("Promociona\n");
        }
        else if (aprueba(p1[i], p2[i]))
        {
            printf("Aprueba\n");
        }
        else if (reprueba(p1[i], p2[i]))
        {
            printf("Reprueba\n");
        }
        else if (ausente(p1[i], p2[i]))
        {
            printf("Ausente\n");
        }
    }
}

int carga_alumnos(int d[], int p1[], int p2[], float a[], int tam)
{
    int dni, i = 0;
    printf("\nIngrese DNI: ");
    dni = leer_y_validar(0, 99999999);
    while (i < TAM && dni != 0)
    {
        d[i] = dni;
        printf("Parcial 1: ");
        p1[i] = leer_y_validar(0, 10);
        printf("Parcial 2: ");
        p2[i] = leer_y_validar(0, 10);
        printf("Porc asistencia: ");
        a[i] = asistencia_valida();
        i++;
        printf("\nIngrese DNI: ");
        dni = leer_y_validar(0, 99999999);
    }

    return i;
}

int promociona(int a, int b)
{
    int promociona = 0;
    if (a >= 7 && b >= 7)
    {
        promociona = 1;
    }

    return promociona;
}

int reprueba(int a, int b)
{
    int reprueba = 0;
    if (!ausente(a, b) && (a < 4 || b < 4))
    {
        reprueba = 1;
    }

    return reprueba;
}

int aprueba(int a, int b)
{
    int aprueba = 0;
    if (a >= 4 && b >= 4 && !promociona(a, b))
    {
        aprueba = 1;
    }

    return aprueba;
}

int ausente(int a, int b)
{
    int ausente = 0;
    if (a == 0 || b == 0)
    {
        ausente = 1;
    }

    return ausente;
}

int leer_y_validar(int li, int ls)
{
    int dato, flag = 0;
    do
    {
        if (flag == 0)
        {
            flag = 1;
        }
        else
        {
            printf("\nValor incorrecto - Intente nuevamente\n");
        }
        scanf("%d", &dato);
    } while (dato > ls || dato < li);

    return dato;
}

float asistencia_valida()
{
    float dato, flag = 0;
    do
    {
        if (flag == 0)
        {
            flag = 1;
        }
        else
        {
            printf("\nValor incorrecto - Intente nuevamente\n");
        }
        scanf("%f", &dato);
    } while (dato < 0);

    return dato;
}

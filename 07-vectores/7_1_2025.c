/* Dada una lista de 10 valores enteros. Se pide:

   a) Cargar la lista en memoria en un vector llamado Vec_A.
   b) Copiar el vector Vec_A en otro llamado Vec_B.
   c) Generar un vector Vec_C correspondiente a la suma de Vec_A y Vec_B.
   d) Copiar Vec_A en orden inverso en otro vector llamado Vec_D.
   e) Listar los cuatro vectores simultáneamente informando en la primera
   columna el número de orden de los elementos.
   f) Informar las posiciones de los elementos pares del vector Vec_A.
   g) Informar los elementos de posiciones
   impares del vector Vec_A.
   h) Informar la suma de los elementos del vector Vec_A.
   i) Informar el valor promedio de los
   elementos del vector Vec_A.
   j) Ingresar por teclado un valor entero N e informar la cantidad de elementos
   iguales a N en el vector Vec_A.*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void CargaVecCompl(int[], int);
void CopiaVec(int[], int[], int);
void SumaDosVec(int[], int[], int[], int);
void InvierteVec(int[], int[], int);
void ListarVecs(int[], int[], int[], int[], int);
void MostrarPosElemPar(int[], int);
void MostrarElemPosImpar(int[], int);
int SumaVec(int[], int);
int CantIgualA(int[], int, int);

int main()
{
    int Vec_A[TAM], Vec_B[TAM], Vec_C[TAM], Vec_D[TAM], sum, N;

    printf("\nIngresar 10 valores enteros: \n");
    CargaVecCompl(Vec_A, TAM);            // Punto a
    CopiaVec(Vec_A, Vec_B, TAM);          // Punto b
    SumaDosVec(Vec_A, Vec_B, Vec_C, TAM); // Punto c
    InvierteVec(Vec_A, Vec_D, TAM);       // Punto d
    printf("\nORDEN\tVec_A\tVec_B\tVec_C\tVec_D\n");
    ListarVecs(Vec_A, Vec_B, Vec_C, Vec_D, TAM); // Punto e
    printf("\nLas posiciones de los elementos pares son: \n");
    MostrarPosElemPar(Vec_A, TAM); // Punto f
    printf("\nLos elementos de las posiciones impares son: \n");
    MostrarElemPosImpar(Vec_A, TAM); // Punto g
    sum = SumaVec(Vec_A, TAM);
    printf("\nLa suma de los elementos del vector Vec_A es %d \n",
           sum); // Punto h
    printf("\nEl promedio de los elementos del vector Vec_A es %.2f\n",
           (float)sum / TAM); // Punto i
    printf("\nIngresar un número entero: \t");
    scanf("%d", &N);
    printf("\nLa cantidad de elementos iguales a %d en el vector Vec_A es %d\n",
           N, CantIgualA(Vec_A, TAM, N)); // Punto j

    printf("\n\n\n");
    system("pause");
    return 0;
}

/**
 * a) Cargar la lista en memoria en un vector llamado Vec_A.
 */
void CargaVecCompl(int V[], int ce)
{
    int i, dato;
    for (i = 0; i < TAM; i++)
    {
        scanf("%d", &dato);
        V[i] = dato;
    }
}

/**
 * b) Copiar el vector Vec_A en otro llamado Vec_B.
 */
void CopiaVec(int A[], int B[], int ce)
{
    int i;

    for (i = 0; i < ce; i++)
    {
        B[i] = A[i];
    }
}

/**
 * c) Generar un vector Vec_C correspondiente a la suma de Vec_A y Vec_B.
 */
void SumaDosVec(int A[], int B[], int C[], int ce)
{
    int i;

    for (i = 0; i < ce; i++)
        C[i] = A[i] + B[i];
}

/**
 * d) Copiar Vec_A en orden inverso en otro vector llamado Vec_D.
 */
void InvierteVec(int A[], int D[], int ce)
{
    int i;

    for (i = 0; i < ce; i++)
        D[ce - 1 - i] = A[i];
}

/**
 * e) Listar los cuatro vectores simultáneamente informando en la primera
 */
void ListarVecs(int A[], int B[], int C[], int D[], int ce)
{
    int i;

    for (i = 0; i < ce; i++)
        printf("%5d\t%5d\t%5d\t%5d\t%5d\n", i + 1, A[i], B[i], C[i], D[i]);
}

/**
 * f) Informar las posiciones de los elementos pares del vector Vec_A.
 */
void MostrarPosElemPar(int V[], int ce)
{
    int i;

    for (i = 0; i < ce; i++)
    {
        if (V[i] % 2 == 0)
        {
            printf("%5d\n", i + 1);
        }
    }
}
////////////////////////////////////////////////////////////////
void MostrarElemPosImpar(int V[], int ce)
{
    int i;

    for (i = 1; i < ce; i += 2)
        printf("%5d\n", V[i]);
}
////////////////////////////////////////////////////////////////
int SumaVec(int V[], int ce)
{
    int i, s = 0;

    for (i = 0; i < ce; i++)
        s += V[i];

    return s;
}
////////////////////////////////////////////////////////////////
int CantIgualA(int V[], int ce, int dato)
{
    int i, c = 0;

    for (i = 0; i < ce; i++)
        if (V[i] == dato)
            c++;

    return c;
}

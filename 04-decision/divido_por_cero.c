#include <stdio.h>

int main()
{
    int a = 10;
    int cero = 0;
    float x = 10.0;
    float y = 0.0;

    printf("DIVISIÓN ENTERA:\n");
    // Esto puede causar un error en tiempo de ejecución (undefined behavior)
    // printf("10 / 0 = %d\n", a / cero); // Descomentar para probar el crash

    printf("\nDIVISIÓN CON FLOAT:\n");
    printf("10.0 / 0.0 = %f\n", x / y);   // +inf
    printf("-10.0 / 0.0 = %f\n", -x / y); // -inf
    printf("0.0 / 0.0 = %f\n", y / y);    // NaN (not a number)

    return 0;
}

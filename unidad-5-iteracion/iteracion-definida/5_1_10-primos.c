#include <stdbool.h>
#include <stdio.h>
/*  Realizar un programa que:
a. Muestre todoslos números primos entre 1 y 100. Un número es primo cuando es divisible solamente por la unidad y por
sí mismo. b. Contar y mostrar la cantidad de primos encontrados
*/
int main()
{
    int i, j, primo;
    for (i = 2; i <= 100; i++)
    {
        primo = true;
        for (j = 2; i - 1; j++)
        {
            if (i % j == 0)
                primo = false;
        }
        if (primo)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}

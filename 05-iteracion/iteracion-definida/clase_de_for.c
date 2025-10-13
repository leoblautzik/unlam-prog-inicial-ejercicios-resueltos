#include <stdio.h>

int main()
{
    int i;
    for (i = 100; i <= 150; i += 5)
    {
        printf("%d\n", i);
    }
    printf("Afuera del for\n");
    printf("%d\n", i);
    return 0;
}

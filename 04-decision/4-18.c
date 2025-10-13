#include <stdio.h>

int main()
{
    int diaActual, mesActual, anioActual, diaNacimiento, mesNacimiento, anioNacimiento, edad;
    printf("Ingrese la fecha actual: ");
    scanf("%d  %d  %d", &diaActual, &mesActual, &anioActual);

    printf("Ingrese la fecha de nacimiento: ");
    scanf("%d  %d  %d", &diaNacimiento, &mesNacimiento, &anioNacimiento);

    if (mesActual > mesNacimiento)
    {
        edad = anioActual - anioNacimiento;
    }
    else if (mesActual < mesNacimiento)
    {
        edad = anioActual - anioNacimiento - 1;
    }
    else if (diaActual >= diaNacimiento)
    {
        edad = anioActual - anioNacimiento;
    }
    else
    {
        edad = anioActual - anioNacimiento - 1;
    }
    printf("La edad es: %d\n", edad);

    edad = anioActual - anioNacimiento;
    if(mesActual <= mesNacimiento)
    {
        if (mesActual < mesNacimiento)
        {
            edad -= 1;
        }
        else if (diaActual < diaNacimiento)
        {
            edad -= 1;
        }
    }
    printf("La edad es: %d\n", edad); 

    edad = anioActual - anioNacimiento;
    if(mesActual <= mesNacimiento && (mesActual < mesNacimiento || diaActual < diaNacimiento))
    {
        edad -= 1;
    }
    printf("La edad es: %d\n", edad); 
    return 0;
}

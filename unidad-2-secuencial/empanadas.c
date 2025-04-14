#include<stdio.h>

int main()
{
	int precio_docena, precio_unidad, empanadas,
	importe_total;

	printf("Ingrese el precio por docena: ");
	scanf("%d",&precio_docena);
	printf("Ingrese el precio por unidad: ");
	scanf("%d",&precio_unidad);
	printf("Ingrese la cantidad de empanadas ");
	scanf("%d",&empanadas);

	importe_total=empanadas/12*precio_docena +
	empanadas%12*precio_unidad;
	printf("Importe a abonar: %d\n", importe_total);

	return 0;
}

#include<stdio.h>

int main()
{
	float precio_doc, precio_uni, total;
	int cant_empanadas, cd, cu;

	printf("Ingrese precio por unidad: ");
	scanf("%f", &precio_uni);
	printf("\nIngrese precio por docena: ");
	scanf("%f", &precio_doc);
	printf("\nIngrese cantidad de empanadas: ");
	scanf("%d", &cant_empanadas);

	cd = cant_empanadas / 12;
	cu = cant_empanadas % 12;

	total = cd * precio_doc + cu * precio_uni;

	printf("\nDebe abonar: %.2f", total);

	return 0;
}

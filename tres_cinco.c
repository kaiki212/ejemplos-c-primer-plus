#include <stdio.h>

int main(void)
{
	int edad_anios;
	long long int edad_seg;

	printf("Introduzca su edad en anios: ");
	scanf("%d", &edad_anios);
	edad_seg = edad_anios*3.156e7;
	printf("su edad en segundos es: %lld\n", edad_seg);

	return 0;
}

/* typesize.c -- imprime distintos tipos de tamanios */
#include <stdio.h>
int main(void)
{
	/* c99 provee un especificador %zd para tamanios */
	printf("El tipo int tiene un tamanio de: %zd bytes.\n", sizeof(int));
	printf("El tipo char tiene un tamanio de: %zd bytes.\n", sizeof(char));
	printf("El tipo long tiene un tamanio de: %zd bytes.\n", sizeof(long));
	printf("El tipo long long tiene un tamanio de: %zd bytes.\n", sizeof(long long));
	printf("El tipo double tiene un tamanio de: %zd bytes\n", sizeof(double));
	printf("El tipo long double tiene un tamanio de: %zd bytes\n", sizeof(long double));
	return 0;
}

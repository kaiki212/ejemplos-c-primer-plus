/* altnames.c -- nombres protables para tipos enteros */
#include <stdio.h>
#include <inttypes.h>
int main(void)
{
	int32_t me32;		//me32_t es una variable con signo de 32 bit

	me32 = 45933945;
	printf("Primeor, asume int32_t es un int: ");
	printf("me32 = %d\n", me32);
	printf("Siguiente, no asumiremos nada. \n");
	printf("En su lugar, usaremos un \"macro\" de los inttypes.h: ");
	printf("me32 = % " PRId32 "\n", me32);

	return 0;

}


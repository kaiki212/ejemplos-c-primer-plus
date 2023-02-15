/* bases.c-- imprime 100 en decimal, octal y hexadecimal */

#include <stdio.h>

int main(void)
{
	int x=100;

	printf("decimal = %d: octal = %o; hexa = %x\n", x, x, x);
	printf("decimal = %d; octal = %#o; hexa = %#x\n", x, x, x);

	return 0;
}

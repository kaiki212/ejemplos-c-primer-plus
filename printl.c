/*printl.c- muestra algunas propiedades de printf() */

#include <stdio.h>

int main (void)
{
	int ten = 10;
	int two = 2;

	printf("Haciendo lo correcto: ");
	printf("%d menos %d es %d\n", ten, 2, ten - two);

	printf("Haciendolo mal: ");
	printf("%d menos %d es %d\n",ten); //olvidamos 2 argumentos

	return 0;

}

/* charcode.c-- muestra el nuemero de codigo de un caracter */
#include <stdio.h>
int main(void)
{
	char ch;

	printf("porfavor introduce un caracter: \n");
	scanf("%c", &ch);	/*el usuario introduce un caracter*/
	printf("el codigo para %c es %d.\n", ch, ch);

	return 0;
}

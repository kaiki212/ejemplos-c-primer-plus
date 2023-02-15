/* badcount.c -- recuento de argumentos incorrectos */
#include <stdio.h>
int main(void)
{
	int n = 4;
	int m = 5;
	float f = 7.0f;
	float g = 8.0f;

	printf("%d\n",n,m);		/*demasiados argumentos*/
	printf("%d %d %d\n",n);		/*muy pocos argumentos*/
	printf("%d %d \n", f, g);	/*tipo de valores equivocados*/

	return 0;
}


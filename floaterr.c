/* floaterr.c -- demuestra un error de redondeo */
#include <stdio.h>
int main(void)
{
	float a,b;
	
	b = 2.0e20 + 1.0;
	a = b - 2.0e20;
	printf("b = %f  a = %f \n",b , a);

	return 0;
}

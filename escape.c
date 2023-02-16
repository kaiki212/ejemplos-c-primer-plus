/* escape.c -- usa caracteres de escape */
#include <stdio.h>
int main(void)
{
	float salary;

	printf("\a introduzca su salario mensual deseado: ");	/* 1 */
	printf(" $_______\b\b\b\b\b\b\b");			/* 2 */
	scanf("%f",&salary);
	printf("\n\t %.2f por mes es $ %.2f por anio.", salary, salary*12.0);/*3*/
	printf("\r Vaya!\n");					/* 4 */

	return 0;

}

/*convierte tu altura de cm a pulgadas*/
#include <stdio.h>

int main(void)
{
	int altura;
	double alt_pulgadas;

	printf("dime tu altura en centimetros: ");
	scanf("%d", &altura);
	alt_pulgadas = altura/2.54;
	printf("Tu altura en pulgadas es: %f", alt_pulgadas);

	return 0;
}

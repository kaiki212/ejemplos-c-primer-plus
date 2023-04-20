#include <stdio.h>

int main(void)
{
	float num;
	
	printf("Ingresa un numero en coma flotante: ");
	scanf("%f", &num);
	printf("\nnotacion decimal de coma flotante:  %.6f\n",num);
	printf("Notacion exponencial: %e\n",num);
	printf("Notacion p: %a\n", num);

	return 0;

}

#include <stdio.h>
int main(void)
{
	int recibido;
	
	printf("Escriba un valor: \n");
	scanf("%d", &recibido);
	printf("El valor que escribio: %d representa el simbolo %c en ascii\n",
			recibido, recibido);
	return 0;
}

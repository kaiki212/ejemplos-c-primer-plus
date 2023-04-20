#include <stdio.h>

int main(void)
{
	int cuartos;
	long long int moleculas;

	printf("Introduzca la cantidad de agua en cuartos: \n");
	scanf("%d", &cuartos);
	moleculas = (long long int)cuartos*950*4/3/3.0e-23;


	printf("El numero de moleculas del agua es: %lld", moleculas);

	return 0;
	
}

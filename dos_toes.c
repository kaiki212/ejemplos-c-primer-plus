/*programa que dice el numero de dedos y muestra cuanto es el doble y cuanto el cuadrado*/

#include <stdio.h>

int main(void)
{
	int dedos;
	int d_doble;
	int d_cuadrado;

	dedos = 10;
	d_doble = dedos*2;
	d_cuadrado = dedos*dedos;

	printf("dedos= %d; doble de dedos= %d; cuadrado de dedos= %d", dedos, d_doble, d_cuadrado);
}

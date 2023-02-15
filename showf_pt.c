/* show_pt.c -- muestra valores float de 2 distintas maneras */
#include <stdio.h>
int main(void)
{
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;

	printf("%f puede ser escrito como: %e\n",aboat, aboat);
	//la siguiente linea requiere c99 o compiladores mas recientes
	printf("Y es %a en hexadecimal, notacion de potencia 2\n", aboat);
	printf("%f puede ser escrito como %e\n", abet, abet);
	printf("%Lf puede ser escirto como %Le\n", dip, dip);

	return 0;
}

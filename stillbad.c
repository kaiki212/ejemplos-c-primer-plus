/*stillbad.c -- un programa con suss errores de sintaxis arreglados*/
#include <stdio.h>
int main(void)
{
	int n, n2, n3;
	
	//este programa tiene un error semantico
	n=5;
	n2=n*n;
	n3=n2*n2;
	printf("n= %d, cuadarado de n= %d, cubo de n= %d\n", n, n2, n3);

	return 0;
}

/*este programa imprime el nombre de varios paises usando varias funciones*/
#include <stdio.h>

void br(void);
void ic(void);

int main(void)
{
	br();
	ic();
	printf("\n");
	ic();
	printf("\n");
	br();

	return 0;
}

void br(void)
{
	printf("Brazil, Russia ");
}

void ic(void)
{
	printf("India, China ");
}

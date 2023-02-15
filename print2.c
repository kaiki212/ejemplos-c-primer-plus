/* print2.c-- mas propiedades de printf() */

#include <stdio.h>
int main(void)
{
	unsigned int un = 3000000000; 	/*sistema con int de 32-bit*/
	short end = 200;		/*y un short de 16-bit*/
	long big = 65537;
	long long verybig = 12345678908642;

	printf("un = %u and not %d\n", un ,un);
	printf("end = %hd and %d\n",end, end );
	printf("big = %ld and not %hd\n", big, big);
	printf("verybig = %lld and not %ld\n", verybig, verybig);

	return 0;
					
}

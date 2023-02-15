//* two_func.c -- a program using two functions in one file 
#include <stdio.h>
void butler(void);
int main(void)
{
	printf("voy a invocar la funcion butler. \n");
	butler();
	printf("Si, traeme te y DVDs escribibles. \n ");

	return 0;
}

void butler(void)		/* inicio de una definicion de funcion */
{
	printf("Me llamo, senior? \n");
}

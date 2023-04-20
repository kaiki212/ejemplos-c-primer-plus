/*programa para ver el volumen de pintas, tazas,etc*/
#include <stdio.h>

float taza_aPinta(float);
float taza_aOnza(float);
float onza_aCucharada(float);
float cucharada_aCucharadita(float);

int main(void)
{
	float pinta;
	float taza;
	float onza;
	float cuchara;
	float cucharadita;

	printf("Introduzca la cantidad de tazas: ");
	scanf("%f", &taza);
	pinta = taza_aPinta(taza);
	onza = taza_aOnza(taza);
	cuchara = onza_aCucharada(onza);
	cucharadita = cucharada_aCucharadita(cuchara);
	printf("\nEquivale a: %f pintas", pinta);
	printf("\nEquivale a: %f onzas", onza);
	printf("\nEquivale a: %f cucharadas", cuchara);
	printf("\nEquivale a: %f cucharaditas", cucharadita);

	return 0;
}

float taza_aPinta(float taza)
{
	float pinta;
	
	pinta = (taza*1)/2;

	return pinta;
}

float taza_aOnza(float taza)
{
	float onza;

	onza = (taza*8);

	return onza;
}

float onza_aCucharada(float onza)
{
	float cucharada;

	cucharada = (onza*2);

	return cucharada;
}

float cucharada_aCucharadita(float cucharada)
{
	float cucharadita;

	cucharadita = (cucharada*3);

	return cucharadita;
}
	


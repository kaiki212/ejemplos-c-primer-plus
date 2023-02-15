/*platinum.c --tu peso en platino*/
#include <stdio.h>

int main(void)
{
	float peso;		/*peso del usuario	*/
	float valor;		/*equivalente en platino*/

	printf("Cuanto vale tu peso en platino?\n");
	printf("Vamos a comprobarlo\n");
	printf("Por favor introduce tu peso en libras");

	/*obtener entrada del usuario*/
	scanf("%f", &peso);
	/*asumimos que el platino esta a 1700 por onza*/
	/*14.5833 convierte libras avd a onzas troy*/
	valor=1700.0 * peso * 14.5833;
	printf("tu peso en platino vale $%.2f. \n", valor);
	printf("Vales facilmente eso! Si los precios del platino bajan,\n");
	printf("come mas para mantener tu valor. \n");

	return 0;

}

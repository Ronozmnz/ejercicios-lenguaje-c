#include <stdio.h>

int main() {
	
	int edad1, edad2, diferencia;
	
	printf("-- Calculadora de Diferencia de Edad --\n");
	
	printf("Ingrese la edad de la primera persona: ");
	scanf("%d", &edad1);
	
	printf("Ingrese la edad de la segunda persona: ");
	scanf("%d", &edad2);
	
	// Evaluamos quien es mayor para hacer la resta correctamente
	if (edad1 > edad2) {
		diferencia = edad1 - edad2;
		printf("\nLa primera persona es mayor por %d años.\n", diferencia);
	} 
	else if (edad2 > edad1) {
		diferencia = edad2 - edad1;
		printf("\nLa segunda persona es mayor por %d años.\n", diferencia);
	} 
	else {
		printf("\nAmbas personas tienen la misma edad. La diferencia es 0.\n");
	}	
	
	return 0;
}


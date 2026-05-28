#include <stdio.h>

int main() {
	
	float nota;
	
	do {
		printf("Ingrese la nota del examen (01-20): ");
		scanf("%f", &nota);
		
		if (nota <= 0 || nota > 20) {
			printf("\nError: La nota debe estar entre 01 y 20. Intente de nuevo.\n\n");			
		}		
		
	} while (nota <= 0 || nota > 20);
	
	printf("\nNota registrada con exito: %.2f\n", nota);	
	return 0;
}


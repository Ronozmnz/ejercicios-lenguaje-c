// Leer 2 cadenas y colocarlos en orden alfabético. Sabemos que usando Stremp,
// si el resultado es cero son iguales. si es mayo que cero esta primera
// alfabeticamente y si es menor que cero esta segunda alfabeticamente.

#include <stdio.h>
#include <string.h>

int main() {
	char cadena1[50], cadena2[50];
	int resultado;
	
	printf("Ingrese la primera cadena: ");
	scanf(" %[^\n]s", cadena1);
	
	printf("Ingrese la segunda cadena: ");
	scanf(" %[^\n]s", cadena2);
	
	resultado = strcmp(cadena1, cadena2);
	
	if (resultado < 0) {
        printf("Cadenas Ordenadas alfabéticamente:\n");
        printf("1. %s\n", cadena1);
        printf("2. %s\n", cadena2);		
	} else if (resultado > 0) {
		printf("Cadenas Ordenadas alfabéticamente:\n");
        printf("1. %s\n", cadena2);
        printf("2. %s\n", cadena1);
	} else {
		printf("Las cadenas son iguales.\n");
	}
	
	return 0;
}
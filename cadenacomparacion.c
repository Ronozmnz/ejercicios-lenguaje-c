#include <stdio.h>
#include <string.h> // Obligatorio para usar strlen, strcmp y strcpy

int main() {
	// Declaramos las dos cadenas principales y una tercera para la copia
	char cad1[50], cad2[50], cadCopia[50];
	int resultadoComparacion;
	
	printf("--- Ejercicio de Cadenas (string.h) ---\n\n");
	
	// ==========================================
	// 1. LEER LAS 2 CADENAS
	// ==========================================
	printf("Ingrese la primera cadena: ");
	scanf(" %[^\n]s", cad1); // El espacio inicial evita problemas de buffer
	
	printf("Ingrese la segunda cadena: ");
	scanf(" %[^\n]s", cad2);
	
	// ==========================================
	// 2. MOSTRAR EL TAMAÑO (strlen)
	// ==========================================
	// strlen devuelve un entero con la cantidad de caracteres
	printf("\n[Tamano]");
	printf("\nEl tamano de la cadena 1 es: %d caracteres.", (int)strlen(cad1));
	printf("\nEl tamano de la cadena 2 es: %d caracteres.\n", (int)strlen(cad2));
	
	// ==========================================
	// 3. COMPARAR LAS DOS CADENAS (strcmp)
	// ==========================================
	/* strcmp compara caracter por caracter. 
	Si devuelve 0, es porque son EXACTAMENTE iguales.
	Ojo: distingue entre mayúsculas y minúsculas (Hola != hola). */
	resultadoComparacion = strcmp(cad1, cad2);
	
	printf("\n[Comparacion]");
	if (resultadoComparacion == 0) {
		printf("\nLas dos cadenas son iguales.");
	} else {
		printf("\nLas cadenas son diferentes.");
	}
	
	// ==========================================
	// 4. COPIAR UNA CADENA EN OTRA (strcpy)
	// ==========================================
	// La sintaxis es: strcpy(destino, origen);
	// Vamos a copiar lo que tiene cad1 dentro de cadCopia
	strcpy(cadCopia, cad1);
	
	printf("\n\n[Copia]");
	printf("\nSe ha copiado la cadena 1 en una nueva variable.");
	printf("\nContenido de cadCopia: %s\n", cadCopia);
	
	return 0;
}

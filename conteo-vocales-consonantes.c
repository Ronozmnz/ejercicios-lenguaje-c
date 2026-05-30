// Contar cuántas vocales y cuántas consonantes tiene una frase.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char cadena[50];
    int vocales = 0, consonantes = 0, i, longitud;
    char c;

    printf("--- Contador de Vocales y Consonantes ---\n");
    printf("Ingrese una palabra o frase: ");
    // El formato %[^\n]s permite leer espacios hasta presionar Enter
    scanf(" %[^\n]s", cadena);

    // Guardamos la longitud en una variable para no calcularla en cada iteración
    longitud = strlen(cadena);

    for (i = 0; i < longitud; i++) {
        c = tolower(cadena[i]);

        // Verificamos si es una letra (evitando contar espacios o números o caracteres especiales)
        if (isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vocales++;
            } else {
                consonantes++;
            }
        }
    }

    printf("\nResultados para: \"%s\"\n", cadena);
    printf("Numero de vocales: %d\n", vocales);
    printf("Numero de consonantes: %d\n", consonantes);

    return 0;
}

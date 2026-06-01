// Leer una cadena y comprobar si es "polindrome" (se lee igual de izquierda a derecha que de derecha a izquierda).
// Ejemplo: "anilina" es un palíndromo, mientras que "hola" no lo es.
// Debe invertir la cadena y compararla con la original para determinar si es un palíndromo.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Función para invertir cadena de forma portable (estándar ANSI C) obvio esto lo vemos mas adelante en el curso
// Pero para que vayemos como se declaran las funciones en C.

void invertir(char *str) {
    int i, j;
    char temp;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char cadena1[100];
    char cadena2[100];

    printf("Ingrese una cadena: ");
    // Usamos %[^\n] para permitir frases con espacios y limitamos a 99 caracteres para evitar desbordamiento de buffer.
    scanf(" %99[^\n]s", cadena1); 

    // usamos el strncpy para copiar la cadena original a cadena2, asegurándonos de no exceder el tamaño del buffer.
    strncpy(cadena2, cadena1, sizeof(cadena2) - 1);

    // Aseguramos que la cadena copiada esté terminada en null para evitar problemas de seguridad.
    cadena2[sizeof(cadena2) - 1] = '\0'; 

    invertir(cadena2); // Invertimos la cadena copiada para comparar con la original.
    
    // mostramos ambas cadenas para verificar visualmente el resultado de la inversión.
    printf("Original: %s\n", cadena1);
    printf("Invertida: %s\n", cadena2);

    // Comparamos las cadenas original e invertida para determinar si es un palíndromo.
    if (strcmp(cadena1, cadena2) == 0) {
        printf("La cadena es un palíndromo.\n");
    } else {
        printf("La cadena no es un palíndromo.\n");
    }

    return 0;
}
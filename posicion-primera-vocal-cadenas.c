// Programa en C para encontrar la posición de la primera vocal en una cadena de texto

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char cadena[20];
    int i, posicion, encontrado = 0;

    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    cadena[strcspn(cadena, "\n")] = '\0';

    for (i = 0; i < strlen(cadena) && encontrado != 1; i++) {
        cadena[i] = tolower(cadena[i]);

        if (cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' ||
            cadena[i] == 'o' || cadena[i] == 'u') {
            posicion = i;
            encontrado = 1;
        }
    }

    if (posicion == 1) {
        printf("La primera vocal se encuentra en la posición: %d\n", posicion+1);
    } else {
        printf("No se encontraron vocales en la cadena.\n");
    }

    return 0;
}
// funciones o procedimientos en C.
// 1 - Prototipo (antes del main).
// 2 - Llamado o invocacion (dentro del main).
// 3 - Desarrollo de la funcion. 

#include <stdio.h>

void llenar_vector(int notas[], int tam); // Prototipo de la función para llenar el vector de notas.
void mostrar_vector(int notas[], int tam); // Prototipo de la función para mostrar el vector de notas.

int main() {
    
    int tam = 10; // Tamaño del vector de notas.
    int notas[tam]; // Declaración del vector de notas.

    // 2 - Llamado o invocación de la función para llenar el vector de notas.

    llenar_vector(notas, tam); // Llenamos el vector de notas con los datos ingresados por el usuario.
    mostrar_vector(notas, tam); // Mostramos el vector de notas para verificar que se haya llenado correctamente.

    return 0;
}

// 3 - Desarrollo de la función para llenar el vector de notas.
void llenar_vector(int notas[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("Ingrese la nota del alumno %d: ", i + 1);
        scanf("%d", &notas[i]); // Leemos la nota ingresada por el usuario y la almacenamos en el vector.
    }
}

// Desarrollo de la función para mostrar el vector de notas.
void mostrar_vector(int notas[], int tam) {
    printf("Vector de notas:\n");
    for (int i = 0; i < tam; i++) {
        printf("Alumno %d: %d\n", i + 1, notas[i]);
    }
}

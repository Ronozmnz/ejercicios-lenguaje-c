// funciones o procedimientos en C.

// Realizar un programa que permita ingresar las notas de 10 alumnos, almacenarlas en un vector
// y luego mostrar el vector de notas.

#include <stdio.h>

void llenar_vector(int notas[], int tam); // Prototipo de la función para llenar el vector de notas.
void mostrar_vector(int notas[], int tam); // Prototipo de la función para mostrar el vector de notas.
void mostrar_aprobados(int notas[], int tam); // Prototipo de la función para mostrar los alumnos aprobados.
void mostrar_noaprobados(int notas[], int tam); // Prototipo de la función para mostrar los alumnos no aprobados.

int main() {
	
	int tam = 10; // Tamaño del vector de notas.
	int notas[tam]; // Declaración del vector de notas.
	
	llenar_vector(notas, tam); // Llenamos el vector de notas con los datos ingresados por el usuario.
	mostrar_vector(notas, tam); // Mostramos el vector de notas para verificar que se haya llenado correctamente.
	mostrar_aprobados(notas, tam); // Mostramos los alumnos aprobados.
	mostrar_noaprobados(notas, tam); // Mostramos los alumnos no aprobados.
	
	return 0;
}

// Desarrollo de la función para llenar el vector de notas y si la persona pone un numero mayor a 20 o menor a 0.
// Se le mostrara un mensaje de error y se le pedira que ingrese una nota valida.

void llenar_vector(int notas[], int tam) {
	for (int i = 0; i < tam; i++) {
		printf("Ingrese la nota del alumno %d: ", i + 1);
		scanf("%d", &notas[i]); // Leemos la nota ingresada por el usuario y la almacenamos en el vector.
		while (notas[i] < 1 || notas[i] > 20) {
			printf("Nota inválida. Ingrese una nota entre 1 y 20: ");
			scanf("%d", &notas[i]);
		}
	}
}

// Desarrollo de la función para mostrar el vector de notas.
void mostrar_vector(int notas[], int tam) {
	printf("\nVector de notas:\n");
	for (int i = 0; i < tam; i++) {
		printf("Alumno %d: %d\n", i + 1, notas[i]);
	}
}

// Desarrollo de la función para mostrar los alumnos aprobados.
void mostrar_aprobados(int notas[], int tam) {
	printf("\nAlumnos aprobados (nota >= 12):\n");
	for (int i = 0; i < tam; i++) {
		if (notas[i] >= 12) { // Consideramos aprobado a un alumno con nota mayor o igual a 12.
			printf("Alumno %d: %d\n", i + 1, notas[i]);
		}
	}
}

// Desarrollo de la función para mostrar los alumnos no aprobados.

void mostrar_noaprobados(int notas[], int tam) {
	printf("\nAlumnos no aprobados (nota < 12):\n");
	for (int i = 0; i < tam; i++) {
		if (notas[i] < 12) { // Consideramos no aprobado a un alumno con nota menor a 12.
			printf("Alumno %d: %d\n", i + 1, notas[i]);
		}
	}
}
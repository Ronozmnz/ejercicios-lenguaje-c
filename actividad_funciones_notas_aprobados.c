// funciones o procedimientos en C.

// Realizar un programa que permita ingresar las notas de 10 alumnos, almacenarlas en un vector
// y luego mostrar el vector de notas.

#include <stdio.h>

void llenar_vector(int notas[], int tam); // Prototipo de la función para llenar el vector de notas.
void mostrar_vector(int notas[], int tam); // Prototipo de la función para mostrar el vector de notas.
void mostrar_aprobados(int notas[], int tam); // Prototipo de la función para mostrar los alumnos aprobados.
void mostrar_noaprobados(int notas[], int tam); // Prototipo de la función para mostrar los alumnos no aprobados.
void calcular_promedio(int notas[], int tam); // Prototipo de la función para calcular el promedio de las notas.
void buscar_nota_mas_alta(int notas[], int tam); // Prototipo de la función para buscar la nota más alta.
void contar_excelentes(int notas[], int tam); // Prototipo de la función para contar el número de alumnos con nota excelente (nota >= 18).

int main() {
	
	int tam = 10; // Tamaño del vector de notas.
	int notas[tam]; // Declaración del vector de notas.
	
	llenar_vector(notas, tam); // Llenamos el vector de notas con los datos ingresados por el usuario.
	mostrar_vector(notas, tam); // Mostramos el vector de notas para verificar que se haya llenado correctamente.
	mostrar_aprobados(notas, tam); // Mostramos los alumnos aprobados.
	mostrar_noaprobados(notas, tam); // Mostramos los alumnos no aprobados.
	calcular_promedio(notas, tam); // Calculamos y mostramos el promedio de las notas.
	buscar_nota_mas_alta(notas, tam); // Buscamos y mostramos la nota más alta.
	contar_excelentes(notas, tam); // Contamos y mostramos el número de alumnos con nota excelente.
	
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

// Desarrollo de la función para calcular el promedio de las notas.
void calcular_promedio(int notas[], int tam) {
	int suma = 0; // Variable para almacenar la suma de las notas.
	for (int i = 0; i < tam; i++) {
		suma += notas[i]; // Sumamos cada nota al total.
	}
	float promedio = (float)suma / tam; // Calculamos el promedio dividiendo la suma entre el número de alumnos.
	printf("\nPromedio de las notas: %.2f\n", promedio); // Mostramos el promedio con dos decimales.
}

// Desarrollo de la función para buscar la nota más alta.
void buscar_nota_mas_alta(int notas[], int tam) {
	int nota_mas_alta = notas[0]; // Inicializamos la nota más alta con la primera nota del vector.
	for (int i = 1; i < tam; i++) {
		if (notas[i] > nota_mas_alta) { // Comparamos cada nota con la nota más alta actual.
			nota_mas_alta = notas[i]; // Si encontramos una nota más alta, la actualizamos.
		}
	}
	printf("\nLa nota más alta es: %d\n", nota_mas_alta); // Mostramos la nota más alta encontrada.
}

// Desarrollo de la función para contar el número de alumnos con nota excelente (nota >= 18).
void contar_excelentes(int notas[], int tam) {
	int cont_excelentes = 0; // Variable para contar los alumnos con nota excelente.
	for (int i = 0; i < tam; i++) {
		if (notas[i] >= 18) { // Consideramos excelente a un alumno con nota mayor o igual a 18.
			cont_excelentes++; // Incrementamos el contador de alumnos excelentes.
		}
	}
	printf("\nNúmero de alumnos con nota excelente (>= 18): %d\n", cont_excelentes); // Mostramos el número de alumnos excelentes.
}
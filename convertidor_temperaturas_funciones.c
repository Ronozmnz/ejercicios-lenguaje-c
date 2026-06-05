// Crear una funcion de grados celcius a fahrenheit y que reciba un dato
// de tipo float y retorne un float.

// Validor de rangos: necesitamos crear una funcion que reciba 3 enteros
// un numero, un limite inferior y un limite superior. La funcion debe
// retornar 1 que es verdadero y si es 0 es falso.

#include <stdio.h>

float celsius_a_fahrenheit(float celsius); // Prototipo corregido a float
int validar_rango(int numero, int limite_inferior, int limite_superior); // Prototipo corregido para retornar int

int main() {
    float celsius, fahrenheit;
    int numero, limite_inferior, limite_superior;

    // Solicitar al usuario que ingrese un valor en grados Celsius.
    printf("Ingrese la temperatura en grados Celsius: ");
    scanf("%f", &celsius);

    // Convertir la temperatura a Fahrenheit.
    fahrenheit = celsius_a_fahrenheit(celsius);
    printf("%.2f grados Celsius son %.2f grados Fahrenheit.\n", celsius, fahrenheit);
    

    // Solicitar al usuario que ingrese un número y los límites del rango.
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    printf("Ingrese el límite inferior del rango: ");
    scanf("%d", &limite_inferior);
    printf("Ingrese el límite superior del rango: ");
    scanf("%d", &limite_superior);


    // Validar si el número está dentro del rango especificado.
    if (validar_rango(numero, limite_inferior, limite_superior)) {
        printf("El número %d está dentro del rango [%d, %d].\n", numero, limite_inferior, limite_superior);
    } else {
        printf("El número %d está fuera del rango [%d, %d].\n", numero, limite_inferior, limite_superior);
    }

    return 0;
}

// Desarrollo de la función para convertir grados Celsius a Fahrenheit.
float celsius_a_fahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

// Desarrollo de la función para validar el rango de un número.
int validar_rango(int numero, int limite_inferior, int limite_superior) {
    if (numero >= limite_inferior && numero <= limite_superior) {
        return 1; // Verdadero
    } else {
        return 0; // Falso
    }
}
#include <stdio.h>

int main() {
	
	int numero = 0, suma = 0;
	
	printf("Ingresa numeros para sumar (pon un numero negativo para salir):\n");
	
	while (numero >= 0){
		suma = suma + numero;
		printf("\nSuma actual: %d.\n \nSiguente numero: ", suma);
		scanf("%d", &numero);	
	}
	
	printf("\nBucle terminado. La suma total fue: %d\n\n", suma);
	
	return 0;
}


#include <stdio.h>

#include <stdio.h>

int main() {
	char opcion;
	int cantidad;
	float precio, total;
	
	printf("--- TIENDA DE TECNOLOGIA ---\n");
	printf("M. Mouse ($15)\n");
	printf("T. Teclado ($25)\n");
	printf("A. Audifonos ($40)\n");
	printf("\nSeleccione la letra del producto: ");
	
	// NOTA: El espacio antes de %c es vital para limpiar el "Enter" anterior
	scanf(" %c", &opcion);
	
	printf("Ingrese la cantidad que desea llevar: ");
	scanf("%d", &cantidad);
	
	switch(opcion) {
	case 'M':
	case 'm': // Agregamos minúscula para que el programa sea más robusto
		precio = 15.0;
		printf("\nHas seleccionado: Mouse\n");
		break;
		
	case 'T':
	case 't':
		precio = 25.0;
		printf("\nHas seleccionado: Teclado\n");
		break;
		
	case 'A':
	case 'a':
		precio = 40.0;
		printf("\nHas seleccionado: Audifonos\n");
		break;
		
	default:
		printf("\nError: Producto no reconocido.\n");
		return 1; // Finaliza el programa porque no hay precio que calcular
	}
	
	// Cálculo final
	total = precio * cantidad;
	
	printf("Precio unitario: $%.2f\n", precio);
	printf("Cantidad: %d\n", cantidad);
	printf("---------------------------\n");
	printf("TOTAL A PAGAR: $%.2f\n", total);
	
	return 0;
}


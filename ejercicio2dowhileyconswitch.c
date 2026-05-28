#include <stdio.h>

int main() {
	char opcion;
	int cantidad;
	float precio = 0, totalpagar = 0;
	
	do{
		printf("\n-- MENU DE VENTAS --");
		printf("\nA. Jugo ($1.5)");
		printf("\nB. Empanada ($1.0)");
		printf("\nC. Agua ($0.5)");
		printf("\nX. Finalizar venta y salir");
		printf("\n\nSeleccione una opcion: ");
		
		scanf(" %c", &opcion);
		
		switch(opcion) {
		case 'A': case 'a':
			precio = 1.5;			
			printf("Cuantos jugos quiere?: ");
			while (scanf("%d", &cantidad) != 1) {
				printf("\n[ERROR] Solo se permiten numeros. Intente de nuevo: ");				
				while (getchar() != '\n'); 
			}
			totalpagar += (precio * cantidad);
			break;
			
		case 'B': case 'b':
			precio = 1.0;
			printf("Cuantas empanadas quiere?: ");
			while (scanf("%d", &cantidad) != 1) {
				printf("\n[ERROR] Solo se permiten numeros. Intente de nuevo: ");				
				while (getchar() != '\n'); 
			}
			totalpagar += (precio * cantidad);
			break;
			
		case 'C': case 'c':
			precio = 0.5;
			printf("Cuantas aguas quiere?: ");
			while (scanf("%d", &cantidad) != 1) {
				printf("\n[ERROR] Solo se permiten numeros. Intente de nuevo: ");				
				while (getchar() != '\n'); 
			}
			totalpagar += (precio * cantidad);
			break;	
			
		case 'X': case 'x':			
			printf("\nProcesando pedido...");			
			break;	
			
		default:
			printf("\n[ERROR] Opcion no valida. Intente de nuevo.\n");
		}
		
	} while (opcion != 'X' && opcion != 'x');
	
	printf("\n----------------------------");
	printf("\nTOTAL A PAGAR: $%.2f", totalpagar);
	printf("\nGracias por tu compra!");
	printf("\n----------------------------\n");
	
	return 0;
}


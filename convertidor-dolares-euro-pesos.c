#include <stdio.h>

int main() {
	
	float bolivares, resultado;
	int opciones;
	
	printf("Hola bienvenido! Al convertidor de Dolares, Euros y Pesos Colombianos\n");
	printf("\nQue cantidad de Bolivares (Bs) tiene disponible: ");
	scanf("%f", &bolivares);
	
	printf("\nSeleccione la moneda que quiera convertir (1: Dolares, 2: Euros, 3: Pesos Colombianos): ");
	scanf("%d", &opciones);
	
	switch(opciones) {
	case 1:
		printf("\nLa cantidad de: %.2f Bolivares.", bolivares);
		resultado = bolivares / 478.58;
		printf("\nEn dolares son: %.2f Dolares.", resultado);		
		break;
	case 2:
		printf("\nLa cantidad de: %.2f Bolivares.", bolivares);
		resultado = bolivares / 564.97;
		printf("\nEn Euros son: %.2f Euros.", resultado);
		break;
	case 3:
		printf("\nLa cantidad de: %.2f Bolivares.", bolivares);
		resultado = bolivares * 7.53;
		printf("\nEn Pesos Colombianos son: %.2f Pesos Colombianos.", resultado);
		break;
	default:
		printf("Error elige entre las 3 opciones");
		break;		
	}	
	return 0;
}


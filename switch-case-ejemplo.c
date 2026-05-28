#include <stdio.h>

int main() {
	int opciones;
	
	printf("Selecciona tu linea (1: TOP, 2: Jungla, 3: MID, 4: ADC, 5: Support): ");
	scanf("%d", &opciones);	
	
	switch(opciones) {
		case 1:	
			printf("Has elegido TOP. bro eres un psicopata bro");
			break;
		case 2:
			printf("Has elegido Jungla. Activate para los objetivos boludo!");
			break;
		case 3:
			printf("Has elegido MID. Acabas de elegir la linea mas dificil bro suerte eyeye");
			break;	
		case 4:
			printf("Has elegido ADC. Farmea mi loco!");
			break;
		case 5:
			printf("Has elegido Support. Activo con los wards mi loco!");
			break;		
		default:
			printf("Opcion no valida. Usa numeros elige entre 1 hasta 5");
			break;
	}	
	return 0;
}


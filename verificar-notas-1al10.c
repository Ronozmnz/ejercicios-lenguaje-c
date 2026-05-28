#include <stdio.h>

int main() {
	
	int notas;
	
	printf("Ingrese su nota (entre 1 hasta 10): ");
	scanf("%d", &notas);
	
	switch(notas) {
	case 10:
		printf("Su nota es Excelente.");
		break;
	case 9:
		printf("Su nota es Excelente.");
		break;
	case 8:
		printf("Su nota es Bueno.");
		break;
	case 7:
		printf("Su nota es Bueno.");
		break;
	case 6:
		printf("Su nota es Regular.");
		break;
	case 5:
		printf("Su nota es Regular.");
		break;
	case 4:
		printf("Su nota es Reprobado.");
		break;
	case 3:
		printf("Su nota es Reprobado.");
		break;
	case 2:
		printf("Su nota es Reprobado.");
		break;
	case 1:
		printf("Su nota es Reprobado.");
		break;
	default:
		printf("Ingrese una nota del 1 al 10.");
		break;		
	}	
	return 0;
}


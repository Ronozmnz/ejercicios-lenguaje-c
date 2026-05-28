#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int num = -1; // Le damos un valor inicial para que pueda entrar al bucle
	
	while (num != 0) {
		printf("Introduce un numero (0 para salir): ");
		scanf("%d", &num);
		
		if (num != 0) {
			printf("Escribiste el %d. ¡Seguimos!\n", num);
		}
	}
	
	printf("¡Fin del bucle! Elegiste el cero.\n");
	
	
	return 0;
}


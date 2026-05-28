#include <stdio.h>

// Examen 4

// Almacen tiene 1000 piezas que descontar y es un menu.

int main() {
	
	int opcion, inventario = 1000, venta;
	
	do{
	
	printf("\n-- Almacen --\n");
	printf("\n1- Inventario\n");
	printf("2- Venta\n");
	printf("3- Salir\n");
	
	printf("\nSeleccione una de las 3 opciones: ");
	scanf("%d", &opcion);
	
	switch(opcion){
	case 1:
		printf("\nTienes %d piezas disponibles para vender.\n", inventario);
		break;
	case 2:
		do{
		printf("\nCuantas piezas deseas vender?: ");
		scanf("%d", &venta);
		
		if (venta <= inventario){
			inventario = inventario - venta;
		}
		
		else if (venta >= inventario){
			printf("\nTienes %d piezas disponibles debes de colocar un monto menor a %d piezas.\n", inventario, inventario);
		}	
		
		}while (venta >= inventario);
		break;
	case 3:
		printf("\nSaliendo......");
		break;
	}
	
	if (opcion >=4){
		printf("\n!!ERROR!! Eliga una de las 3 opciones que sale en pantalla.\n");
		
	}
	
	}while(opcion < 3 || opcion >= 4);
	
	
	return 0;
}


// Sistema de Control de Inventario Básico
// Diseña un programa que gestione el stock de un único producto (por ejemplo, "Bicicletas" o "Auriculares").
// En el main, debes tener una variable int stock = 0; y un bucle que muestre un menú con opciones.

//Crea e implementa las siguientes funciones:
// 1 - void mostrar_stock(int cantidad); -> Solo imprime el stock actual.
// 2 - int agregar_stock(int cantidad_actual, int cantidad_a_sumar); -> Suma la cantidad al stock actual.
// 3 - int vender_producto(int cantidad_actual, int cantidad_a_vender); -> Resta la cantidad vendida al stock actual y devuelve el nuevo stock.
// Si la cantidad a vender es mayor que el stock actual, muestra un mensaje de error y no realiza la venta. 

#include <stdio.h>

void mostrar_stock(int cantidad);
int agregar_stock(int cantidad_actual, int cantidad_a_sumar);
int vender_producto(int cantidad_actual, int cantidad_a_vender);

int main() {
    int stock = 0;
    int opcion;
    int cantidad;

    do {
        printf("\nMenu de Control de Inventario:\n");
        printf("1. Mostrar cuantas Bicicletas hay en Stock\n");
        printf("2. Agregar Bicicletas al Stock\n");
        printf("3. Vender Bicicletas\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                mostrar_stock(stock);
                break;
            case 2:
                printf("Ingrese la cantidad de bicicletas a agregar: ");
                scanf("%d", &cantidad);
                stock = agregar_stock(stock, cantidad);
                break;
            case 3:
                printf("Ingrese la cantidad de bicicletas a vender: ");
                scanf("%d", &cantidad);
                stock = vender_producto(stock, cantidad);
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion no valida. Intente nuevamente.\n");
        }
    } while (opcion != 4);

    return 0;
}

void mostrar_stock(int cantidad) {
    printf("Stock actual: %d\n", cantidad);
}

int agregar_stock(int cantidad_actual, int cantidad_a_sumar) {
    return cantidad_actual + cantidad_a_sumar;
}

int vender_producto(int cantidad_actual, int cantidad_a_vender) {
    if (cantidad_a_vender > cantidad_actual) {
        printf("Error: No hay suficiente stock para vender %d unidades.\n", cantidad_a_vender);
        return cantidad_actual; // No se realiza la venta, se devuelve el stock actual sin cambios.
    } else {
        return cantidad_actual - cantidad_a_vender; // Se realiza la venta, se devuelve el nuevo stock.
    }
}
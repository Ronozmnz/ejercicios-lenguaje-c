#include <stdio.h>

int main() {
	
	int numero;
	
	printf("Que tabla quiere ver?: ");
	scanf("%d", &numero);
	
	printf("\nTabla del %d:\n\n", numero);
	
	for (int i=1; i<=10; i++){
		printf("%d x %d = %d\n", numero, i, numero * i);		
	}
	
	
	return 0;
}


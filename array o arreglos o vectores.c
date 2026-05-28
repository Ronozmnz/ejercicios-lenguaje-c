#include <stdio.h>


int main() {
	
	int promedio, edadestotal = 0, cont60 = 0, cont18 = 0;	
	int edades[15];
	
	for (int i=0; i<=14; i++){
		printf("\nIngrese la edad del paciente %d: ",i+1);
		scanf("%d", &edades[i]);
		
		edadestotal = edadestotal + edades[i];
		promedio = edadestotal / 15;
		
		if (edades[i] > 60){
			cont60++;
		}
		
		else if (edades[i] < 18){
			cont18++;
		}
		
	}
	
	printf("\nEl promedio de los 15 pacientes es: %d\n", promedio);
	printf("\n\nEl total de pacientes mayores a 60 anos son: %d\n", cont60);
	printf("\n\nEl total de pacientes menores a 18 anos son: %d\n", cont18);
	
	return 0;
}


#include <stdio.h>
int numeros[] = {10, 20, 30, 40, 50}, n = 5;

int sumar(int *arr, int n) {
	int suma_funcion = 0;
	for(int i=0; i<n; i++){
		suma_funcion = suma_funcion + *(arr + i);
	}
	return suma_funcion;
}

int promedio(int *arr, int n){
	float suma_total = sumar(arr, n);
	return suma_total/n;
}

int main() {
	float suma = sumar(numeros, n);
	float prom = promedio(numeros, n);

	printf("La suma de todos los elementos del array es %f \n", suma);
	printf("El promedio de todos los elementos del array es %f \n", prom);

return 0;
}

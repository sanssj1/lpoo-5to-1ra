#include <stdio.h>
int numeros[] = {10, 20, 30, 40, 50}, n = 5;

int menor(int *arr, int n){
	int min = *arr;
	for (int i=0; i<n; i++){
		if(*(arr + i) < min){
			min = *(arr + i);
		}
	}
	return min;
}

int mayor(int *arr, int n){
	int max = *arr;
	for (int i=0; i<n; i++){
		if(*(arr + i) > max){
			max = *(arr + i);
		}
	}
	return max;
}

int main(){
	
	int min = menor(numeros, n);
	int max = mayor(numeros, n);
	
	printf("menor: %d \n", min);
	printf("mayor: %d", max);
}

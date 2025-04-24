
#include <stdio.h>
int arreglo[10], copia[10], i, n=10;

void copiarArray(int i, int *ptr);

main(){	
	for(i=0;i<n;i++){
		printf("Pone lo que quieras que este en la posicion %d, un numero: ", i);
		scanf("%d", &arreglo[i]);
	}

	for(i=0;i<n;i++){
		copiarArray(i, &arreglo[i]);
	}
	
	printf("\n\nCopia:\n");
	
	for(i=0;i<n;i++){
        printf("\nposicion %d es: %d\n", i, copia[i]);
	}
	
}

void copiarArray(int i, int *ptr){
	copia[i] = *ptr;
}

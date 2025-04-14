#include<stdio.h>
int n, i, cont = 0 ;
main(){
	printf("Ingrese un numero: ");
	scanf("%d", &n);
	
	if(n <= 1){
		printf("No es primo");
	}
	for(i=2; i<n; i++){
		if(n % i == 0){
			cont++;
		}
	}
	
	if(cont == 0){
		printf("Es primo");
	}	
	else{
		printf("No es primo");
	}
}

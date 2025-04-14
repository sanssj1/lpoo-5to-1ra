#include <stdio.h>
int n, num, i, par = 0, impar = 0;
main(){
	printf("Cuantos numeros queres ingresar? ");
	scanf("%d", &n);
	
	printf("Ingresa los numeros \n");
	for(i=0;i<n;i++){
		printf("Ingrese N° %d ", i);
		scanf("%d", &num);		
		if(num % 2 == 0){
			par++;
		}
		else{
			impar++;
		}
	}
	
	printf("La cantidad de numeros ingresada es %d \n", n);
	printf("La cantidad de numeros pares es %d \n", par);
	printf("La cantidad de numeros impares %d", impar);	
}

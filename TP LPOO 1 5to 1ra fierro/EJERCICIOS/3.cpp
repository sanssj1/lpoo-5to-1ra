#include<stdio.h>
#include<math.h>
int a, b, h;
main(){
	printf("Ingrese el valor del cateto adyacente: ");
	scanf("%d", &a);
	printf("Ingrese el valor del cateto opuesto: ");
	scanf("%d", &b);
	
	h = sqrt((a * a) + (b * b));
	
	printf("El valor de la hipotenusa es: %d", h);	
}

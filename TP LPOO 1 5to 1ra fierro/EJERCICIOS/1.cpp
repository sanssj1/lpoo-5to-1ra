#include<stdio.h>
int fechaNac, dni, dia, mes, anio;
char nombre[20], apellido[20];
main(){
	printf("Ingrese su nombre: ");
	scanf("%s", &nombre);
	printf("Ingrese su apellido: ");
	scanf("%s", &apellido);
	printf("Ingrese su fecha de nacimiento \n");
		printf("Dia: ");
		scanf("%d", &dia);
		printf("Mes: ");
		scanf("%d", &mes);
		printf("Año: ");
		scanf("%d", &anio);
	printf("Ingrese su DNI: ");
	scanf("%d", &dni);	
	
	if (anio <= 2008 || (anio == 2009 && mes <= 9)){
	    printf("Si queres podes votar");
	}
	if(anio > 2008 || (anio == 2009 && mes > 9)){
		printf("No podes votar");
	}
	
/*	if((anio <= 2006 && anio >= 1945) || (anio == 2007 && mes <= 9 && dia <= 30)){ 
		printf("Estas obligado a votar porque sos mayor de 18");
	}	
	if(anio >= 2010 || (anio == 2009 && mes > 9 && dia >30)){
		printf("No podes votar");
	}
	if(((anio >= 2009 && mes < 9) || anio <= 1945) || (anio >= 2007 && mes > 9)){
		printf("Si queres podes votar");
	}*/	
}

#include <stdio.h>
int cantidad, cantidadPares, divisores, cantidadPrimos, cantidadImpares, i, j, aux;
int numeros[100], primos[100], pares[100], impares[100];

main() {
	
    printf("Cuantos numeros quiere ingresar \n");
    scanf("%d", &cantidad);
    
    for(i = 0; i < cantidad; i++){
        printf("Numero %d: ", i+1);
        scanf("%d", &numeros[i]);
        
        if(numeros[i] % 2 == 0){
            cantidadPares++;
        } else{
            cantidadImpares++;
        }
        
        divisores = 0;
        for(j = 1; j <= numeros[i]; j++){
            if(numeros[i] % j == 0){
                divisores++;
            }
        }
        if(divisores == 2){
            cantidadPrimos++;
        }
    }

    cantidadPares = cantidadImpares = cantidadPrimos = 0;
    
    for(i = 0; i < cantidad; i++){
        if(numeros[i] % 2 == 0){
            pares[cantidadPares++] = numeros[i];
        } else{
            impares[cantidadImpares++] = numeros[i];
        }
        
        divisores = 0;
        for(j = 1; j <= numeros[i]; j++){
            if(numeros[i] % j == 0){
                divisores++;
            }
        }
        if(divisores == 2){
            primos[cantidadPrimos++] = numeros[i];
        }
    }

    for(i = 0; i < cantidadPares; i++){
        for(j = i+1; j < cantidadPares; j++){
            if(pares[i] > pares[j]){
                aux = pares[i];
                pares[i] = pares[j];
                pares[j] = aux;
            }
        }
    }

    for(i = 0; i < cantidadImpares; i++){
        for(j = i+1; j < cantidadImpares; j++){
            if(impares[i] < impares[j]){
                aux = impares[i];
                impares[i] = impares[j];
                impares[j] = aux;
            }
        }
    }

    for(i = 0; i < cantidadPrimos; i++){
        for(j = i+1; j < cantidadPrimos; j++){
            if(primos[i] > primos[j]){
                aux = primos[i];
                primos[i] = primos[j];
                primos[j] = aux;
            }
        }
    }

    printf("Primos ordenados:\n");
    for(i = 0; i < cantidadPrimos; i++){
        printf("%d", primos[i]);
       
    }

    printf("\nImpares ordenados:\n");
    for(i = 0; i < cantidadImpares; i++){
        printf("%d", impares[i]);
        
    }
    
    printf("\nPares ordenados:\n");
    for(i = 0; i < cantidadPares; i++){
        printf("%d", pares[i]);
        
    }
}

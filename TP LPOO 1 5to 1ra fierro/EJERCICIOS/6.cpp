#include <stdio.h>

int n, i, num, primos = 0, noPrimos = 0, ii;

int main() {
    printf("Cuantos numeros queres ingresar? ");
    scanf("%d", &n);

    printf("Ingresa los numeros \n");
    for (i = 0; i < n; i++) {
        printf("Ingrese N° %d ", i + 1);
        scanf("%d", &num);

        if (num <= 1) {
            noPrimos++;
        } else {
            for (ii = 2; ii < num; ii++) {
                if (num % ii == 0) {
                    noPrimos++;
                    break;
                }
            }
        }
    }

    primos = n - noPrimos;
    printf("La cantidad de numeros ingresada es %d \n", n);
    printf("La cantidad de numeros primos es %d \n", primos);
    printf("La cantidad de numeros no primos es %d\n", noPrimos);
}


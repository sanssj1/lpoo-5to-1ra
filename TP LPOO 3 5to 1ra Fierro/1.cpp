#include <stdio.h>
int x = 10, y = 20, temp;
void intercambiar(int *a, int *b) {
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    printf("Antes:\n");
    printf("a = %d, b = %d\n", x, y);

    intercambiar(&x, &y);

    printf("Después:\n");
    printf("x = %d, y = %d\n", x, y);
}

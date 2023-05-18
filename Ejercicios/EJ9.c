#include <stdio.h>

int main() {
    int vec[5];
    int i, max1, max2;
    printf("Ingrese 5 números para hallar el segundo maximo de ellos:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &vec[i]);
        printf("Número %d: ", i+1);

    max1 = vec[0];
    max2 = vec[0];
    for (i = 1; i < 5; i++) {
        if (vec[i] > max1) {
            max2 = max1;
            max1 = vec[i];
        } 
        else if (vec[i] > max2 && vec[i] < max1)
            max2 = vec[i];
    }
    printf("2do maximo: %d\n", max2);
    return 0;
}

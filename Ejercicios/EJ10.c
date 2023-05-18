#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float encontrar_valor_cercano_promedio(float vector[], int longitud) {
    float promedio = 0.0;
    for (int i = 0; i < longitud; i++) {
        promedio += vector[i];
    }
    promedio /= longitud;

    float valor_cercano = vector[0];
    float dif_minima = fabs(valor_cercano - promedio);

    for (int i = 1; i < longitud; i++) {
        float diferencia = fabs(vector[i] - promedio);
        if (diferencia < dif_minima) {
            valor_cercano = vector[i];
            dif_minima = diferencia;
        }
    }

    return valor_cercano;
}

int main() {
    float vector[7];

    printf("Ingrese 7 números:\n");
    for (int i = 0; i < 7; i++) {
        printf("Número %d: ", i+1);
        scanf("%f", &vector[i]);
    }

    float valor_cercano = encontrar_valor_cercano_promedio(vector, 7);

    printf("El valor más cercano al promedio es: %.2f\n", valor_cercano);

    return 0;
}

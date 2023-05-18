#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float encontrar_valor_normalizado(float resistencia) {
    float valores_e12[] = {1.0, 1.2, 1.5, 1.8, 2.2, 2.7, 3.3, 3.9, 4.7, 5.6, 6.8, 8.2};
    float valor_cercano = valores_e12[0];
    float dif_minima = fabs(resistencia - valor_cercano);

    for (int i = 1; i < 12; i++) {
        float diferencia = fabs(resistencia - valores_e12[i]);
        if (diferencia <= (valores_e12[i] * 0.1)) {
            valor_cercano = valores_e12[i];
            dif_minima = diferencia;
            break;
        }
        else if (diferencia < dif_minima) {
            valor_cercano = valores_e12[i];
            dif_minima = diferencia;
        }
    }

    return valor_cercano;
}

int main() {
    float resistencia;
    printf("Ingrese el valor de la resistencia: ");
    scanf("%f", &resistencia);

    float valor_normalizado = encontrar_valor_normalizado(resistencia);

    printf("El valor normalizado más cercano es: %.2f\n", valor_normalizado);

    return 0;
}

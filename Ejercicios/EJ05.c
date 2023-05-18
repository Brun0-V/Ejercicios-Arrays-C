#include <stdio.h>
#include <math.h>
#define LENGTH 10

int main()
{
    float vec[LENGTH], arimethic_avg, std_deviation;
    float sum = 0.0, sum2 = 0.0;
    printf("Ingrese %d numeros para calcular el promedio arimetico y su desvio estandar: \n", LENGTH);
    for (int i = 0; i < LENGTH; i++)
        scanf("%f", &vec[i]);

    for (int i = 1; i < LENGTH; i++)
        sum += vec[i];
    arimethic_avg = sum * 1.0/LENGTH;
    for (int i = 1; i < LENGTH; i++)
        sum2 += pow(vec[i] - arimethic_avg, 2);
    std_deviation = sqrt(sum2 * 1/LENGTH);
    printf("Promedio arimetico: %.2f\n", arimethic_avg);
    printf("Desvio estandar: %.2f\n", std_deviation);
    return 0;
}

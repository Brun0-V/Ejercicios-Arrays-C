#include <stdio.h>

int main()
{
    float notas[10], notas2[10], suma, promedio;
    int cont = 0;
    printf("Ingrese 10 notas para obtener el promedio:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Nota Nro. %d: ", i+1);
        scanf("%f", &notas[i]);
        suma += notas[i];
    }
    promedio = suma/10;
    for (int i = 0; i < 10; i++)
    {
        if (notas[i] >= promedio)
        {
            notas2[i] = notas[i];
            cont++;
        }
    }
    printf("El promedio de las notas es: %.2f", promedio);
    printf("Cantidad de notas sobre el promedio: %d\n", cont);
    printf("Notas sobre el promedio:\n");
    for (int i = 0; i < 10; i++)
    {
        if (notas2[i] != 0)
            printf("%.1f\n", notas2[i]);
    }
    return 0;
}

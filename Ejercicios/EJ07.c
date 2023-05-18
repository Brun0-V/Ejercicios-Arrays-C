#include <stdio.h>

void Bubble_Sort(float vector[], int length);

int main()
{
    float vec[10];
    printf("Ingrese 10 númerospara ordenarlos con la funcion Bubble_Sort():\n");
    for (int i = 0; i < 10; i++){
        printf("Número %d: ", i+1);
        scanf("%f", &vec[i]);
    }
    Bubble_Sort(vec, 10);
    printf("Los numeros en orden son: \n");
    for (int i = 0; i < 10; i++)
        printf("%.2f\n", vec[i]);
    return 0;
}

void Bubble_Sort(float vector[], int length)
{
    int i, j;       // Se crea una variable para el numero de pasadas (i) y otra para moverse dentro del array (j)
    float swap;     // Se crea una variable auxiliar para poder intercambiar los valores dentro del array
    for (i = 0; i < length; i++)                // Bucle externo que controla las pasadas completas a través del array
    {
        for (j = 0; j < length - i - 1; j++)    // Bucle interno que realiza las comparaciones y los intercambios en cada pasada
        {
            if (vector[j] > vector[j + 1])      // Compara el elemento actual con el siguiente elemento
            {
                swap = vector[j];               // Realiza el intercambio utilizando la variable auxiliar
                vector[j] = vector[j + 1];
                vector[j + 1] = swap;
            }
        }
    }
}

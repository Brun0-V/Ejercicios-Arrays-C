# Ejercicios Arrays / Vectores

## Bruno Vega 5º 1º Electronica

### Ejercicio 1
 1. Realizar un programa que, dado el valor de una resistencia, sea capaz de hallar el valor normalizado(comercial) más cercano, en base a la Norma IEC E12.


[Ejercicio 1](/Ejercicios/EJ01.c)
``` c
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

```

 2. Realizar un programa que sea capaz de calcular la longitud de un texto ingresado por teclado sin utilizar la función strlen().El máximo de caracteres del texto será de 50 caracteres.
 
[Ejercicio 2](/Ejercicios/EJ02.c)
``` c
#include <stdio.h>

int main()
{
    int count = 0;
    char text[50];
    printf("Ingrese un texto para saber su cantidad de caracteres (maximo 50)\n");scanf("%[^\n]", text);
    for (int i = 0; text[i] != '\0'; i++)
        count++;
    printf("El texto tine %d caracteres\n", count);
    return 0;
}
```

 3. Realizar un programa que sea capaz de calcular la longitud de un texto ingresado por teclado usando la función strlen(). El máximo de caracteres del texto será de 50 caracteres.
 
[Ejercicio 3](/Ejercicios/EJ03.c)
``` c
#include <stdio.h>

int main()
{
    char text[50];
    printf("Ingrese un texto para saber su cantidad de caracteres (maximo 50)\n");scanf("%[^\n]", text);
    printf("El texto tine %d caracteres\n", strlen(text));
    return 0;
}

```

 4. Realizar una función que sea capaz de imprimir la fecha con el siguiente formato:

    Día <sub>numero</sub>  de mes <sub>palabra</sub> de año <sub>numero</sub>

    Ejemplo: 20 de Marzo de 2020

    Dicha función recibirá el día, mes y año como tres variables numéricas diferentes. Para la impresión del mes, el programa contará con un vector de cadenas de caracteres, donde el valor del mes será la posición de su texto en el vector.
    Escribir un programa que invoque a dicha función.
    
[Ejercicio 4](/Ejercicios/EJ04.c)
``` c
#include <stdio.h>

void print_date(int day, int month, int year);

int main()
{
    int anio, mes, dia;
    printf("Ingrese el año como numero: "); scanf("%d", &anio);
    printf("Ingrese el mes como numero: "); scanf("%d", &mes);
    printf("Ingrese el dia como numero: "); scanf("%d", &dia);
    print_date(dia, mes, anio);
    return 0;
}

void print_date(int day, int month, int year)
{
    char months[][50] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    printf("%d de %s de %d\n",day, months[month-1], year);
}
```

 5. Realizar un programa que sea capaz de calcular el promedio aritmético (x̅) y el desvío estándar (σ) de una serie de 10 valores enteros ingresados por el usuario.
   $$\bar{x} = {1 \over X}. \sum_{i=1}^N x_i, \qquad \sigma = \sqrt{{1 \over X}.\sum_{i=1}^N (x_i-\bar{x})^2}$$
   
[Ejercicio 5](/Ejercicios/EJ05.c)
``` c
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

```

 6. Realizar un programa que encuentre el mínimo y el máximo de un vector de 5 números. El vector debe ser previamente cargado por el usuario.

[Ejercicio 6](/Ejercicios/EJ06.c)
``` c
#include <stdio.h>

int main()
{
    int nums[5], min, max;
    printf("Ingrese 5 numeros para encontrar el minimo y el maximo de ellos\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &nums[i]);

    max = min = nums[0];
    for (int i = 1; i < 5; i++)
    {
        if (nums[i] < min)
            min = nums[i];
        
        if (nums[i] > max)
            max = nums[i];     
    }
    printf("Numero minimo: %d\n", min);
    printf("Numero máximo: %d\n", max);
}


```

 7. Realizar un programa que permita cargar al usuario un vector de 10 números, por medio de la función Bubble_Sort() los ordene en forma creciente, y luego los imprima por pantalla. Comentar que hace cada línea de la función.
 
[Ejercicio 7](/Ejercicios/EJ07.c)
``` c
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
```

 8. Realizar un programa que permita cargar 10 notas de alumnos, obtener el promedio, e indicar cuantas y cuáles son las notas que superan dicho promedio.
 
[Ejercicio 8](/Ejercicios/EJ08.c)
``` c
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
```

 9. Realizar un programa que encuentre el segundo máximo de un vector de 5 números. El vector debe ser previamente cargado por el usuario.
 
[Ejercicio 9](/Ejercicios/EJ09.c)
``` c
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

```

 10. Realizar un programa que encuentre el valor más cercano al promedio de un vector de 7 números. El vector debe ser previamente cargado por el usuario.

[Ejercicio 10](/Ejercicios/EJ10.c)
``` c
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

```

 11. Realizar un programa que sea capaz de imprimir un texto en forma espejo. Por ejemplo: "Otto Krause" -> "esuarK ottO".

[Ejercicio 11](/Ejercicios/EJ11.c)
``` c
#include <stdio.h>
#define LENGTH 100

int main()
{
    char text[LENGTH];
    printf("Ingrese un texto para invertir su orden (maximo %d caracteres)\n", LENGTH); scanf("%[^\n]", text);
    for(int i = LENGTH - 1; i >= 0; i--)
        printf("%c", text[i]);
    printf("\n");
    return 0;
}
```

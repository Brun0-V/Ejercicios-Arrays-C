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

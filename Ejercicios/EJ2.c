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

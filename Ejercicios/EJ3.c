#include <stdio.h>

int main()
{
    char text[50];
    printf("Ingrese un texto para saber su cantidad de caracteres (maximo 50)\n");scanf("%[^\n]", text);
    printf("El texto tine %d caracteres\n", strlen(text));
    return 0;
}

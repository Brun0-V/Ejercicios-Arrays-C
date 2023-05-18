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

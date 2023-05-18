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

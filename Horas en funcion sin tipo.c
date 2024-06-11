#include <stdio.h>

/*
Para N empleados, ingresar la cantidad de horas trabajadas durante el mes a fin de
calcular el monto de su salario mensual, el que se liquida de la siguiente manera:
• Si trabaja 180 horas o menos, se le paga $ 560,00 la hora.
• Si trabaja más de 180 se le paga un plus de $ 200,00 por cada hora adicional.
Encontrar el sueldo a cobrar por cada empleado a través de una función sin tipo y
mostrarlo en main().
*/

void horas()
{
    int hs;
    printf("Ingrese la cantidad de horas: ");
    scanf("%d", &hs);
    if(hs <= 180)
    {
        int suma = hs * 560;
        printf("\nEl sueldo es: %d", suma);
    } else {
        int sueldo = (180 * 560) + ((hs - 180) * 200);
        printf("\nEl sueldo es: %d", sueldo);
    }
}

int main()
{
    int n;
    printf("Ingrese la cantidad de empleados a trabajar: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("\nEmpleado %d: ", i + 1);
        horas();
    }
}

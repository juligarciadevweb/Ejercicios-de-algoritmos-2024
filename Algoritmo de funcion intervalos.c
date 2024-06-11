#include <stdio.h>

/*
 Dados 2 valores A y B correspondientes a los extremos de un intervalo indicar luego de
 ingresar N valores numericos e indicar si pertenecen o no al intervalo
*/

int interval(int num, int a, int b)
    {
        if(num > a && num < b) //Uso una compuerta and
            return 1;
        else
            return 0;
    }

main()
{
    int n;
    int a = 0;
    int b = 0, num = 0;
    printf("\nIngrese la cantidad de numeros a trabajar: ");
    scanf("%d", &n);
    printf("\nIngrese el extremo inferior: ");
    scanf("%d", &a);
    printf("\nIngrese el extremo superior: ");
    scanf("%d", &b);

    for(int i = 0; i < n; i++)
    {
        printf("\nIngrese un numero: ");
        scanf("%d", &num);
        int result = interval(a, b, num);
        if(result == 0)
            printf("\nEL numero no esta en el intervalo");
        else
            printf("\nEL numero si esta en el intervalo");
    }

}

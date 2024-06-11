#include <stdio.h>

/*
Ingresar valores enteros desde el teclado hasta que se ingrese un numero -1. Al finalizar
el ingreso encontrar a través de una función con tipo la suma de los valores impares y
mostrarla en main()
*/

int ingreso()
    {
        int cont = 0;
        int number;
        do
        {
            printf("\nIngrese un numero: ");
            scanf("%d", &number);
            if(number != -1 && number % 2 != 0)
                cont += number;
        }while(number != -1);
        return cont;
    }

int main()
{
    int num = ingreso(); //num tomara el valor de la suma de los impares
    printf("\nLa suma de los impares es: %d",num);
}

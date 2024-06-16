#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Crear un programa usando la libreria string para hacer un conteo de vocales y consonantes

int main()
{
    int cont = 0, contCo = 0;
    int n;
    char let;
    printf("Ingrese la cantidad de vocales: ");
    scanf("%d", &n);

    /*
     Cuando se utiliza scanf para leer un carácter, puede haber un problema con el carácter de nueva línea residual en el búfer de entrada. Esto ocurre porque después de ingresar un número entero en la línea anterior, se presiona Enter, lo que deja un carácter de nueva línea en el búfer de entrada.
     */

    // Limpiar el búfer de entrada
    while (getchar() != '\n');

    for(int i = 0; i < n;i++)
    {
        printf("\nIngrese la letra: ");
        scanf("%c", &let);

        if(isalpha(let))
        {
            if(let == 'a'|| let == 'e' || let == 'i' || let == 'o' || let == 'u')
            {
                printf("\nEs una vocal");
                cont++;
            }else{
                printf("\nEs una consonante");
                contCo++;
            }
        }else
            printf("Caracter invalido, le quedan i %d ingresos",i);

    }
}

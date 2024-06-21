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

    // Limpiar el búfer de entrada
    while (getchar() != '\n');
        

    for (int i = 0; i < n; i++)
    {
        printf("\nIngrese la letra: ");
        scanf(" %c", &let); // Agregar un espacio antes de %c para ignorar el carácter de nueva línea

        if (isalpha(let))
        {
            if (let == 'a' || let == 'e' || let == 'i' || let == 'o' || let == 'u')
            {
                printf("\nEs una vocal");
                cont++;
            } else
            {
                printf("\nEs una consonante");
                contCo++;
            }
        } else
        {
            printf("No es una letra");
        }
        
    }

    printf("\nCantidad de vocales: %d", cont);
    printf("\nCantidad de consonantes: %d", contCo);
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, pares, impares;

    printf( "\n   Introduzca un n%cmero entero (0=Fin): ", 163 );
    scanf( "%d", &numero );

    pares = 0;
    impares = 0;

    while ( numero != 0 )
    {
        if ( numero % 2 == 0 )
            pares += numero;
        else
            impares += numero;

        printf( "\n   Introduzca un numero entero (0=Fin): ", 163 );
        scanf( "%d", &numero );
    }

    printf( "\n   La suma de los pares es: %d", pares );
    printf( "\n\n   La suma de los impares es: %d", impares );
    system("pause");
}

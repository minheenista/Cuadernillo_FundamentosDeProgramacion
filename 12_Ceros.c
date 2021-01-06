#include <stdio.h>
#include <stdlib.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int main(int argc, char** argv) {
    
    int ceros, i, numero;

    ceros = 0;

    for(i=1; i<=5;i++){
        printf( "Introduzca numero entero %d: ", i);
        scanf("%d", &numero);

        while ( numero == 0 ){
            ceros++;
            printf( "Introduzca numero entero %d: ", i);
            scanf("%d", &numero);
        }
    }

    printf( "\nHa introducido %d ceros", ceros );

    return 0;
}

// funcion ya esta implementada
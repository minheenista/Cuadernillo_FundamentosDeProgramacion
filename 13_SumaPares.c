#include <stdio.h>
#include <stdlib.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int main(int argc, char** argv) {
    
    int numero, pares, impares;

    printf("Introduzca un numero entero (0=Fin): ");
    scanf("%d", &numero );

    pares = 0;
    impares = 0;

    while (numero!= 0){
        if(numero%2==0){
            pares += numero;
        }
        else{
            impares += numero;
        }
        printf("Introduzca un numero entero (0=Fin): ");
        scanf("%d", &numero );
    }

    printf("La suma de los pares es: %d", pares );
    printf("\nLa suma de los impares es: %d", impares );
    
    
    return 0;
}

// funcion ya esta implementada
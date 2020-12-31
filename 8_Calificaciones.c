#include <stdio.h>
#include <stdlib.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int main(int argc, char** argv) {
    
    int n;
    printf("Introduzca el numero de alumnos: ");
    scanf("%d", &n);
    
    int calis[n];
    for(int i=0; i<n; i++){
        scanf("%d", &calis[i]);
    }
    int *puntero;
    
    puntero=&calis[0];
    for(int i=0; i<n; i++){
        printf("puntero + %d = %d \n", i, *(puntero+i));
    }
    return 0;
}

// funcion ya esta implementada
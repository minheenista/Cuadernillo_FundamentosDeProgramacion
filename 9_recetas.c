#include <stdio.h>
#include <stdlib.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int main(int argc, char** argv) {
    
    float por1, por2, porf;
    int n;
    
    printf("Introduzca las porciones de la receta: ");
    scanf("%d", &por1);
    printf("Introduzca las porciones que quiere hacer: ");
    scanf("%d", &por2);
    
    porf=por2/por1;
    
    printf("Cantidad de igredientes: ");
    scanf("%d", &n);
            
    float ingredientes[n];
    printf("Introduzca las cantidades de los ingredientes: ");
    for(int i=0; i<n; i++){
        printf("Ingrediente %d. ", i+1);
        scanf("%f", &ingredientes[i]);
    }
    for(int i=0; i<n; i++){
        printf("\nIngrediente %d. cantidad final: %.2f", i+1, ingredientes[i]*porf);
    }

    return 0;
}

// funcion ya esta implementada
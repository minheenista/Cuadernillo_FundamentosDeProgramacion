#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int esPrimo(int);

int main(int argc, char** argv) {
    int contador = 0;
    int inicio, fin;
    
    printf("Inicio: \n");
    scanf("%d", &inicio);
    
    printf("Fin: \n");
    scanf("%d", &fin);
    
    for(int i=inicio; i<=fin; i++) {
        if(esPrimo(i)){
            contador++;
            printf("%d,", i);
    }
  }
  printf("\nTotal: %d", contador);
  return 0;
}

// funcion ya esta implementada

int esPrimo(int numero){
    if(numero==0 || numero==1){
        return 0;
    }
    if(numero==4){
        return 0;
    }   
    for (int i=2; i<numero/2; i++){
        if (numero%i==0){
            return 0;
        }
    }
    return 1;
}
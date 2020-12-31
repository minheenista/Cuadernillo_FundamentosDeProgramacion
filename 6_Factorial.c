#include <stdio.h>
#include <stdlib.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

float factorial(float numero);

int main(int argc, char** argv) {
    
    float num;
    
    printf("Introduzca un numero para obtener su factorial: ");
    scanf("%f", &num);
    
    printf("El factorial del numero es: %.1f", factorial(num));
   
}

// funcion ya esta implementada

float factorial(float num){
    if(num <= 1){
        return 1;
    }
    else{
        return num * (factorial( num-1));
    }
}

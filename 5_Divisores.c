#include <stdio.h>
#include <stdlib.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones


int main(int argc, char** argv) {
    
    int num;
    printf("Ingresa un numero entero: ");
    scanf("%d", &num);
    
    printf("los divisores del numero son: ");
    for(int i=1; i<num+1; i++){
        if (num%i==0){
            printf("%d ", i);
        }
        
    }
    
    
          
 return (0);
}

// funcion ya esta implementada
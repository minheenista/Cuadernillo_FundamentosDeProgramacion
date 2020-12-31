#include <stdio.h>
#include <stdlib.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int main(int argc, char** argv) {
    
    int n, temp;
    printf("Ingresa el tamaño del arreglo: ");
    scanf("%d", &n);    
    int arreglo[n];
    
    printf("Ingresa los valores del arreglo: ");
    for(int i=0; i<n;i++){
        scanf("%d", &arreglo[i]);
    }
    printf ( "\n   Arreglo antes el ordenamiento: ");
    for(int i=0; i <n; i++){
        printf("%d  ", arreglo[i]);
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1;j<n;j++){
            if(arreglo[i] > arreglo[j]){
                temp=arreglo[i] ;
                arreglo[i] = arreglo[j] ;
                arreglo[j] = temp ;
            }
        }
    }
    
    printf("\nArreglo despues del ordenamiento: ");
    for(int i=0; i <n; i++){
        printf("%d  ", arreglo[i]);
    }
    return 0;
}

// funcion ya esta implementada

    
    


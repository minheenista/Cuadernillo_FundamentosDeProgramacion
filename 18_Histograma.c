#include <stdio.h>
#include <stdlib.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int main(int argc, char** argv) {
    int n;
       
    printf("Cantidad de calificaciones de alumnos: ");
    scanf("%d", &n);
    
    int calis[n];
    printf("Ingrese las calificaciones: ");
    
    for(int i=0; i<n; i++){
        scanf("%d", &calis[i]);
    }
    
    printf("%s%13s", "Calificacion", "Histograma" );
    
    for(int i=0; i<11; i++){
       printf( "\n%7d        ", i, calis[ i ]);
       
       for(int j=0; j<n; j++){
           if(calis[j]==i){
               printf( "%c", '*' );
           }
       } 
    }
    return 0;
}

// funcion ya esta implementada
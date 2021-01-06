#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int main(int argc, char** argv) {
    
    int n;
    printf("Introduce el tamaño de las matrices cuadradas: ");
    scanf("%d", &n);
    
    float matriz1[n][n], matriz2[n][n], sol[n][n], sum;
    
    printf("Introduce los elementos de la primera matriz: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("a(%d,%d): ", i+1, j+1);
            scanf("%f", &matriz1[i][j]);
        }
    }
    
    printf("Introduce los elementos de la segunda matriz: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("b(%d,%d): ", i+1, j+1);
            scanf("%f", &matriz2[i][j]);
        }
    }  
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum=0;
            for(int k=0; k<n;k++){
                sum+=matriz1[i][k]*matriz2[k][j];
                sol[i][j]=sum;
            }
              
        }
    } 
    
    printf("Solucion: \n");
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%.3f       ", sol[i][j]);
            printf("\n");
        }
    } 
            
    
    return 0;
}

// funcion ya esta implementada
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

double **crearMatriz(int, int);


int main(int argc, char** argv) {
    int filas, col, num, giro;
    double **a;
    
    printf("Introduce el numero de filas: ");
    scanf("%d", &filas);
    printf("Introduce el numero de columnas: ");
    scanf("%d", &col);
    a=crearMatriz(filas, col);
    
    for(int i=0;i<filas;i++){
        for(int j=0;j<col;j++){
            printf("Elemento (%d, %d): ", i+1, j+1);
            scanf("%lf", &a[i][j]);
        }
    }
    printf("La matriz original es: ");
    for(int i=0;i<filas;i++){
        printf("\n");
        for(int j=0; j<col;j++){
            printf("%12.2lf  ", a[i][j]);
        }
    }
    printf("\nCuantas veces desea girar la matriz: ");
    scanf("%d", &num);
    giro=num%4;
    
    if(giro==1){
        printf("La matriz girada %d veces es: ", num);
        for(int j=col-1; j>=0;j--){
            printf("\n");
            for(int i=0; i<filas;i++){
                printf("%12.2lf  ", a[i][j]);
            }
        }
    }
    else if(giro==2){
        printf("La matriz girada %d veces es: ", num);
        for(int i=filas-1; i>=0;i--){
            printf("\n");
            for(int j=col-1; j>=0;j--){
                printf("%12.2lf  ", a[i][j]);
            }
        }
    }
    else if(giro==3){
        printf("La matriz girada %d veces es: ", num);
        for(int i=col-1; i>=0;i--){
            printf("\n");
            for(int j=filas-1; j>=0;j--){
                printf("%12.2lf  ", a[i][j]);
            }
        }
    }
    else{
        printf("La matriz girada %d veces es: ", num);
        for(int i=0; i<filas;i++){
            printf("\n");
            for(int j=0; j<col;j++){
                printf("%12.2lf  ", a[i][j]);
            }
        }
    }
    
    return 0;
}

// funcion ya esta implementada

double **crearMatriz(int m, int n){
    double **matriz;
    matriz=calloc(m, sizeof(double *));
    matriz[0]=calloc(m*n, sizeof(double));
    for(int i=0; i<m;i++){
        matriz[i]=matriz[0]+n*i;
    }
    return matriz;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

double media(double*, int);
double maximo(double*, int);
double minimo(double*, int);
double semisuma(double, double);

int main(int argc, char** argv) {
    int n;
    printf("Con cuantos valores deseas trabajar: ");
    scanf("%d", &n);
    double valores[n];
    
    printf("Introduce los valores: ");
    for(int i=0;i<n;i++){
        printf("valor %d: ", i+1);
        scanf("%lf", &valores[i]);
    }
    printf("Media: %.2lf \n", media(valores, n));
    printf("Maximo: %.2lf \n", maximo(valores, n));
    printf("Minimo: %.2lf \n", minimo(valores, n));
    printf("semisuma: %.2lf \n", semisuma(maximo(valores, n), minimo(valores, n)));
    
    return 0;
}

// funcion ya esta implementada

double media(double* valores, int n){
    double suma=0, med;
    for(int i=0;i<n;i++){
        suma+=valores[i];
    }
    med=suma/n;
    return med;
}
double maximo(double* valores, int n){
    double max;
    max=valores[0];
    for(int i=1;i<n;i++){
        if(valores[i]>max){
            max=valores[i];
        }
    }
    return max;
}
double minimo(double* valores, int n){
    double min;
    min=valores[0];
    for(int i=1;i<n;i++){
        if(valores[i]<min){
            min=valores[i];
        }
    }
    return min;
}
double semisuma(double max, double min){
    return ((max+min)/2);
}
#include <stdio.h>
#include <stdlib.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int main(int argc, char** argv) {
    
    int n, op;
    float res;
    do{
        printf("Introduzca 1 para obtener resistencias en serie\nIntroduzca 2 para obtener resistencias en paralelo\n");
        scanf("%d", &op);
    }
    while(op!=1 && op!=2);
    
    printf("Cuantas resistencias: ");
    scanf("%d", &n);
    
    float valores[n];
        
    if(op==1){
        printf("Introduce los valores de las resistencias en ohms: ");
        for(int i=0; i<n; i++){
            scanf("%f", &valores[i]);
            res=res+valores[i];
        }
        printf("La resistencia total es: %.1f ohms", res);
    }
    if(op==2){
        printf("Introduce los valores de las resistencias en ohms: ");
        for(int i=0; i<n; i++){
            scanf("%f", &valores[i]);
            valores[i]=1/valores[i];
            res=res+valores[i];
        }
        res=1/res;
        printf("La resistencia total es: %.1f ohms", res);
    }
    
    return 0;
}

// funcion ya esta implementada
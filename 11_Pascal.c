#include <stdio.h>
#include <stdlib.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

unsigned factorial(unsigned);

int main(int argc, char** argv) {
    
    int fil, col, cont, f, c, cal, posicion;
    
    printf("Numero de filas: ");
    scanf("%d", &fil);
    
    for(cont=fil-1; cont>=0; cont--){
        col+=cont;
    }
    
    int triangulo[col];
     
    for(f=0; f<fil-1; f++){
        for(c=0; c<=f; c++){
            cal = factorial(f)/(factorial(c)*factorial(f-c));
            triangulo[posicion]=cal;
            posicion++;
        }
    }
    
    posicion=0;
    for(f=0; f<fil-1; f++){
        printf("\n%*c",(int) (col/2)-f,' ');
        for(c=0;c<=f;c++) {
            printf("%d ",triangulo[posicion]);
            posicion++;
        }
    }
    
    return 0;
}

// funcion ya esta implementada

unsigned factorial(unsigned numero) {
    int resultado = 0;
    int cont = 0;
    if (numero == 0){
        resultado=1;
    }
    else{
        resultado=1;
        for(cont=numero; cont>0; cont--){
            resultado*=cont;
        }
    }
    return resultado;
}
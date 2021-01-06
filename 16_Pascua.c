#include <stdio.h>
#include <stdlib.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int main(int argc, char** argv) {
    
    int anio, a,b,c,d,e,dia;

    printf ("Introduce un año: "); 
    scanf("%d", &anio);
    
    a=anio % 19;
    b=anio % 4;
    c=anio % 7;
    d=(19*a+24) % 30;
    e=(2*b+4*c+6*d+5) % 7;
    dia= 22+d+e;
    
    printf("\nLa Fecha del Domingo de Pascua de %d es: ", anio);
    
    if (dia<=31){
        printf("%d de Marzo ",dia);
    }
    else{
        printf("%d de Abril ",dia-31);
    }
    
    return 0;
}

// funcion ya esta implementada
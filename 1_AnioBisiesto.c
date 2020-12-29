#include <stdio.h>
#include <stdlib.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones


int main(int argc, char** argv) {
    
    int anio;
    
    scanf("%d", &anio);
    
    if(anio %4==0 || anio %400==0){
        printf("BISIESTO");
    }
    else{
        printf("NO BISIESTO");
    }


 return (0);
}

// funcion ya esta implementada
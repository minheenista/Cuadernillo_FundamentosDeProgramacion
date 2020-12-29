#include <stdio.h>
#include <stdlib.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones


int main(int argc, char** argv) {
    
    char l, palabra[21];
    int i=0;
    printf("Ingresa una palabra: ");
    scanf("%s", &palabra);
    
    while(palabra[i++]!='\0'){
        l = i;        
    }
    
    printf("%s escrita al revés es: ", palabra);
    i = l;
    
    while(i>0){
        printf("%c", palabra[--i]);
    }
          
 return (0);
}

// funcion ya esta implementada
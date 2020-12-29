#include <stdio.h>
#include <stdlib.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones


int main(int argc, char** argv) {
    
   float horas, tazas;
   
   scanf("%f", &horas);
   
   if(horas>=8){
       printf("NO CAFE");
   }
   else {
       tazas=(8-horas)*1.5;
       printf("%.1f tazas de cafe", tazas);
   }
 return (0);
}

// funcion ya esta implementada
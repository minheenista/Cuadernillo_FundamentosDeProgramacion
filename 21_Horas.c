#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones


int main(int argc, char** argv) {
    int minutos1, minutos2;
    int minutos(void);
    
    printf("Escribe la primera hora (formato 9:17): ");
    minutos1=minutos();
    printf("Escribe la segunda hora: ");
    minutos2=minutos();
    printf("La diferencia es %d minutos. ", minutos2-minutos1);
    
    return 0;
}

// funcion ya esta implementada

int minutos(void){
    int horas, mins;
    scanf("%d:%d", &horas, &mins);
    return (horas*60+mins);
}

#include <stdio.h>
#include <stdlib.h>

// definicion y prototipos funciones

//variables y constantes

#define MAX_JUGADA   3
#define MIN_PALILLOS 5

// implementacion de funciones

int main(int argc, char** argv) {
    
    int MaxJugada, NumPalillos, jugada, Y;

    printf("EL JUEGO DE NIM\n\n");
    
    do{
        printf("N£mero de palillos (minimo %d): ", MIN_PALILLOS);
        scanf("%d", &NumPalillos);
    } 
    while(NumPalillos<MIN_PALILLOS);
    
    do{
        printf("Maxima jugada posible (1-%d): ", NumPalillos);
        scanf("%d", &MaxJugada);
    } 
    while(MaxJugada<=1 || MaxJugada>=NumPalillos);
    
    printf ("\nQuedan %d palillos en el monton\n", NumPalillos);
    
    while(NumPalillos>1){
        do{
            printf("Cuantos palillos desea retirar del monton (de 1 a %d)? ", MaxJugada);
            scanf("%d", &jugada);
        } 
        while(jugada<=0 || jugada>MaxJugada);
        
        NumPalillos -= jugada;
        
        if(NumPalillos<1){
            printf ("\nGame Over\n");
        } 
        else if(NumPalillos==1){
            printf ("\nHas ganado la partida\n");
        }
        else{
            jugada = NumPalillos%(MaxJugada+1); //jugada computadora
            
            if(!jugada){
                jugada = MaxJugada;
            }
            else if(jugada>1){
                jugada --;
            }
            
            printf("Quedan %d palillos.\n",NumPalillos);
            
            if(jugada>1){
                printf ("Computadora retira %d palillos\n",jugada);
            }
            else{
                printf ("Computadora retira un palillo\n");
            }
            NumPalillos -= jugada;
            
            if(NumPalillos==1){
                printf ("\nGame Over\n");
            } 
            else{
                printf ("Quedan %d palillos\n",NumPalillos);
            }
        }
    }
    return 0;
}

// funcion ya esta implementada
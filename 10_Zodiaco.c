#include <stdio.h>
#include <stdlib.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int main(int argc, char** argv) {
    
    int mes, dia;
    
    printf("Introduce tu mes de nacimiento: ");
    scanf("%d", &mes);
    printf("Introduce tu dia de nacimiento: ");
    scanf("%d", &dia);
    
    if(mes==1){
        if(dia<=19){
            printf("Tu signo es: Capricornio");
        }
        else{
            printf("Tu signo es: Acuario");
        }
    }
    
    if(mes==2){
        if(dia<=18){
            printf("Tu signo es: Acuario");
        }
        else{
            printf("Tu signo es: Piscis");
        }
    }
    
    if(mes==3){
        if(dia<=20){
            printf("Tu signo es: Piscis");
        }
        else{
            printf("Tu signo es: Aries");
        }
    }
    
    if(mes==4){
        if(dia<=19){
            printf("Tu signo es: Aries");
        }
        else{
            printf("Tu signo es: Tauro");
        }
    }
    
    if(mes==5){
        if(dia<=20){
            printf("Tu signo es: Tauro");
        }
        else{
            printf("Tu signo es: Geminis");
        }
    }
    
    if(mes==6){
        if(dia<=20){
            printf("Tu signo es: Geminis");
        }
        else{
            printf("Tu signo es: Cancer");
        }
    }
    
    if(mes==7){
        if(dia<=22){
            printf("Tu signo es: Cancer");
        }
        else{
            printf("Tu signo es: Leo");
        }
    }
    
    if(mes==8){
        if(dia<=22){
            printf("Tu signo es: Leo");
        }
        else{
            printf("Tu signo es: Virgo");
        }
    }
    
    if(mes==9){
        if(dia<=22){
            printf("Tu signo es: Virgo");
        }
        else{
            printf("Tu signo es: Libra");
        }
    }
    
    if(mes==10){
        if(dia<=22){
            printf("Tu signo es: Libra");
        }
        else{
            printf("Tu signo es: Escorpio");
        }
    }
    
    if(mes==11){
        if(dia<=21){
            printf("Tu signo es: Escorpio");
        }
        else{
            printf("Tu signo es: Sagitario");
        }
    }
    
    if(mes==12){
        if(dia<=21){
            printf("Tu signo es: Sagitario");
        }
        else{
            printf("Tu signo es: Capricornio");
        }
    }

    return 0;
}


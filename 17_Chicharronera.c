#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int main(int argc, char** argv) {
    
    double a, b, c;
    double discr, x1, x2, xd, xr, xi;
    
    printf("escribe los valores de los coeficientes A, B, C\n");
    scanf("%lf%lf%lf", &a, &b, &c);
    
    discr=(b*b)-(4.0)*a*c;
    
    if(discr>0.0){
        x1=(-b+sqrt(discr))/(2*a);
        x2=(-b-sqrt(discr))/(2*a);
        printf("Las dos raices reales son: %.3f y %.3f \n", x1, x2);
    }
    else if(discr<0.0){
        xr=-b/(2*a);
        xi=sqrt(-discr)/(2*a);
        printf("\nRaices comlpejas: \n");
        printf("(%.3f, %.3f) y (%.3f, %.3f) \n", xr, xi, xr, -xi);
    }
    else{
        x1=-b/(2*a);
        printf("\n Las dos raices son iguales y valen: %.3f \n", x1);
    }
    
    return 0;
}

// funcion ya esta implementada
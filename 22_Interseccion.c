#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones


int main(int argc, char** argv) {
    float m, c, a, b, r;
    float a1, b1, c1;
    float discr, sol1x, sol2x;
    float sol1y, sol2y;
    
    printf("Introduce los datos de la circunferncia: \n");
    printf("Centro: coordenadas x,y: ");
    scanf("%f%f", &a, &b);
    printf("Radio: ");
    scanf("%f", &r);
    
    printf("\nIntroduce los datos de la recta: \n");
    printf("Pendiente m: ");
    scanf("%f", &m);
    printf("Ordenada en el origen b: ");
    scanf("%f", &c);
    
    a1=1+m*m;
    b1=2*m*c-2*a-2*m*b;
    c1=a*a+c*c+b*b-2*b*c-r*r;
    
    discr=b1*b1-4*a1*c1;
    
    if(discr>0){
        printf("Existen 2 soluciones: \n");
        sol1x=(-b1+sqrt(discr))/(2*a1);
        sol2x=(-b1-sqrt(discr))/(2*a1);
        sol1y=m*sol1x+c;
        sol2y=m*sol2x+c;
        
        printf("Primer punto: %.2lf, %.2lf\n", sol1x, sol1y);
        printf("Segundo punto: %.2lf, %.2lf", sol2x, sol2y);
    }
    else if(discr<0){
        printf("No hay solucion");
    }
    else{
        printf("Solo hay una solucion: \n");
        sol1x=-b1/(2*a1);
        sol1y=m*sol1x+c;
        printf("Punto: %.2lf, %.2lf", sol1x, sol1y);
    }
    
    return 0;
}

// funcion ya esta implementada


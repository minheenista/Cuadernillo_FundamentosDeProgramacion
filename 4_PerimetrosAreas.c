
#include <stdio.h>
#include <stdlib.h>

// definicion y prototipos funciones

float aTriangulo (float, float);

float aCuadrado (float);

float aRectangulo (float, float);

float aRombo (float, float);

float aParalelogramo (float, float);

float aTrapecio (float, float, float);

float aPoligonos (int, float, float);

float aCirculo (float);

//variables y constantes

// implementacion de funciones


int main(int argc, char** argv) {
    
    float area, base, base2, altura;
    int op, numlados;
    
    printf("\nIngresa '1' para obtener area de un triangulo");
    printf("\nIngresa '2' para obtener area de un cuadrado ");
    printf("\nIngresa '3' para obtener area de un rectangulo ");
    printf("\nIngresa '4' para obtener area de un rombo ");
    printf("\nIngresa '5' para obtener area de un paralelogramo ");
    printf("\nIngresa '6' para obtener area de un trapecio ");
    printf("\nIngresa '7' para obtener area de un poligono regular ");  
    printf("\nIngresa '8' para obtener area de un circulo ");

    scanf("%d", &op);

    switch(op){
        case 1 : printf("\nIngresa la base:  "); 
        scanf("%f", &base); printf("\nIngresa la altura: "); 
        scanf("%f", &altura); printf("\nEl area del triangulo es: %.2f", aTriangulo(base, altura));
        break;

        case 2 : printf("\nIngresa un lado del cuadrado:  "); 
        scanf("%f", &base); printf("\nEl area del cuadrado es:  %.2f", aCuadrado(base));
        break;

        case 3 : printf("\nIngresa la base:  "); 
        scanf("%f", &base); printf("\nIngresa la altura");
        scanf("%f", &altura); printf("\nEl area del rectangulo es: %.2f", aRectangulo(base, altura));
        break;

        case 4 : printf("\nIngresa la diagonal mayor:  "); 
        scanf("%f", &base); printf("\nIngresa la diagonal menor: ");
        scanf("%f", &altura); printf("\nEl area del rombo es: %.2f", aRombo(base, altura));
        break;

        case 5 : printf("\nIngresa la base:  "); 
        scanf("%f", &base); printf("\nIngresa la altura: ");
        scanf("%f", &altura); printf("\nEl area del paralelogramo es: %.2f", aParalelogramo(base, altura));
        break;

        case 6 : printf("\nIngresa la base mayor:  "); 
        scanf("%f", &base); printf("\ningresa la base menor: ");
        scanf("%f", &base2); printf("\nIngresa la altura: ");
        scanf("%f", &altura); printf("\nEl area del trapecio es: %.2f", aTrapecio(base, base2, altura));
        break;

        case 7: printf("\nIngresa el numero de lados del poligono: "); scanf("%d", &numlados);
        printf("\nIngresa la medida de cada lado: "); scanf("%f", &base);
        printf("\nIngresa el apotema: "); scanf("%f", &altura);
        printf("\n El area del poligono es: %.2f", aPoligonos(numlados, base, altura));
        break;
        
        case 8 : printf("\nIngresa el radio del circulo: "); scanf("%f", &base);
        printf("El area del circulo es; %.2f", aCirculo(base));
        break;   

        default : printf("Opcion invalida");
        break;
    }
        
 return (0);
}

// funcion ya esta implementada

float aTriangulo (float base, float altura){
    float area=base*altura;
    return area;
}

float aCuadrado (float base){
    float area=base*base;
    return area;
}

float aRectangulo (float base, float altura){
    float area=base*altura;
    return area;
}

float aRombo (float base, float altura){
    float area=(base*altura)/2;
    return area;    
}

float aParalelogramo (float base, float altura){
    float area=base*altura;
    return area;
}

float aTrapecio (float base, float base2, float altura){
    float area=((base+base2)/2)*altura;
    return area;
}

float aPoligonos (int numlados, float base, float altura){
    float area=(numlados*base*altura)/2;
    return area;
}

float aCirculo (float base){
    float area=(base*base)*3.1416;
    return area;
}


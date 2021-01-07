#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

void suma(float*, float*, float*);
void resta(float*, float*, float*);
void proVectorial(float*, float*, float*);
float proEscalar(float*, float*);

int main(int argc, char** argv) {
    float vec1[3], vec2[3], sum[3], res[3], escalar, vectorial[3]; 
    printf("Introduce los valores del primer vector: \n");
    for(int i=0;i<3;i++){
        printf("Elemento %d: ", i+1);
        scanf("%f", &vec1[i]);
    }
    printf("Introduce los valores del segundo vector: \n");
    for(int i=0;i<3;i++){
        printf("Elemento %d: ", i+1);
        scanf("%f", &vec2[i]);
    }
    
    suma(vec1, vec2, sum);
    resta(vec1, vec2, res);
    proVectorial(vec1, vec2, vectorial);
    
    printf("RESULTADOS: \n");
    printf("Suma: %.2lf i + %.2lf j + %.2lf k \n", sum[0], sum[1], sum[2]);
    printf("Resta: %.2lf i + %.2lf j + %.2lf k \n", res[0], res[1], res[2]);
    printf("Producto Vcetorial: %.2lf i + %.2lf j + %.2lf k \n", vectorial[0], vectorial[1], vectorial[2]);
    printf("Producto escalar: %.2lf", proEscalar(vec1, vec2));
    
    return 0;
}

// funcion ya esta implementada

void suma(float* vec1, float* vec2, float* sum){
    for(int i=0;i<3;i++){
        sum[i]=vec1[i]+vec2[i];
    }
    return;
}
void resta(float* vec1, float* vec2, float* res){
    for(int i=0;i<3;i++){
        res[i]=vec1[i]-vec2[i];
    }
    return;
}
void proVectorial(float* vec1, float* vec2, float* vectorial){
    vectorial[0]=vec1[1]*vec2[2]-vec2[1]*vec1[2];
    vectorial[1]=vec1[2]*vec2[0]-vec2[2]*vec1[0];
    vectorial[2]=vec1[0]*vec2[1]-vec2[0]*vec1[1];
    return;
}
float proEscalar(float* vec1, float* vec2){
    float escalar =0;
    for(int i=0;i<3;i++){
        escalar+=vec1[i]*vec2[i];
    }
    return escalar;
}
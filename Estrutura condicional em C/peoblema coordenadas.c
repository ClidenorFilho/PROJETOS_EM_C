/*Leia os valores das coordenadas X e Y de um ponto no plano
cartesiano. A seguir, determine qual o quadrante ao qual pertence o
ponto (Q1, Q2, Q3 ou Q4). Se o ponto estiver na origem, escreva a
mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva
“Eixo X” ou “Eixo Y”, conforme for a situação. */
#include <stdio.h>
int main(){
    float eixox, eixoy;
    scanf("%f%f", &eixox, &eixoy);
    if(eixox > 0 && eixoy > 0){
        printf("Q1");
    }
    else if (eixox < 0 && eixoy > 0)
    {
        printf("Q2");
    }
    else if (eixox < 0 && eixoy < 0)
    {
        printf("Q3");
    }
    else if(eixox > 0 && eixoy < 0){
        printf("Q4");
    }
    else if(eixox == 0 && eixoy == 0){
        printf("origem");
    }
    else if(eixox == 0 && eixoy != 0){
        printf("eixo x");
    }
    else if(eixox != 0 && eixoy == 0){
        printf("eixo y");
    }
    
    
}
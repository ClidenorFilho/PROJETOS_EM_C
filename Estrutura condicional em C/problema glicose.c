/*Fazer um programa para ler a quantidade de glicose
no sangue de uma pessoa e depois mostrar na tela a
classificação desta glicose de acordo com a tabela de
referência ao lado. */
#include<stdio.h>
int main(){
    float medida_glicose;
    scanf("%f", &medida_glicose);
    if(medida_glicose <= 100){
        printf("Classificao: Normal");
    }
    else if(medida_glicose > 100 && medida_glicose <= 140){
        printf("Classificao: Elevada");
    }
    else{
        printf("Classificao: Diabetes");
    }
}
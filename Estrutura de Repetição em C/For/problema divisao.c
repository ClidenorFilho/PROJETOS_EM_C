/*Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo
segundo. Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”. */
#include <stdio.h>
int main(){
    int num_casos;
    printf("quantos casos voce vai digitar?");
    scanf("%d", &num_casos);
    for(int i = 0; i <= num_casos; i++ ){
        int numerador = 0, denominador = 0;
        scanf("%d%d", &numerador, &denominador);
        float resultado = numerador / (float)denominador;
        if(denominador == 0){
            printf("IMPOSSIVEL");
        }
        else{
            printf("%.2f", resultado);
        }
        i++;
    }
}
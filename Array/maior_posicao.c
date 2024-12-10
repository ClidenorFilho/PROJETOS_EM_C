/*Problema "maior_posicao"
Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida, mostrar na tela
o maior número do vetor (supor não haver empates). Mostrar também a posição do maior elemento,
considerando a primeira posição como 0 (zero). */

#include <stdio.h>
int main(){
    int n = 0;
    printf("Quantos numeros voce vai digitar?\n");
    scanf("%d", &n);
    int vetor[n];
    int maior_valor = 0;
    int posicao = 0;
    for(int i = 0; i < n; i++){
        printf("Digite um numero:\n");
        scanf("%d", &vetor[i]);
        if(vetor[i] > maior_valor){
            maior_valor = vetor[i];
            posicao = i;
        }
    }
        printf("Maior valor :\n %d \n Posicao do maior valor:\n %d\n", maior_valor, posicao);
}
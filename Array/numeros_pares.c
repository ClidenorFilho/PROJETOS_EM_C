/*Problema "numeros_pares"
Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na
tela todos os números pares, e também a quantidade de números pares. */
#include <stdio.h>
int main(){
    int n;
    printf("quantos numeros voce vai digitar?\n");
    scanf("%d", &n);
    int vetor[n];
    for (int i = 0; i < n; i++)
    {
        printf("Digite um numero:\n");
        scanf("%d", &vetor[i]);
    }
    
    for(int i = 0; i < n; i++){
        if(vetor[i] % 2 == 0){
            printf("%d ", vetor[i]);
        }
    }
    
}
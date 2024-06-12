/*Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros
e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos. */
#include <stdio.h>
int main(){
    int quantidade_num;
    printf("quantos numeros voce vai digitar?\n");
    scanf("%d", &quantidade_num);
    int num_entradas[quantidade_num];
    
    for(int i = 0; i < quantidade_num; i++){
        printf("digite um numero\n");
        scanf("%d", &num_entradas[i]);
    }
            printf("você digitou os seguintes numeros negativos:\n");

    for(int i = 0; i < quantidade_num; i++){
        num_entradas[i];
        if(num_entradas[i] < 0){
            printf("%d, ", num_entradas[i]);
        }
    }
} 
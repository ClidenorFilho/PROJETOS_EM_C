/*Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
- Imprimir todos os elementos do vetor
- Mostrar na tela a soma e a média dos elementos do vetor */
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
    
}   
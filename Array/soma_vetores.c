/*Problema "soma_vetores"
Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um
terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima
o vetor C gerado. */

#include <stdio.h>
int main(){
    int n;
    printf("quantos valores vai ter cada vetor?\n");
    scanf("%d", &n);
    int vetor1[n];
    int vetor2[n];
    
    printf("Digite os valores do vetor A:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor1[i]);    
    }
    
    printf("Digite os valores do vetor B:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor2[i]);    
    }

    int vetor3[n];
    printf("valor resultante\n");

    for(int i = 0 ; i < n; i++){
        vetor3[i] = vetor1[i] + vetor2[i];
        printf("%d\n", vetor3[i]);
    }
}
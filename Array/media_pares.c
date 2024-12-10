/*Problema "media_pares "
Fazer um programa para ler um vetor de N números inteiros. Em seguida, mostrar na tela a média
aritmética somente dos números pares lidos, com uma casa decimal. Se nenhum número par for
digitado, mostrar a mensagem "NENHUM NUMERO PAR" */
#include <stdio.h>
int main(){
    int n = 0;
    printf("Quantos elementos vai ter o vetor?\n");
    scanf("%d", &n);
    int vetor[n];
    int soma = 0;
    int qntd_par = 0;
    for(int i = 0; i < n; i++){
        printf("Digite um numero:\n");
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){
            soma += vetor[i];
            qntd_par++;
        }
    }

    if(qntd_par > 0){
        printf("MEDIA DOS PARES: %d", soma / qntd_par);
    }
    else printf("NENHUM NUMERO PAR");

}
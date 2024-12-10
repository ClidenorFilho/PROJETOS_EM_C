/*Problema "abaixo_da_media"
Fazer um programa para ler um número inteiro N e depois um vetor de N números reais. Em seguida,
mostrar na tela a média aritmética de todos elementos com três casas decimais. Depois mostrar todos
os elementos do vetor que estejam abaixo da média, com uma casa decimal cada. */
#include <stdio.h>
int main(){
    printf("Quantos elementos vai ter o vetor?\n");
    int n = 0;
    scanf("%d", &n);
    double vetor[n];
    double soma = 0;
    for(int i = 0; i < n; i++){
        printf("digite um numero:\n");
        scanf("%lf", &vetor[i]);
        soma += vetor[i];
    }

    double media_vetor = soma / n;

    printf("MEDIA DO VETOR: %.3lf\n", media_vetor);

    for(int i = 0; i < n; i++){
        if(vetor[i] < media_vetor){
            printf("%.2lf\n", vetor[i]);
        }
    }

}
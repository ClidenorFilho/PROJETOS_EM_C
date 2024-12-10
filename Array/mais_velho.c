/*Problema "mais_velho"
Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades. Os nomes
devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostrar na tela o nome
da pessoa mais velha. */
#include <stdio.h>
typedef struct 
{
    char nome[50];
    int idade;
}Pessoa;

int main(){
    int n = 0;
    printf("Quantas pessoas você vai digitar? ");
    scanf("%d", &n);

    Pessoa a[n];
    int mais_velho = 0;
    int local = 0;
    for(int i = 0; i < n; i++){
        printf("Nome: ");
        scanf("%s", a[i].nome);
        printf("idade: ");
        scanf("%d", &a[i].idade);

        if(a[i].idade > mais_velho){
            mais_velho = a[i].idade;
            local = i;
        }
    }

    printf("Pessoa mais velha: %s", a[local].nome);
}
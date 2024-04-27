/*Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os
nomes e a idade média entre essas pessoas, com uma casa decimal.*/
#include <stdio.h>
int main(){
    char nome[50], nome2[50];
    float idade, idade2, media;
    scanf(" %s %f", &nome, &idade);
    scanf(" %s %f", &nome2, &idade2);
    media = (idade + idade2) / 2;
    printf("a media entre %s e %s e igual a %.0f", nome, nome2, media);
}
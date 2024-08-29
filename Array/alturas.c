/*Problema "alturas"
Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na
tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos,
bem como os nomes dessas pessoas caso houver. */

#include <stdio.h>
typedef struct
{
    char nome[50];
    int idade;
    double altura;
}Pessoa;

int main(){
    int n;
    scanf("%d", &n);

    Pessoa a[n];
    double soma_altura = 0;

    for(int i = 0; i < n; i++){
        scanf(" %[^\n]", a[i].nome);
        scanf("%d", &a[i].idade);
        scanf("%lf", &a[i].altura);
        soma_altura += a[i].altura;
    }

    double media = soma_altura / n;
    int menor_16 = 0;
    for(int i = 0; i < n; i++){
        if(a[i].idade <= 16){
            menor_16++;
        }
    }

    int pm16 = ((double) menor_16 / n) * 100;
    printf("Altura media: %.02lf\n", media);
    printf("Pessoas com menos de 16 anos: %d\n", pm16);

    for (int i = 0; i < n; i++)
    {
        if(a[i].idade <= 16 ){
            printf("%s\n", a[i].nome);
        }
    }
    

}
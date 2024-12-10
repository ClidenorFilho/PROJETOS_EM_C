/*Problema "dados_pessoas"
Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Fazer um programa
que calcule e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o número
de homens. */
#include <stdio.h>

typedef struct 
{
    float altura;
    char genero;
}DadosPessoais;

int main(){
    int n = 0;
    printf("Quantas pessoas serao digitadas?\n");
    scanf("%d", &n);
    DadosPessoais a[n];

    for(int i = 0; i < n; i++){
        printf("Altura da pessoa: \n");
        scanf("%f", &a[i].altura);
        printf("Genero da pessoa:\n");
        scanf(" %c", &a[i].genero);
    }
    float maior_altura = 0, menor_altura = 100, somaA_F = 0, qntd_F = 0;
    int n_h = 0;
    for(int i = 0; i < n; i++){
        if(a[i].altura > maior_altura){
            maior_altura = a[i].altura;
        }
        if(a[i].altura < menor_altura){
            menor_altura = a[i].altura;
        }
        if(a[i].genero == 'F'){
            somaA_F += a[i].altura;
            qntd_F++;
        }
        if(a[i].genero == 'M'){
            n_h++;
        }
    }

    printf("Menor altura = %.2f\n", menor_altura);
    printf("Maior altura = %.2f", maior_altura);
    printf("Media das alturas das mulheres = %.2f\n", somaA_F / qntd_F);
    printf("Numero de homens: %d", n_h);
}

/*Problema "aprovados"
Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram
no 1º e 2º semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir
os nomes dos alunos aprovados, considerando aprovados aqueles cuja média das notas seja maior ou
igual a 6.0 (seis). */
#include <stdio.h>
typedef struct
{
    char nome[50];
    float nota1;
    float nota2;
}Aprovados;

int main(){
    int n;
    printf("Quantos alunos serao digitados?\n");
    scanf("%d", &n);
    Aprovados a[n];

    for(int i = 0; i < n; i++){
        printf("Digite nome, primeira e segunda nota do aluno\n");
        scanf(" %s %f%f", a[i].nome, &a[i].nota1, &a[i].nota2);
    }
    printf("Alunos aprovados:\n");

    for(int i = 0; i < n; i++){
        float media = (a[i].nota1 + a[i].nota2) / 2.0;
        if(media >= 6){
            printf("%s\n", a[i].nome);
        }
    }
}
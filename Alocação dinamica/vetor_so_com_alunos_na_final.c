/*Forneça um programa que lê um vetor de alunos (matrícula, nome e média) e aloca dinamicamente um vetor de alunos na final (média >= 4.0 e média < 7.0).
 Em seguida, imprime o vetor de alunos na final. Ao imprimir, o vetor alocado deve ter tamanho apenas o bastante para armazenar os alunos na final (sem desperdício de memória).

A estrutura aluno é dada por:

typedef struct {
    int matricula;
    char nome[50];
    float media;
} aluno;
O programa deve seguir os passos abaixo:
- Leia um inteiro n que representa a quantidade de alunos.
- Aloque dinamicamente um vetor de alunos chamado alunos com n elementos.
- Aloque dinamicamente um vetor de alunos chamado final com n elementos.
- Leia os dados dos alunos (matrícula, nome e média) e armazene no vetor alunos.
- Para cada aluno em alunos, se a média for maior ou igual a 4.0 e menor que 7.0, armazene no vetor final.
- Redimensione o vetor final para ter apenas o número de alunos na final (Dica: use realloc).
- Imprima os alunos no vetor final: um aluno por linha e campos separados por espaços.
- Libere a memória alocada para os vetores alunos e final.*/

#include  <stdio.h>
#include  <stdlib.h>

typedef struct {
    int matricula;
    char nome[50];
    float media;
} Aluno;

int main(){
    int n;
    scanf("%d", &n);
    Aluno *alunos = (Aluno *) malloc(n * sizeof(Aluno));
    Aluno *final = (Aluno *) malloc(n * sizeof(Aluno));
    int count = 0;
    
    for(int i = 0; i < n; i++){
        scanf("%d %s %f", &alunos[i].matricula, alunos[i].nome, &alunos[i].media);
        if(alunos[i].media >= 4 && alunos[i].media <= 7){
            final[count] = alunos[i];
            count++;
        }
    }
    final = (Aluno*) realloc (final, (count * sizeof(Aluno)));
    
    for(int i = 0; i < count; i++){
        printf("%d %s %.01f\n", final[i].matricula, final[i].nome, final[i].media);
    }
    free(alunos);
    free(final);
}
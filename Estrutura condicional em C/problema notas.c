/*Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de
uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no
ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a
mensagem "REPROVADO"*/
#include <stdio.h>
int main(){
    float nota1, nota2, nota_final;
    scanf("%f%f", &nota1, &nota2);
    nota_final = nota1 + nota2;
    printf("%.2f\n", nota_final);
    if(nota_final < 60){
        printf("REPROVADO");
    }
}
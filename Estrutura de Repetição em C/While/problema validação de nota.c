/*Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a
média semestral. Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao
intervalo [0,10]). Cada nota deve ser validada separadamente. */
#include <stdio.h>
int main(){
    float nota1, nota2, media;
    while (1)
    {
        scanf("%f", &nota1);
        if(nota1 < 0 || nota1 > 10){
            printf("NOTA 1 INVALIDA");
        }
            else{
                break;
            }
        }
    while (1)
            {
        scanf("%f", &nota2);
        if(nota2 < 0 || nota2 > 10)
        {
            printf("NOTA 2 INVALIDA");
        }
        else{
            break;
        }
        }
    media = (nota1+nota2) / 2;
    printf("media = %.2f", media);   
}
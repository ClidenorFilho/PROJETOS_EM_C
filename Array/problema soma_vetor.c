/*Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
- Imprimir todos os elementos do vetor
- Mostrar na tela a soma e a média dos elementos do vetor*/
#include <stdio.h>
int main(){
    int qntd_reais;
    printf("quantos numeros voce vai digitar?\n");
    scanf("%d", &qntd_reais);
    int nmrs_reais[qntd_reais];
    for(int i = 0; i < qntd_reais; i++){
        printf("digite um numero\n");
        scanf("%d", &nmrs_reais[i]);
    }

    printf("VALORES = ");
    for (int i = 0; i < qntd_reais; i++)
    {
        printf("%d ", nmrs_reais[i]);
    }
    int soma = 0;
   
    for (int i = 0; i < qntd_reais; i++)
    {
        soma =+ nmrs_reais[i];
    }
     printf("\nsoma = %d", soma);
    int media = (double) soma / qntd_reais;
    printf("\nmedia = %d", media);
    
    
}
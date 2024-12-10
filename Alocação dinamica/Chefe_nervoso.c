/*Ação
Seu chefe está ao telefone, nervoso. Ele quer que você compute a soma de uma sequência de números que ele vai falar para você ao telefone, para saber o total das vendas em sua mais recente viagem de negócios.

Infelizmente, de vez em quando seu chefe fala números errados para você ao telefone. Felizmente, seu chefe rapidamente percebe que falou um número errado e diz “zero”, que como combinado previamente quer dizer ignore o último número corrente.

Infelizmente, seu chefe pode cometer erros repetidos, e diz “zero” para cada erro. Por exemplo, seu chefe pode falar ao telefone “Um, três, cinco, quatro, zero, zero, sete, zero, zero, seis”, o que significa uma soma total igual a 7, conforme explicado na tabela abaixo:

_
_
Para não deixar seu chefe ainda mais nervoso, escreva um programa que determine a soma total dos números falados por seu chefe ao telefone.

Entrada
A primeira linha da entrada contém um inteiro N , a quantidade de números inteiros (incluindo os “zeros”) que o seu chefe falou ao telefone. Cada uma das N linhas seguintes contém um número inteiro Xi .

Saida
Seu programa deve produzir uma única linha na saída, contendo um único inteiro, a soma correta dos números, levando em conta que o valor 0 significa erro, conforme descrito.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int soma = 0;
    int *x = (int *) malloc(sizeof(int));
    int num;
    int tam = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        if(num == 0){
            x = (int *) realloc(x, (tam - 1) * sizeof(int));
            tam--;
        } else{
          x = (int *) realloc(x, (tam + 1) * sizeof(int));
          x[tam] = num;
          tam++;

        }
    }

    for(int i = 0; i < tam; i++){
        soma += x[i];
    }
    free(x);
    printf("%d", soma);
    return 0;
}
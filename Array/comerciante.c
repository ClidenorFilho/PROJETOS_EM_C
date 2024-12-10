/*Problema "comerciante"
Um comerciante deseja fazer o levantamento do lucro das Mercadorias que ele comercializa. Para isto,
mandou digitar um conjunto de N Mercadorias, cada uma contendo nome, preço de compra e preço de
venda das mesmas. Fazer um programa que leia tais dados e determine e escreva quantas Mercadorias
proporcionaram:*/
#include <stdio.h>

typedef struct
{
    char nome[50];
    float precoC;
    float precoV;
}Mercadoria;

int main(){
    printf("Serao digitados quantos produtos?\n");
    int n = 0;
    scanf("%d", &n);
    Mercadoria a[n];
    int l = 1;
    for(int i = 0; i < n; i++){
        printf("produto %d:\n", l);
        printf("Nome:\n");
        scanf("%s", a[i].nome);
        printf("Preco de compra:\n");
        scanf("%f", &a[i].precoC);
        printf("Preco de venda:\n");
        scanf("%f", &a[i].precoV);
        l++;
    }
    int lucro_abaixo_10 = 0, lucro_entre_10_20 = 0, lucro_maior_20 = 0;
    float soma_valorC = 0, soma_valorV = 0;
    for (int i = 0; i < n; i++)
    {
        if((a[i].precoV - a[i].precoC) < (a[i].precoC * 0.1)){
            lucro_abaixo_10 ++;
        }
        else if(((a[i].precoV - a[i].precoC) >= (a[i].precoC * 0.1)) && ((a[i].precoV - a[i].precoC) <= (a[i].precoC * 0.2))){
            lucro_entre_10_20 ++;
        }
        else if((a[i].precoV - a[i].precoC) > (a[i].precoC * 0.2)){
            lucro_maior_20 ++;
        }
        soma_valorC += a[i].precoC;
        soma_valorV += a[i].precoV;
    }

    printf("Relatorio:\n");
    printf("Lucro abaixo de 10\%: %d\n", lucro_abaixo_10);
    printf("Lucro entre 10\% \e 20\%: %d\n", lucro_entre_10_20);
    printf("Lucro acima de 20\%: %d\n", lucro_maior_20);
    printf("Valor total da compra: %.02f\n", soma_valorC);
    printf("Valor total de venda: %.02lf\n", soma_valorV);
    printf("Lucro total: %.02f", soma_valorV - soma_valorC);
}
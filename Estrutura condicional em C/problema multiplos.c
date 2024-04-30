/*Fazer um programa para ler dois números inteiros, e dizer se um número é múltiplo do outro. Os
números podem ser digitados em qualquer ordem. */
#include<stdio.h>
int main(){
    int numero1, numero2;
    scanf("%d%d", &numero1, &numero2);
    if(numero1 % numero2 == 0 || numero2 % numero1 == 0)
    {
        printf("Sao multiplos");
    }
    else{
        printf("Nao sao multiplos");
    }
}
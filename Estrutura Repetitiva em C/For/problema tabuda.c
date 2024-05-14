/*Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10, conforme exemplo*/
#include <stdio.h>
int main(){
    int numero_entrada, numero_saida;
    scanf("%d", &numero_entrada);
    for (int i = 0; i <= 10; i++)
    {
        numero_saida = numero_entrada * i;
        printf("%d\n", numero_saida);
    }
    
}
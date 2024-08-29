/*Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o
fatorial de N. */
#include <stdio.h>
int main(){
    int num_incial, fatorial = 1;
    scanf("%d", &num_incial);
    for(int i = 2; i <= num_incial; i++){
        fatorial *= i;
    }
    printf("%d", fatorial);
}
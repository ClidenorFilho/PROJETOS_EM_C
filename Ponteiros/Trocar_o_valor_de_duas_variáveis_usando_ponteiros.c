/*Forneça um programa que execute os passos abaixo:
- Declare duas variáveis int chamadas a e b.
- Leia da entrada os valores das variáveis a e b.
- Imprima os valores de a e b.
- Declare um ponteiro para inteiro chamado ptr_a, e o inicialize com o endereço de memória da variável a.
- Declare um ponteiro para inteiro chamado ptr_b, e o inicialize com o endereço de memória da variável b.
- Usando apenas ptr_a e ptr_b (e uma variável auxiliar), troque os valores das variáveis a e b.
- Imprima novamente os valores das variáveis a e b.
VPL*/

#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %d\n", a, b);
    int *ptr_a = &a;
    int *ptr_b = &b;
    int aux = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = aux;
    printf("%d %d", *ptr_a, *ptr_b);
}
/*Forneça um programa que executa os passos abaixo:
- Declare uma variável int com nome num e a inicialize com valor 10.
- Declare um ponteiro para inteiro chamado int_ptr.
- Armazene em int_ptr o endereço de memória da variável num. Para isso, use o operador &.
- Imprima o valor de num.
- Imprima o valor armazenado na região de memória apontada por int_ptr.*/

#include <stdio.h>
int main(){
    int num = 10;
    int *int_ptr = &num;
    printf("%d\n", num);
    printf("%d", *int_ptr);
}
/*Na questão anterior, você começou executando os passos abaixo:
- Declare uma variável int com nome num e a inicialize com valor 10.
- Declare um ponteiro para inteiro chamado int_ptr.
- Armazene em int_ptr o endereço de memória da variável num. Para isso, use o operador &.
- Imprima o valor de num.

A partir deste ponto, execute os passos a seguir:
- Modifique o valor de num para 20 usando o ponteiro int_ptr. Não atribua o novo valor diretamente para num (use int_ptr para isso).
- Imprima novamente o valor de num.*/

#include <stdio.h>
int main(){
    int num = 10;
    int *int_ptr = &num;
    printf("%d\n", num);

    *int_ptr = 20;
    printf("%d", num);
}
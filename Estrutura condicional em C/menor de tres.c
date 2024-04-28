/*Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três
números lidos. Em caso de empate, mostrar apenas uma vez. */
#include <stdio.h>
int main(){
    int n1, n2, n3;
    scanf("%d%d%d", &n1, &n2, &n3);
    if (n1 >= n2 && n2 >= n3)
    {
        printf("%d", n3);
    }

    else if (n2 >= n1 && n3 >= n1)
    {
        printf("%d", n1);
    }

    else if (n1 >= n2 && n3 >= n2)
    {
        printf("%d", n2);
    }

}
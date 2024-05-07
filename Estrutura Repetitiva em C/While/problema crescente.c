/*Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma
mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O
programa deve finalizar quando forem digitados dois valores iguais.*/
#include <stdio.h>
int main(){
    int n1, n2;
    while (n1 != n2)
    {
        scanf("%d%d", &n1, &n2);
        if(n1 > n2){
            printf("decrescente\n");
        }
        else{
            printf("crescente\n");
        }
    }
    
}
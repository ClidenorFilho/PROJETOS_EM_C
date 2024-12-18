/*Leia uma string e imprima o número de caracteres na string lida, ou seja, conte quantos caracteres existem até o terminador. Para isso, você deve percorrer a string usando um ponteiro para char chamado str_ptr. Inicialize str_ptr com o endereço de memória do primeiro caractere da string.

Se temos um ponteiro p para um tipo t, então aplicar o operador de incremento ++ no ponteiro p faz o endereço em p avançar o número de bytes do tipo t. Ou seja, fazer p++ é o mesmo que avançar para o próximo elemento do vetor. Use o operador ++ para percorrer a string.*/

#include <stdio.h>
int main() {
    char str[100];
    char *str_ptr = str;
    scanf("%[^\n]", str);
    int i = 0;
    while (*str_ptr != '\0') {
        str_ptr++;
        i++;
    }
    printf("%d", i);
}
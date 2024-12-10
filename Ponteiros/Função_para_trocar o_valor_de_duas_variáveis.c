/*Implemente a função 'troca', que recebe como parâmetro duas variáveis inteiras passadas por referência, e troca os valores destas variáveis.

O arquivo de envio já terá parte do código preenchido.
Você deverá:
- Implementar a função 'troca'.
- Chamar a função 'troca' dentro da função 'main'.*/

#include <stdio.h>

void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int x, y;
    scanf("%d%d", &x, &y);
    troca(&x, &y);
    printf("%d %d", x, y);
}
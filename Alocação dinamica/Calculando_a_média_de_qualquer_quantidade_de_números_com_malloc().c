/*Leia uma linha da entrada e imprima a string lida. Ao invés de alocar um vetor grande, 
você deve alocar apenas a memória necessária para armazenar a string lida. 
Ou seja, seu programa não pode desperdiçar memória.

Para isso, execute os passos abaixo:
- Declare um ponteiro para char chamado s, que vai apontar para a memória alocada dinamicamente.
- Declare uma variável chamada tam para armazenar o tamanho da string lida, e a inicialize com zero.
- Leia o primeiro caractere e armazene na variável c.
- Enquanto c é diferente de '\n',
    - Aumente em 1 caractere a memória alocada, e guarde o endereço em s (Dica: inicialize s com zero, e use realloc).
    - Grave o caractere lido c na posições correta da string s.
    - Incremente o tamanho tam.
    - Leia o próximo caractere e armazene em c.
- Grave o terminador na posição correta de s (lembre de alocar memória para o terminador).
- Imprima a string s.
- Libere a memória que foi alocada.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char *s = (char *) malloc(sizeof(char));
    int tam = 0;
    char c;
    scanf("%c", &c);

    while(c != '\n'){
        s = (char*) realloc (s,(tam + 1) * sizeof(char));
        s[tam] = c;
        tam++;
        scanf("%c",  &c);
    }
    s = (char*) realloc (s,(tam + 1) * sizeof(char));
    s[tam] = '\0';
    printf("%s\n", s);
    free(s);
}
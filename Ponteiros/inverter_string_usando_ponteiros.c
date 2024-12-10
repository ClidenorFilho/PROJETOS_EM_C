/*Leia uma string, inverta os caracteres da string (usando dois ponteiros) e imprima a string resultante.

>>
Ola mundo!
<<
!odnum alO

Para isso, execute os passos abaixo:
- Leia a string s.
- Crie dois ponteiros para char, chamados ini_ptr e fim_ptr.
- Inicialize ini_ptr com o endereço do primeiro caractere de s.
- Inicialize fim_ptr com o endereço do primeiro caractere de s, e incremente fim_ptr até que *fim_ptr seja o terminador. Em seguida (fora da repetição), decremente fim_ptr. Desta forma, fim_ptr terá o endereço do último caractere de s.
- Enquanto ini_ptr for menor que fim_ptr, troque os caracteres apontados por estes dois ponteiros, incremente ini_ptr e decremente fim_ptr.
- Imprima a string s.*/

#include <stdio.h>
int main(){
    char s[100];
    scanf("%[^\n]", s);
    char *ini_ptr = &s[0];
    char *fim_ptr = &s[0];
    while(*fim_ptr != '\0'){
        fim_ptr++;
    }
    fim_ptr--;
    int aux = 0;
    while(ini_ptr < fim_ptr){
        aux = *ini_ptr;
        *ini_ptr = *fim_ptr;
        *fim_ptr = aux;
        ini_ptr++;
        fim_ptr--;
    }
    printf("%s", s);
}
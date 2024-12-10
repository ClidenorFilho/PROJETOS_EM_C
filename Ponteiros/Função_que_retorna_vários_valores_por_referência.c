/*Quando precisamos que uma função retorne vários valores, temos duas opções:
1) Retornar uma estrutura, onde cada campo armazena um valor que desejamos retornar na função; ou
2) Passar variáveis por referência, que receberão os valores que desejamos retornar.

Neste exemplo vamos considerar o 2o caso (passar resultados por referência).
Implemente a função 'converte_tempo', que recebe o tempo em segundos e retorna em 3 variáveis passadas por referência este tempo convertido em horas, minutos e segundos.

O arquivo de envio já terá parte do código preenchido.
Você deverá:
- Implementar a função 'converte_tempo'.
- Chamar a função 'converte_tempo' dentro da função 'main'.*/

#include <stdio.h>
void converte_tempo(int segundos, int *hor, int *min, int *seg){
    *hor = segundos / 3600;
    *min = (segundos % 3600) / 60;
    *seg = (segundos % 3600) % 60;
}

int main(){
    int tempo, h, m, s;
    scanf("%d", &tempo);
    converte_tempo(tempo, &h, &m, &s);
    printf("%d:%d:%d", h, m, s);

}

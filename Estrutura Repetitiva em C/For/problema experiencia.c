/*Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para
organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano,
quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada. Este
laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas
informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia
utilizada e a quantidade de cobaias utilizadas em cada experimento. Faça um programa que leia um
valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um
inteiro que representa a quantidade de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo
de cobaia (R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de cada tipo de
cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o
percentual deve ser apresentado com dois dígitos após o ponto. */
#include <stdio.h>
int main(){
    int sapos = 0, ratos = 0, coelhos = 0, casos_digitados;
    printf("quantos casos de testes serao digitados?\n");
    scanf("%d", &casos_digitados);

    for(int i = 0; i < casos_digitados; i++){
        int quantidade_cobaias = 0;
        char tipo_cobaia;
        printf("quantidades de cobaias:\n");
        scanf("%d", &quantidade_cobaias);
        printf("TIPO DE COBAIA:\n");
        scanf(" %c", &tipo_cobaia);
        if( tipo_cobaia == 'c'){
            coelhos += quantidade_cobaias;
        }
        else if(tipo_cobaia == 'r'){
            ratos += quantidade_cobaias;
        }
        else if(tipo_cobaia == 's'){
            sapos += quantidade_cobaias;
        }
    }
    int soma_total = sapos + ratos + coelhos;
    printf("TOTAL DE COBAIAS = %d\nTOTAL DE COELHOS = %d\n TOTAL DE SAPOS = %d\n TOTAL DE RATOS: %d", soma_total, coelhos, sapos, ratos);

}
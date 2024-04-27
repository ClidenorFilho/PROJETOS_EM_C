/*Fazer um programa para ler a distância total (em km) percorrida por um carro, bem como o total de
combustível gasto por este carro ao percorrer tal distância. Seu programa deve mostrar o consumo
médio do carro, com três casas decimais. */
#include <stdio.h>
int main(){
    double distancia_percorrida, consumo_combustivel, consumo_medio;
    scanf("%lf%lf", &distancia_percorrida, &consumo_combustivel);
    consumo_medio = distancia_percorrida / consumo_combustivel;
    printf("%.2lf", consumo_medio);
}
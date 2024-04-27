/*Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente (suponha que haja dinheiro suficiente). Seu programa deve
mostrar o valor do troco a ser devolvido ao cliente.*/
#include <stdio.h>
int main(){
    int preco_produto, quantidade_produto;
    double valor_entrada, troco, valor_total;
    scanf("%d%d%lf", &preco_produto, &quantidade_produto, &valor_entrada);
    valor_total = preco_produto * quantidade_produto;
    troco = valor_entrada - valor_total;
    printf("%.2lf", troco);
}
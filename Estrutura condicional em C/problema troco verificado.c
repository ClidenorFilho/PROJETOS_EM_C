/*Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o
valor restante*/
#include <stdio.h>
#include <math.h>
int main(){
    float preco_unitario, quantidade_unidades, valor_recebido, troco, total_pagar;
    scanf("%f%f%f", &preco_unitario, &quantidade_unidades, &valor_recebido);
    total_pagar = preco_unitario * quantidade_unidades;
    troco = valor_recebido - total_pagar;
    if(troco < 0){
        float faltante = total_pagar - valor_recebido;
        printf("DINHEIRO INSUFICIENTE, FALTAM %.2f", faltante);
    }
    else{
        printf("TROCO = %.2f", troco);
    }
    
}
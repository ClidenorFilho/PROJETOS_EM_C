/*Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a
quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário com
uma mensagem explicativa*/
#include <stdio.h>
int main(){
    char nome[50];
    double valor_hora_trabalhada, quantidade_horas_trabalhou, pagamento;
    scanf(" %s%lf%lf", &nome, &valor_hora_trabalhada, &quantidade_horas_trabalhou);
    pagamento = valor_hora_trabalhada * quantidade_horas_trabalhou;
    printf("O pagamento para %s deve ser %.2lf", nome, pagamento);
}

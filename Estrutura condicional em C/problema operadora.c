/*Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos de
telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. Fazer um programa para
ler a quantidade de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago. */
#include<stdio.h>
int main(){
    int minutos, total_pagar = 50;
    scanf("%d", &minutos);
    int excesso = minutos - 100;
    if (excesso > 0)
    {
        total_pagar = 50 + 2 * excesso;
    }
    printf("%d", total_pagar);
}
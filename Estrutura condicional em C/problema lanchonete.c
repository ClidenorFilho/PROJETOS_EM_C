/*Uma lanchonete possui vários produtos. Cada produto possui um código
e um preço. Você deve fazer um programa para ler o código e a
quantidade comprada de um produto (suponha um código válido), e daí
informar qual o valor a ser pago, com duas casas decimais, conforme
tabela de produtos ao lado.
1 -> R$ 5.00
2 -> R$ 3.50
3 -> R$ 4.80
4 -> R$ 8.90
5 -> R$ 7.32 */
#include<stdio.h>
int main(){
    double quantidade_comprada, valor_pagar;
    int numero_produto;
    scanf(" %d%lf", &numero_produto, &quantidade_comprada);

        if (numero_produto == 1)
    {
        valor_pagar = 5 * quantidade_comprada;
    }

            else if(numero_produto == 2)
            {
                valor_pagar = 3.5 * quantidade_comprada;
            }

             else if(numero_produto == 3)
            {
                valor_pagar = 4.8 * quantidade_comprada;
            }

             else if(numero_produto == 4)
            {
                valor_pagar = 8.9 * quantidade_comprada;
            }

             else if(numero_produto == 5)
            {
                valor_pagar = 7.32 * quantidade_comprada;
            }
            printf("Valor a pagar = %.2lf", valor_pagar);
}
/*Um posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes.
Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma:
1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a
4) deve ser solicitado um novo código (até que seja válido). O programa será encerrado quando o
código informado for o número 4, devendo então mostrar a mensagem "MUITO OBRIGADO", bem
como as quantidades de cada combustível. */
#include <stdio.h>
int main(){
    int Alcool = 0, Gasolina = 0, Diesel = 0, escolha;
    while (escolha != 4)
    {
        printf("Informe um codigo (1, 2, 3) ou 4 para parar:\n");
        scanf("%d", &escolha);
        if(escolha == 1){
            Alcool++;
        }
        else if (escolha == 2)
        {
            Gasolina++;
        }
        else if (escolha == 3)
        {
            Diesel++;
        }
    }
    printf("MUITO OBRIGADO xD\nAlcool = %d\nGasolina = %d\nDiesel = %d", Alcool, Gasolina, Diesel);
    
}
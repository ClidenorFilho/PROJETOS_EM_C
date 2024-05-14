/*Leia um valor inteiro N. Este valor será a quantidade de números inteiros que serão lidos em seguida.
Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou IMPAR, e também
se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá imprimir
apenas NULO. */
#include <stdio.h>
int main(){
    int quantidade_num, numero_digitado;
    printf("QUANTOS NUMEROS VOCE VAI DIGITAR?");
    scanf("%d", &quantidade_num);

    for(int i = 0; i < quantidade_num; i++){
        printf("digite um numero: ");
        scanf("%d", &numero_digitado);
        if(numero_digitado % 2 != 0){
            printf("IMPAR ");
        }
        if(numero_digitado % 2 == 0){
            printf("PAR ");
        }
        if(numero_digitado > 0){
            printf("POSITIVO" );
        }
        if (numero_digitado < 0)
        {
            printf("NEGATIVO");
        }
    }
}
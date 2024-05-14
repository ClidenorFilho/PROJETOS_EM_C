/*Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo,
conforme exemplo */
#include <stdio.h>
int main(){
    int quntd_valores, valores, dentro = 0, fora = 0;
    printf("quantos numero voce vai digitar:");
    scanf("%d", &quntd_valores);
    for (int i = 0; i < quntd_valores; i++)
    {
        scanf("%d", &valores);
        if(valores < 20 && valores > 10){
            dentro++;
        } else{
            fora++;
        }
    }
    printf("%d DENTRO \n %d FORA", dentro, fora);
    
}
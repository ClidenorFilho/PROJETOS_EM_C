/*Leia um valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de
teste consiste de 3 valores reais, para os quais você deverá calcular e mostrar a média ponderada, sendo
que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5. Vale lembrar
que a média ponderada é a soma de todos os valores multiplicados pelo seu respectivo peso, dividida
pela soma dos pesos*/
#include <stdio.h>
int main(){
    float num_casos, media_ponderada, n1, n2, n3;
    printf("quantos casos voce vai digitar? \n");
    scanf("%f", &num_casos);

    for(int i = 0; i < num_casos; i++){
        media_ponderada = 0, n1 = 0, n2 = 0, n3 = 0;
        printf("digite tres numeros\n");
        scanf("%f%f%f", &n1, &n2, &n3);

        media_ponderada = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;
        printf("%.2f\n", media_ponderada);
        i++;
    }
}
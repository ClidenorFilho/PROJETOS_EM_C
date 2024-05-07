/*Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no
sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence (Q1, Q2, Q3 ou Q4). O
algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem
escrever mensagem alguma)*/
#include <stdio.h>
int main(){
    int eixox, eixoy;
    while (eixox != 0 || eixoy != 0)
    {
        scanf("%d%d", &eixox, &eixoy);

        if(eixox > 0 && eixoy > 0)
        {
        printf("Q1");
        }
            else if (eixox < 0 && eixoy > 0)
            {
                printf("Q2");
            }
            else if (eixox < 0 && eixoy < 0)
            {
                printf("Q3");
            }
            else if(eixox > 0 && eixoy < 0)
            {
                printf("Q4");
            }
            }
    
}
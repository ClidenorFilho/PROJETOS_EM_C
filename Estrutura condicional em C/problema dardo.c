/*No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir.
Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual
foi a maior.*/
#include <stdio.h>
int main(){
    float chance1, chance2, chance3;
    scanf("%f%f%f", &chance1, &chance2, &chance3);
        if(chance1 > chance2 && chance2 > chance3)
        {
        printf("MAIOR DISTANCIA = %.2f", chance1);
    }
        else if (chance2 > chance1 && chance1 > chance3)
        {
        printf("MAIOR DISTANCIA = %.2f", chance2);

    }
        else
        {
                printf("MAIOR DISTANCIA = %.2f", chance3);

    }
    
}
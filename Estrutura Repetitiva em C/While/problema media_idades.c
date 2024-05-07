/*Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um
indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcular
e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez,
mostrar a mensagem "IMPOSSIVEL CALCULAR". */
#include <stdio.h>
int main(){
    int idade, soma = 0, cont = 0;
    double media;
    scanf("%d", &idade);
    
    while (idade > 0)
    {
        soma += idade;
        cont++;
        scanf("%d", &idade);
    }
    if(cont == 0){
        printf("IMPOSSIVEL CALCULAR");
    }
    else{
        media = soma / cont;
        printf("A MEDIA ENTRE AS IDADES E : %.2lf", media);
    }
}
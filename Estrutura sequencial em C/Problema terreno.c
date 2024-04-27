/*Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma
casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,
o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com
duas casas decimais*/
#include <stdio.h>
int main(){
    float largura_terreno, comprimento_terreno, valor_metro_quadrado, area_terreno, preco_terreno;

    scanf("%f%f%f", &largura_terreno, &comprimento_terreno, &valor_metro_quadrado);

    area_terreno = largura_terreno * comprimento_terreno;
    preco_terreno = area_terreno * valor_metro_quadrado;
    
    printf("area do terro = %.2f \n preco do terreno = %.2f", area_terreno, preco_terreno);

}
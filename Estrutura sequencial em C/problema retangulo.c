/*Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor
da área, perímetro e diagonal deste retângulo, com quatro casas decimais, conforme exemplos. */
#include<stdio.h>
#include <math.h>
int main(){
    float base_retangulo, altura_retangulo, area, perimetro, diagonal;
    scanf("%f%f", &base_retangulo, &altura_retangulo);
    area = (base_retangulo * altura_retangulo) / 2;
    perimetro = (2 * base_retangulo) + (2 * altura_retangulo);
    diagonal = sqrt ((pow(base_retangulo, 2)) + (pow(altura_retangulo, 2)));
    printf("area  = %.2f \n perimetro  = %.2f \n diagonal  = %.2f", area, perimetro, diagonal);

}
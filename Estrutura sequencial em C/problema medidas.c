/*Fazer um programa para ler três medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados
com quatro casas decimais):
a) a área do quadrado que tem lado A
b) a área do triângulo retângulo que base A e altura B
c) a área do trapézio que tem bases A e B, e altura C */
#include<stdio.h>
#include <math.h>
int main(){
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double area_quadrado = pow(a, 2), area_triangulo = a * b / 2, area_trapezio = ((a + b) * c) / 2;
    printf("area_quadrado  = %.2lf \n area do triangulo = %.2lf \n area do trapezio = %.2lf", area_quadrado, area_triangulo, area_trapezio);
}
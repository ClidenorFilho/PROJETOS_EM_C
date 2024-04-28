/*Fazer um programa para ler os três coeficientes de uma equação do segundo grau. Usando a fórmula
de Baskara, calcular e mostrar os valores das raízes x1 e x2 da equação com quatro casas decimais,
conforme exemplo. Se a equação não possuir raízes reais, mostrar uma mensagem. 
*/
#include <stdio.h>
#include<math.h>
int main(){
    double a, b, c, delta, x1, x2;
    scanf("%lf%lf%lf", &a, &b, &c);
    delta = pow(b, 2) - 4 * a * c;
    x1 = (-b + sqrt(delta) ) / 2 * a;
    x2 = (-b - sqrt(delta) ) / 2 * a;
    if(delta < 0){
        printf("esta equacao nao possui raizes reais");
    }
    else{
        printf("x1 = %.2lf\n x2 = %.2lf", x1, x2);
    }
}
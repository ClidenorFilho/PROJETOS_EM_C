/*Fazer um programa para ler o valor "r" do raio de um círculo, e depois mostrar o valor da área do
círculo com três casas decimais. A fórmula da área do círculo é a seguinte: 𝑎𝑟𝑒𝑎 = 𝜋. 𝑟 ^ 2 */
#include <stdio.h>
#include <math.h>
int main(){
    double raio, area_circulo;
    scanf("%lf", &raio);
    area_circulo = 3.14 * pow(raio, 2);
    printf("%.2lf", area_circulo);
}
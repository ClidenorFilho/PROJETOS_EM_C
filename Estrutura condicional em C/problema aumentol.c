/*Uma empresa vai conceder um aumento percentual de
salário aos seus funcionários dependendo de quanto
cada pessoa ganha, conforme tabela ao lado. Fazer um
programa para ler o salário de uma pessoa, daí mostrar
qual o novo salário desta pessoa depois do aumento,
quanto foi o aumento e qual foi a porcentagem de aumento.
Salário / atual Aumento
Até R$ 1000.00 
20%
Acima de R$ 1000.00 até R$ 3000.00
15%
Acima de R$ 3000.00 até R$ 8000.00
10%
Acima de R$ 8000.00 5% */
#include<stdio.h>
int main(){
    double salario_atual, novo_salario, aumento, porcentagem;
    scanf("%lf", &salario_atual);
    if(salario_atual <= 1000){
        novo_salario = salario_atual * 120 / 100;
        aumento = novo_salario - salario_atual;
        printf("novo salario = %.2lf \n aumento = %.2lf \n porcentagem = 20%", novo_salario, aumento);
    }
        else if(salario_atual > 1000 && salario_atual <= 3000){
        novo_salario = salario_atual * 115 / 100;
        aumento = novo_salario - salario_atual;
        printf("novo salario = %.2lf \n aumento = %.2lf \n porcentagem = 15%", novo_salario, aumento);
    }
        else if(salario_atual > 3000 && salario_atual <= 8000){
        novo_salario = salario_atual * 110 / 100;
        aumento = novo_salario - salario_atual;
        printf("novo salario = %.2lf \n aumento = %.2lf \n porcentagem = 10%", novo_salario, aumento);
    }
        else if(salario_atual > 8000){
        novo_salario = salario_atual * 105 / 100;
        aumento = novo_salario - salario_atual;
        printf("novo salario = %.2lf \n aumento = %.2lf \n porcentagem = 5%", novo_salario, aumento);
    }
}
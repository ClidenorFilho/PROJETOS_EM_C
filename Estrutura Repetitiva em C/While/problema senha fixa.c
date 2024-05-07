/*Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de
senha incorreta informada, escrever a mensagem "Senha Invalida! Tente novamente:". Quando a senha
for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo
encerrado. Considere que a senha correta é o valor 2002.*/
#include<stdio.h>
int main(){
    int senha, senha_correta = 2002;
    while (1)
    {
        scanf("%d", &senha);
        if(senha != senha_correta)
        {
            printf("SENHA INCORRETA, TENTE NOVAMENTE: \n");
        }
        else{
            printf("ACESSO PERMITIDO\n");
            break;
        }
    }
}
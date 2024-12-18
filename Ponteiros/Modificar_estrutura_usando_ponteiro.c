/*Defina uma estrutura para armazenar os dados de um retângulo, declare uma variável desta estrutura, leia a altura e largura do retângulo, preencha o campo 'area' da estrutura e imprima todos os campos da estrutura.

Para isso, siga os passos abaixo:
- Defina a estrutura 'Retangulo' que contém 3 campos float chamados 'altura', 'largura' e 'area'.
- Declare uma variável do tipo 'Retangulo' chamada p.
- Leia os campos 'altura' e 'largura' de p.
- Declare um ponteiro para 'Retangulo' chamado ptr, e inicialize este ponteiro com o endereço de memória de p.
- Nos passos a seguir use apenas o ponteiro ptr (não acesse a variável p):
    - Armazene em 'area' o produto dos campos 'altura' e 'largura'.
    - Imprima os campos 'altura', 'largura' e 'area'.*/

    #include <stdio.h>

    typedef struct
    {
        float altura, largura, area;
    }Retangulo;

    int main(){
        Retangulo p;
        scanf("%f%f", &p.altura, &p.largura);
        Retangulo *ptr = &p;
        ptr->area = ptr->altura * ptr->largura;
        printf("%.02f %.02f %.02f", ptr->altura, ptr->largura, ptr->area);
        
    }
    
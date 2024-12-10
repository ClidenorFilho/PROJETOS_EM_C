#include <stdio.h>
void excluir(){
    printf("ecluido\n");
}

int main(){
    int a = 1;
    while (a != 0)
    {
        printf("precione 0 para sair: ");
        if(a == 2){
            excluir();
        }
        scanf("%d",&a);
    }    
}
/*Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números
impares entre eles. */
#include <stdio.h>
int main(){
    int numero1, numero2, soma = 0, num_maior, num_menor;
    scanf("%d%d", &numero1, &numero2);
    if(numero1 > numero2){
        num_maior = numero1;
        num_menor = numero2; 
    }
    else{
        num_maior = numero2;
        num_menor = numero1;
    }
    for(int i = num_menor + 1; i < num_maior; i++){
            if (i % 2 != 0)
            {
                soma += i;
            }
            
        }
    printf("%d", soma);
}
/*Leia um valor inteiro X. Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X,
se for o caso. */
#include <stdio.h>
int main(){
    int num_inicial;
    scanf("%d", &num_inicial);
    for (int impares = 0; impares <= num_inicial; impares++)
    {
        if(impares % 2 != 0){
            printf("%d\n", impares);
        }
    }
    
}
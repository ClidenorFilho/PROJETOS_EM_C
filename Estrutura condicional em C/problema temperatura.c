/*Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa. Para
isso, você deve construir um programa que leia a letra "C" ou "F" indicando em qual escala vai ser
informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala com
duas casas decimais. A seguir é dada a fórmula para converter de Fahrenheit para Celsius (você deve
deduzir a fórmula de Celsius para Fahrenheit)*/
#include <stdio.h>
int main(){
    float Celsius, Fahrenheit;
    char escala;
    scanf(" %c", &escala);
        if(escala == 'C')
        {
        scanf("%f", &Celsius);
        Fahrenheit = 1.8 * Celsius + 32;
        printf("Temperatura equivalente em Fahrenheit e = %.2f", Fahrenheit);

    }
        else
        {
        scanf("%f", &Fahrenheit);
        Celsius = (Fahrenheit - 32) / 1.8;
        printf("Temperatura equivalente em Celsius e = %.2f", Celsius);
    }

}
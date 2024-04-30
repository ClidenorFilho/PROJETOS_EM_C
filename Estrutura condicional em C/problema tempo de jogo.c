/*Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo
pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24
horas. */
#include <stdio.h>
int main(){
    int hora_inicial, hora_final, horas_total;
    scanf("%d%d", &hora_inicial, &hora_final);
   horas_total = hora_final - hora_inicial;
   if(horas_total <= 0){
    horas_total += 24;
   }
    printf("O JOGO DUROU %d HORAS", horas_total);
}